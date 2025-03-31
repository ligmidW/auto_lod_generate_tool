// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "auto_lod_generate_tool/Public/auto_lod_generate_tool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeauto_lod_generate_tool() {}

// Begin Cross Module References
AUTO_LOD_GENERATE_TOOL_API UClass* Z_Construct_UClass_UAutoLodGenerateToolBPLibrary();
AUTO_LOD_GENERATE_TOOL_API UClass* Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_auto_lod_generate_tool();
// End Cross Module References

// Begin Class UAutoLodGenerateToolBPLibrary Function import_fbx
struct Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics
{
	struct AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms
	{
		FString FBXPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoLodGenerateTool" },
		{ "DisplayName", "Import FBX" },
		{ "ModuleRelativePath", "Public/auto_lod_generate_tool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FBXPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FBXPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_FBXPath = { "FBXPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms, FBXPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FBXPath_MetaData), NewProp_FBXPath_MetaData) };
void Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms), &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_FBXPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoLodGenerateToolBPLibrary, nullptr, "import_fbx", nullptr, nullptr, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::AutoLodGenerateToolBPLibrary_eventimport_fbx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoLodGenerateToolBPLibrary::execimport_fbx)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FBXPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAutoLodGenerateToolBPLibrary::import_fbx(Z_Param_FBXPath);
	P_NATIVE_END;
}
// End Class UAutoLodGenerateToolBPLibrary Function import_fbx

// Begin Class UAutoLodGenerateToolBPLibrary Function lod_generate
struct Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics
{
	struct AutoLodGenerateToolBPLibrary_eventlod_generate_Parms
	{
		FString InputPath;
		FString OutputPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoLodGenerateTool" },
		{ "DisplayName", "LOD Generate" },
		{ "ModuleRelativePath", "Public/auto_lod_generate_tool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLodGenerateToolBPLibrary_eventlod_generate_Parms, InputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPath_MetaData), NewProp_InputPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_OutputPath = { "OutputPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLodGenerateToolBPLibrary_eventlod_generate_Parms, OutputPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputPath_MetaData), NewProp_OutputPath_MetaData) };
void Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoLodGenerateToolBPLibrary_eventlod_generate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoLodGenerateToolBPLibrary_eventlod_generate_Parms), &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_InputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_OutputPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoLodGenerateToolBPLibrary, nullptr, "lod_generate", nullptr, nullptr, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::AutoLodGenerateToolBPLibrary_eventlod_generate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::AutoLodGenerateToolBPLibrary_eventlod_generate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoLodGenerateToolBPLibrary::execlod_generate)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAutoLodGenerateToolBPLibrary::lod_generate(Z_Param_InputPath,Z_Param_OutputPath);
	P_NATIVE_END;
}
// End Class UAutoLodGenerateToolBPLibrary Function lod_generate

// Begin Class UAutoLodGenerateToolBPLibrary Function setup_lod
struct Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics
{
	struct AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms
	{
		UStaticMesh* Mesh;
		int32 NumLODs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AutoLodGenerateTool" },
		{ "CPP_Default_NumLODs", "3" },
		{ "ModuleRelativePath", "Public/auto_lod_generate_tool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLODs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_NumLODs = { "NumLODs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms, NumLODs), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms), &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_NumLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoLodGenerateToolBPLibrary, nullptr, "setup_lod", nullptr, nullptr, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::AutoLodGenerateToolBPLibrary_eventsetup_lod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoLodGenerateToolBPLibrary::execsetup_lod)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLODs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAutoLodGenerateToolBPLibrary::setup_lod(Z_Param_Mesh,Z_Param_NumLODs);
	P_NATIVE_END;
}
// End Class UAutoLodGenerateToolBPLibrary Function setup_lod

// Begin Class UAutoLodGenerateToolBPLibrary
void UAutoLodGenerateToolBPLibrary::StaticRegisterNativesUAutoLodGenerateToolBPLibrary()
{
	UClass* Class = UAutoLodGenerateToolBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "import_fbx", &UAutoLodGenerateToolBPLibrary::execimport_fbx },
		{ "lod_generate", &UAutoLodGenerateToolBPLibrary::execlod_generate },
		{ "setup_lod", &UAutoLodGenerateToolBPLibrary::execsetup_lod },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoLodGenerateToolBPLibrary);
UClass* Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_NoRegister()
{
	return UAutoLodGenerateToolBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "auto_lod_generate_tool.h" },
		{ "ModuleRelativePath", "Public/auto_lod_generate_tool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_import_fbx, "import_fbx" }, // 2999125311
		{ &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_lod_generate, "lod_generate" }, // 946334363
		{ &Z_Construct_UFunction_UAutoLodGenerateToolBPLibrary_setup_lod, "setup_lod" }, // 3371151774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoLodGenerateToolBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_auto_lod_generate_tool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::ClassParams = {
	&UAutoLodGenerateToolBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoLodGenerateToolBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAutoLodGenerateToolBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoLodGenerateToolBPLibrary.OuterSingleton, Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoLodGenerateToolBPLibrary.OuterSingleton;
}
template<> AUTO_LOD_GENERATE_TOOL_API UClass* StaticClass<UAutoLodGenerateToolBPLibrary>()
{
	return UAutoLodGenerateToolBPLibrary::StaticClass();
}
UAutoLodGenerateToolBPLibrary::UAutoLodGenerateToolBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoLodGenerateToolBPLibrary);
UAutoLodGenerateToolBPLibrary::~UAutoLodGenerateToolBPLibrary() {}
// End Class UAutoLodGenerateToolBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoLodGenerateToolBPLibrary, UAutoLodGenerateToolBPLibrary::StaticClass, TEXT("UAutoLodGenerateToolBPLibrary"), &Z_Registration_Info_UClass_UAutoLodGenerateToolBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoLodGenerateToolBPLibrary), 1490065583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_475659529(TEXT("/Script/auto_lod_generate_tool"),
	Z_CompiledInDeferFile_FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
