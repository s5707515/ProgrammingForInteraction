// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PFI_Lab5_Start : ModuleRules
{
	public PFI_Lab5_Start(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PFI_Lab5_Start",
			"PFI_Lab5_Start/Variant_Strategy",
			"PFI_Lab5_Start/Variant_Strategy/UI",
			"PFI_Lab5_Start/Variant_TwinStick",
			"PFI_Lab5_Start/Variant_TwinStick/AI",
			"PFI_Lab5_Start/Variant_TwinStick/Gameplay",
			"PFI_Lab5_Start/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
