// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BowlingPhyX : ModuleRules
{
	public BowlingPhyX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
