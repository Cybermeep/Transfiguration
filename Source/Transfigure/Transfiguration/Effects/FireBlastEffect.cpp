// Source/TMovement/Private/Transfiguration/Effects/FireBlastEffect.cpp

#include "Transfiguration/Effects/FireBlastEffect.h"
#include "Character/TMCharacter.h"
#include "Destruction/DestructionManager.h"
#include "Kismet/GameplayStatics.h"
#include "Components/DecalComponent.h"
#include "Particles/ParticleSystemComponent.h"

void UFireBlastEffect::Execute(
    const FVector& Origin,
    UTransfigurationDefinition* SpellData,
    AActor* Instigator,
    UWorld* World)
{
    if (!SpellData || !World) return;

    // Store momentum if conserving
    if (SpellData->bConservesMomentum)
    {
        StoreInstigatorVelocity(Instigator);
    }

    float ScaledDamage = GetScaledDamage(SpellData, Instigator);

    // Apply damage to enemies
    UGameplayStatics::ApplyRadialDamage(
        World,
        ScaledDamage,
        Origin,
        SpellData->TriggerRadius,
        UDamageType::StaticClass(),
        TArray<AActor*>{},
        Instigator,
        nullptr,
        /*bDoFullDamage=*/false);

    // Queue environmental destruction
    if (SpellData->bCausesEnvironmentalDestruction)
    {
        ATMCharacter* TMChar = Cast<ATMCharacter>(Instigator);
        if (TMChar && TMChar->bIsTemporalActive)
        {
            ADestructionManager* DestructionManager = ADestructionManager::GetInstance(World);
            if (DestructionManager)
            {
                DestructionManager->ProcessDestructionQueue();
            }
        }
        else
        {
            QueueEnvironmentalDestruction(Origin, Instigator, SpellData);
        }
    }

    // Movement augmentation - Fire + Slide = Fire Trail
    ATMCharacter* TMChar = Cast<ATMCharacter>(Instigator);
    if (TMChar && TMChar->IsSliding() && SpellData->MovementAugmentations.Contains("Slide"))
    {
        SpawnFireTrail(Instigator, FireTrailDuration);
    }

    if (SpellData->bConservesMomentum)
    {
        RestoreInstigatorVelocity(Instigator);
    }
}

void UFireBlastEffect::SpawnFireTrail(AActor* Instigator, float Duration)
{
    // Implementation would spawn fire trail actor that follows the sliding player
    // This is a placeholder for the actual implementation
    UE_LOG(LogTemp, Log, TEXT("FireBlastEffect: Spawning fire trail for %f seconds"), Duration);

    // In real implementation:
    // 1. Spawn a fire trail actor attached to the instigator
    // 2. Set its lifespan to Duration
    // 3. Configure damage over time for enemies that touch the trail
}