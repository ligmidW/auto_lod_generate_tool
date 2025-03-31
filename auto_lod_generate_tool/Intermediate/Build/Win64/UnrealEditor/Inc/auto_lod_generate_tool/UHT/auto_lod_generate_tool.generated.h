// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "auto_lod_generate_tool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef AUTO_LOD_GENERATE_TOOL_auto_lod_generate_tool_generated_h
#error "auto_lod_generate_tool.generated.h already included, missing '#pragma once' in auto_lod_generate_tool.h"
#endif
#define AUTO_LOD_GENERATE_TOOL_auto_lod_generate_tool_generated_h

#define FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execimport_fbx); \
	DECLARE_FUNCTION(execsetup_lod); \
	DECLARE_FUNCTION(execlod_generate);


#define FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoLodGenerateToolBPLibrary(); \
	friend struct Z_Construct_UClass_UAutoLodGenerateToolBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutoLodGenerateToolBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/auto_lod_generate_tool"), NO_API) \
	DECLARE_SERIALIZER(UAutoLodGenerateToolBPLibrary)


#define FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoLodGenerateToolBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAutoLodGenerateToolBPLibrary(UAutoLodGenerateToolBPLibrary&&); \
	UAutoLodGenerateToolBPLibrary(const UAutoLodGenerateToolBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoLodGenerateToolBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoLodGenerateToolBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoLodGenerateToolBPLibrary) \
	NO_API virtual ~UAutoLodGenerateToolBPLibrary();


#define FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_9_PROLOG
#define FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_INCLASS_NO_PURE_DECLS \
	FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTO_LOD_GENERATE_TOOL_API UClass* StaticClass<class UAutoLodGenerateToolBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_auto_lod_generate_Plugins_auto_lod_generate_tool_Source_auto_lod_generate_tool_Public_auto_lod_generate_tool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
