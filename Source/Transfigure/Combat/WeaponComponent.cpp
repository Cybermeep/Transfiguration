// Source/TMovement/Private/Combat/WeaponComponent.cpp

#include "Combat/WeaponComponent.h"
#include "Character/TMCharacter.h"
#include "Enemy/BaseEnemy.h"
#include "Kismet/GameplayStatics.h"

UWeaponComponent::UWeaponComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.TickInterval = 0.1f;

    // Default elemental multipliers
    ElementalDamageMultipliers.Add(ETransfigurationElement::Fire, 1.2f);
    ElementalDamageMultipliers.Add(ETransfigurationElement::Ice, 1.0f);
    ElementalDamageMultipliers.Add(ETransfigurationElement::Lightning, 1.1f);
    ElementalDamageMultipliers.Add(ETransfigurationElement::Void, 1.3f);
    ElementalDamageMultipliers.Add(ETransfigurationElement::Earth, 1.0f);
}

void UWeaponComponent::BeginPlay()
{
    Super::BeginPlay();
    OwnerCharacter = Cast<ATMCharacter>(GetOwner());
}

void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateInfusion(DeltaTime);
}

void UWeaponComponent::ProcessHit(FHitResult Hit, bool bWasHeadshot, bool bWasKill)
{
    if (!OwnerCharacter) return;

    FWeaponHitInfo HitInfo;
    HitInfo.HitLocation = Hit.ImpactPoint;
    HitInfo.HitActor = Hit.GetActor();
    HitInfo.bWasHeadshot = bWasHeadshot;
    HitInfo.bWasKill = bWasKill;

    // Calculate mana reward
    float ManaToAdd = 0.0f;

    if (bWasKill)
    {
        ManaToAdd = ManaPerKill;
        if (bWasHeadshot)
            ManaToAdd += ManaPerHeadshot;

        OnWeaponKill.Broadcast(Hit.GetActor());
    }
    else
    {
        ManaToAdd = ManaPerHit;
    }

    OwnerCharacter->AddMana(ManaToAdd);

    // Apply elemental damage if infused
    if (bIsInfused && Hit.GetActor())
    {
        ApplyElementalDamage(Hit.GetActor(), Hit, 0.0f);
    }

    OnWeaponHit.Broadcast(HitInfo);
}

void UWeaponComponent::OnMeleeKill(AActor* Target)
{
    if (!OwnerCharacter) return;

    OwnerCharacter->AddMana(ManaPerMelee);
    OnWeaponKill.Broadcast(Target);
}

void UWeaponComponent::InfuseWeaponWithElement(ETransfigurationElement Element)
{
    bIsInfused = true;
    CurrentInfusion = Element;
    InfusionTimeRemaining = ElementalInfusionDuration;

    // Clear any existing timer
    GetWorld()->GetTimerManager().ClearTimer(InfusionTimerHandle);

    // Set timer for infusion expiration
    GetWorld()->GetTimerManager().SetTimer(
        InfusionTimerHandle,
        this, &UWeaponComponent::OnInfusionExpired,
        ElementalInfusionDuration,
        false);

    UE_LOG(LogTemp, Verbose, TEXT("WeaponComponent: Infused with element %d"), (int32)Element);
}

void UWeaponComponent::ClearInfusion()
{
    bIsInfused = false;
    InfusionTimeRemaining = 0.0f;
    GetWorld()->GetTimerManager().ClearTimer(InfusionTimerHandle);
}

void UWeaponComponent::UpdateInfusion(float DeltaTime)
{
    if (!bIsInfused) return;

    InfusionTimeRemaining -= DeltaTime;

    if (InfusionTimeRemaining <= 0.0f)
    {
        OnInfusionExpired();
    }
}

void UWeaponComponent::ApplyElementalDamage(AActor* Target, const FHitResult& Hit, float BaseDamage)
{
    ABaseEnemy* Enemy = Cast<ABaseEnemy>(Target);
    if (!Enemy) return;

    float DamageMultiplier = 1.0f;
    if (ElementalDamageMultipliers.Contains(CurrentInfusion))
    {
        DamageMultiplier = ElementalDamageMultipliers[CurrentInfusion];
    }

    float TotalDamage = BaseDamage * DamageMultiplier;

    // Apply additional elemental effect
    switch (CurrentInfusion)
    {
    case ETransfigurationElement::Fire:
        // Apply burning DOT
        break;
    case ETransfigurationElement::Ice:
        // Apply slow
        break;
    case ETransfigurationElement::Lightning:
        // Apply stun
        break;
    case ETransfigurationElement::Void:
        // Apply blind
        break;
    case ETransfigurationElement::Earth:
        // Apply knockback
        break;
    default:
        break;
    }

    Enemy->TakePoolDamage(TotalDamage, Hit.ImpactPoint);
}

void UWeaponComponent::OnInfusionExpired()
{
    bIsInfused = false;
    InfusionTimeRemaining = 0.0f;
    UE_LOG(LogTemp, Verbose, TEXT("WeaponComponent: Infusion expired"));
}