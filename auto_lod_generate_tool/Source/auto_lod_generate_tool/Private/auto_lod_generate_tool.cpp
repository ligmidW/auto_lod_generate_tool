#include "auto_lod_generate_tool.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "AssetToolsModule.h"
#include "Factories/FbxFactory.h"
#include "Factories/FbxImportUI.h"
#include "Editor.h"
#include "Factories/FbxStaticMeshImportData.h"

#define LOCTEXT_NAMESPACE "Fauto_lod_generate_toolModule"

bool UAutoLodGenerateToolBPLibrary::lod_generate(const FString& InputPath, const FString& OutputPath)
{
    FString AbsolutePath = FPaths::ConvertRelativePathToFull(InputPath);
    if (!FPaths::FileExists(AbsolutePath))
    {
        return false;
    }
    
    return import_fbx(AbsolutePath);
}

bool UAutoLodGenerateToolBPLibrary::setup_lod(UStaticMesh* Mesh, int32 NumLODs)
{
    if (!Mesh || !GIsEditor)
    {
        return false;
    }

    Mesh->PreEditChange(nullptr);
    Mesh->Modify();

    Mesh->SetNumSourceModels(NumLODs + 1); 
    Mesh->SetLODGroup(NAME_None);
    
    const float LODPercentages[] = { 0.5f, 0.25f, 0.1f };
    +
    FStaticMeshSourceModel& BaseLOD = Mesh->GetSourceModel(0);
    BaseLOD.BuildSettings.bRecomputeNormals = true;
    BaseLOD.BuildSettings.bRecomputeTangents = true;
    BaseLOD.BuildSettings.bUseMikkTSpace = true;

    for (int32 LODIndex = 1; LODIndex <= NumLODs; LODIndex++)
    {
        FStaticMeshSourceModel& LODModel = Mesh->GetSourceModel(LODIndex);
        
        LODModel.BuildSettings = BaseLOD.BuildSettings;

        LODModel.ReductionSettings.PercentTriangles = LODPercentages[FMath::Min(LODIndex - 1, 2)];
        LODModel.ReductionSettings.TerminationCriterion = EStaticMeshReductionTerimationCriterion::Triangles;
        LODModel.ReductionSettings.SilhouetteImportance = EMeshFeatureImportance::Normal;
        LODModel.ReductionSettings.TextureImportance = EMeshFeatureImportance::Normal;
        LODModel.ReductionSettings.ShadingImportance = EMeshFeatureImportance::Normal;

        LODModel.ScreenSize = FMath::Pow(0.5f, LODIndex);
    }
    
    Mesh->Build(true);
    Mesh->PostEditChange();
    
    UPackage* Package = Mesh->GetPackage();
    if (Package)
    {
        Package->MarkPackageDirty();
        FString PackageFileName = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());
        return UPackage::SavePackage(Package, nullptr, RF_Standalone, *PackageFileName);
    }
    
    return false;
}

bool UAutoLodGenerateToolBPLibrary::import_fbx(const FString& FBXPath)
{
    if (!FBXPath.EndsWith(TEXT(".fbx"), ESearchCase::IgnoreCase))
    {
        return false;
    }

    UFbxFactory* FbxFactory = NewObject<UFbxFactory>();
    FbxFactory->AddToRoot();
    
    UFbxImportUI* ImportUI = NewObject<UFbxImportUI>();
    FbxFactory->ImportUI = ImportUI;

    ImportUI->bImportMaterials = false;
    ImportUI->bImportTextures = false;
    ImportUI->bImportAsSkeletal = false;
    ImportUI->MeshTypeToImport = FBXIT_StaticMesh;
    ImportUI->bAutomatedImportShouldDetectType = true;
    
    UFbxStaticMeshImportData* StaticMeshImportData = NewObject<UFbxStaticMeshImportData>();
    StaticMeshImportData->bGenerateLightmapUVs = true;
    StaticMeshImportData->bAutoGenerateCollision = true;
    StaticMeshImportData->bCombineMeshes = true;
    ImportUI->StaticMeshImportData = StaticMeshImportData;

    FString RelativeOutputPath = TEXT("/Game/ImportedMeshes");
    FString AssetName = FPaths::GetBaseFilename(FBXPath);
    FString PackagePath = RelativeOutputPath / AssetName;
    
    UPackage* Package = CreatePackage(*PackagePath);
    if (!Package)
    {
        return false;
    }

    bool bOperationCanceled = false;
    UObject* ImportedObject = FbxFactory->ImportObject(UStaticMesh::StaticClass(), 
                                                      Package,
                                                      *AssetName,
                                                      RF_Public | RF_Standalone, 
                                                      FBXPath, 
                                                      nullptr, 
                                                      bOperationCanceled);
    
    if (ImportedObject)
    {
        Package->MarkPackageDirty();
        bool bSaved = UPackage::SavePackage(Package, ImportedObject, RF_Public | RF_Standalone, *PackagePath);
        if (bSaved && ImportedObject->IsA<UStaticMesh>())
        {
            return setup_lod(Cast<UStaticMesh>(ImportedObject), 3);
        }
    }
    
    return false;
}

void Fauto_lod_generate_toolModule::StartupModule()
{
}

void Fauto_lod_generate_toolModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(Fauto_lod_generate_toolModule, auto_lod_generate_tool)