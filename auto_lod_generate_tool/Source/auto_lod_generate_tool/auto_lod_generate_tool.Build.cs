// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class auto_lod_generate_tool : ModuleRules
{
    public auto_lod_generate_tool(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "AssetTools",
                "FBX"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UnrealEd",
                "FBX",
                "FbxAutomationTestBuilder"
            }
        );
    }
}
