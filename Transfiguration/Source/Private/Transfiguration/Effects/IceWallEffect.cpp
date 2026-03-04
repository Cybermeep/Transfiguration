// Source/TMovement/Private/Transfiguration/Effects/IceWallEffect.cpp

#include "Transfiguration/Effects/IceWallEffect.h"
#include "Character/TMCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Destruction/DestructionManager.h"
#include "Kismet/GameplayStatics.h"

void UIceWallEffect::Execute(
    const FVector& Origin,
    UTransfigurationDefinition* SpellData,
    AActor* Instigator,
    UWorld* World)
{
    if (!SpellData || !World) return;

    ATMCharacter* TMChar = Cast<ATMCharacter>(Instigator);

    // Check for movement augmentation - Ice + Wall Run = Ice Trail
    if (TMChar && TMChar->IsWallRunning() && SpellData->MovementAugmentations.Contains("WallRun"))
    {
        SpawnIceTrail(Instigator, 5.0f);
    }

    if (SpellData->bConservesMomentum)
    {
        StoreInstigatorVelocity(Instigator);
    }

    // Queue environmental destruction (ice shatters)
    if (SpellData->bCausesEnvironmentalDestruction)
    {
        QueueEnvironmentalDestruction(Origin, Instigator);
    }

    // Create the ice wall
    CreateIceWall(Origin, Instigator);

    if (SpellData->bConservesMomentum)
    {
        RestoreInstigatorVelocity(Instigator);
    }
}

void UIceWallEffect::CreateIceWall(const FVector& Origin, AActor* Instigator)
{
    if (!IceWallClass || !GetWorld()) return;

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = Instigator;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    FVector ToInstigator = (Instigator->GetActorLocation() - Origin);
    ToInstigator.Z = 0.f;
    ToInstigator.Normalize();
    FRotator WallRotation = ToInstigator.Rotation();

    AActor* Wall = GetWorld()->SpawnActor<AActor>(
        IceWallClass, Origin, WallRotation, SpawnParams);

    if (Wall && GetSpellDefinition())
    {
        // Ice walls are temporary
        Wall->SetLifeSpan(GetSpellDefinition()->TimeToLive);
    }
}

void UIceWallEffect::SpawnIceTrail(AActor* Instigator, float Duration)
{
    UE_LOG(LogTemp, Log, TEXT("IceWallEffect: Spawning ice trail for %f seconds"), Duration);
    // Implementation would spawn ice trail along wall run path
}