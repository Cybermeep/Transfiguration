// Source/TMovement/Private/Grapple/CombatGrappleMove.cpp

#include "Grapple/CombatGrappleMove.h"
#include "Character/TMCharacter.h"
#include "Enemy/BaseEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCombatGrappleMove::ExecuteMove(ATMCharacter* Instigator, ABaseEnemy* Target, ETransfigurationElement Element)
{
    if (!Instigator || !Target) return;

    // Calculate damage with elemental bonus
    float TotalDamage = BaseDamage;
    if (ElementalDamageBonus.Contains(Element))
    {
        TotalDamage *= ElementalDamageBonus[Element];
    }

    // Apply momentum-based bonus
    float Speed = Instigator->GetCharacterMovement()->Velocity.Size();
    ApplyMomentumDamage(Instigator, Target, Speed);

    // Apply elemental effect
    ApplyElementalDamage(Target, Element, TotalDamage);

    // Broadcast event for VFX
    OnMoveExecuted(Instigator, Target, Target->GetActorLocation());

    UE_LOG(LogTemp, Verbose, TEXT("CombatGrappleMove: Executed %s on %s for %f damage"),
        *UEnum::GetValueAsString(MoveType), *Target->GetName(), TotalDamage);
}

void UCombatGrappleMove::ApplyElementalDamage(ABaseEnemy* Target, ETransfigurationElement Element, float BaseDamage)
{
    if (!Target) return;

    // Apply damage with elemental typing
    Target->TakePoolDamage(BaseDamage, Target->GetActorLocation());

    // Apply elemental status effect based on element
    switch (Element)
    {
    case ETransfigurationElement::Fire:
        // Apply burning DOT
        break;
    case ETransfigurationElement::Ice:
        // Apply slow/freeze
        break;
    case ETransfigurationElement::Lightning:
        // Apply stun
        break;
    case ETransfigurationElement::Void:
        // Apply blind/confuse
        break;
    case ETransfigurationElement::Earth:
        // Apply knockback
        break;
    default:
        break;
    }
}

void UCombatGrappleMove::ApplyMomentumDamage(ATMCharacter* Instigator, ABaseEnemy* Target, float Speed)
{
    if (!Instigator || !Target) return;

    // Bonus damage based on how fast you're going
    float MomentumBonus = Speed / 1000.0f * 0.5f; // Up to 50% bonus at 1000 speed
    float BonusDamage = BaseDamage * MomentumBonus;

    if (BonusDamage > 0)
    {
        Target->TakePoolDamage(BonusDamage, Target->GetActorLocation());
    }
}