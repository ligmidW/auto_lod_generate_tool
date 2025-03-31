// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "auto_lod_generate_tool.generated.h"

UCLASS()
class AUTO_LOD_GENERATE_TOOL_API UAutoLodGenerateToolBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "AutoLodGenerateTool", meta = (DisplayName = "LOD Generate"))
    static bool lod_generate(const FString& InputPath, const FString& OutputPath);

    UFUNCTION(BlueprintCallable, Category = "AutoLodGenerateTool")
    static bool setup_lod(UStaticMesh* Mesh, int32 NumLODs = 3);

    UFUNCTION(BlueprintCallable, Category = "AutoLodGenerateTool", meta = (DisplayName = "Import FBX"))
    static bool import_fbx(const FString& FBXPath);
};

class Fauto_lod_generate_toolModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
