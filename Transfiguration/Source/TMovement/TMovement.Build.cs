// Source/TMovement/TMovement.Build.cs

using UnrealBuildTool;

public class TMovement : ModuleRules
{
    public TMovement(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "Niagara",
            "GameplayTasks",
            "UMG",
            "AIModule",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "ChaosSolverEngine",
            "GeometryCollectionEngine"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",
            "SlateCore"
        });
    }
}