// Source/TMovement/Private/Grapple/GrappleComponent.cpp

#include "Grapple/GrappleComponent.h"
#include "Grapple/GrappleLine.h"
#include "Character/TMCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/World.h"

UGrappleComponent::UGrappleComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UGrappleComponent::BeginPlay()
{
    Super::BeginPlay();
    OwnerCharacter = Cast<ATMCharacter>(GetOwner());
}

void UGrappleComponent::TickComponent(float DeltaTime, ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateLineLifecycles(DeltaTime);

    if (bIsSwinging)
    {
        // Update swing physics
        // Implementation would handle pendulum motion
    }
}

void UGrappleComponent::StartAiming(ETransfigurationElement Element)
{
    if (CurrentState != EGrappleState::Inactive) return;

    CurrentElement = Element;
    CurrentState = EGrappleState::Aiming;
    OnGrappleStateChanged.Broadcast(CurrentState);
}

void UGrappleComponent::FireGrapple(FVector AimLocation, AActor* TargetEnemy)
{
    if (CurrentState != EGrappleState::Aiming && CurrentState != EGrappleState::Inactive) return;

    if (!OwnerCharacter) return;

    float ManaCost = (TargetEnemy ? CombatGrappleManaCost : SwingManaCost);
    if (!OwnerCharacter->ConsumeMana(ManaCost))
    {
        UE_LOG(LogTemp, Warning, TEXT("Not enough mana for grapple"));
        return;
    }

    if (TargetEnemy && IsEnemyGrappleable(TargetEnemy))
    {
        PerformCombatGrapple(TargetEnemy, ECombatGrappleMove::Kick);
    }
    else
    {
        PerformGrappleSwing(AimLocation);
    }
}

void UGrappleComponent::PerformGrappleSwing(FVector AnchorPoint)
{
    if (!OwnerCharacter) return;

    // Store pre-grapple velocity for momentum conservation
    FVector PreVelocity = OwnerCharacter->GetCharacterMovement()->Velocity;
    PreserveMomentum(PreVelocity);

    // Create grapple line data
    FGrappleLineData NewLine;
    NewLine.StartPoint = OwnerCharacter->GetActorLocation();
    NewLine.EndPoint = AnchorPoint;
    NewLine.Element = CurrentElement;
    NewLine.Lifetime = MaxSwingTime;
    NewLine.bIsActive = true;

    ActiveLines.Add(NewLine);
    OnGrappleLineCreated.Broadcast(NewLine);

    // Start swinging
    bIsSwinging = true;
    CurrentState = EGrappleState::Swinging;
    OnGrappleStateChanged.Broadcast(CurrentState);

    // Set timer to auto-release
    GetWorld()->GetTimerManager().SetTimer(
        SwingTimerHandle,
        this, &UGrappleComponent::ReleaseGrapple,
        MaxSwingTime,
        false);

    // Apply elemental effect
    ApplyElementalEffect(NewLine);

    UE_LOG(LogTemp, Verbose, TEXT("GrappleComponent: Started swing to %s"), *AnchorPoint.ToString());
}

void UGrappleComponent::PerformCombatGrapple(AActor* TargetEnemy, ECombatGrappleMove MoveType)
{
    if (!OwnerCharacter || !TargetEnemy) return;

    // Store pre-grapple velocity
    FVector PreVelocity = OwnerCharacter->GetCharacterMovement()->Velocity;

    // Pull character to enemy
    FVector Direction = (TargetEnemy->GetActorLocation() - OwnerCharacter->GetActorLocation()).GetSafeNormal();
    float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), TargetEnemy->GetActorLocation());

    // Apply impulse toward enemy
    OwnerCharacter->GetCharacterMovement()->AddImpulse(Direction * Distance * 10.0f, true);

    CurrentState = EGrappleState::CombatGrapple;
    OnGrappleStateChanged.Broadcast(CurrentState);
    OnCombatGrappleExecuted.Broadcast(MoveType);

    // Create combat grapple line (very brief)
    FGrappleLineData CombatLine;
    CombatLine.StartPoint = OwnerCharacter->GetActorLocation();
    CombatLine.EndPoint = TargetEnemy->GetActorLocation();
    CombatLine.Element = CurrentElement;
    CombatLine.Lifetime = 0.5f;
    CombatLine.bIsActive = true;

    ActiveLines.Add(CombatLine);
    OnGrappleLineCreated.Broadcast(CombatLine);

    UE_LOG(LogTemp, Log, TEXT("GrappleComponent: Executed combat grapple on %s"), *TargetEnemy->GetName());
}

void UGrappleComponent::ExecuteCombatMove(ECombatGrappleMove MoveType, AActor* TargetEnemy)
{
    if (!OwnerCharacter) return;

    // This would be called from input handlers for specific combat moves
    PerformCombatGrapple(TargetEnemy, MoveType);
}

void UGrappleComponent::ReleaseGrapple()
{
    if (!bIsSwinging) return;

    bIsSwinging = false;
    CurrentState = EGrappleState::Inactive;
    OnGrappleStateChanged.Broadcast(CurrentState);

    GetWorld()->GetTimerManager().ClearTimer(SwingTimerHandle);

    UE_LOG(LogTemp, Verbose, TEXT("GrappleComponent: Released grapple"));
}

void UGrappleComponent::CancelAiming()
{
    if (CurrentState != EGrappleState::Aiming) return;

    CurrentState = EGrappleState::Inactive;
    OnGrappleStateChanged.Broadcast(CurrentState);
}

void UGrappleComponent::CreateWebLine(FVector StartPoint, FVector EndPoint)
{
    if (!CanCreateWebLine()) return;

    if (!OwnerCharacter->ConsumeMana(WebLineManaCost)) return;

    FGrappleLineData WebLine;
    WebLine.StartPoint = StartPoint;
    WebLine.EndPoint = EndPoint;
    WebLine.Element = CurrentElement;
    WebLine.Lifetime = GetCurrentTierLines() * 2.0f; // Higher tier = longer lasting
    WebLine.bIsActive = true;

    ActiveLines.Add(WebLine);
    OnGrappleLineCreated.Broadcast(WebLine);

    UE_LOG(LogTemp, Verbose, TEXT("GrappleComponent: Created web line"));
}

bool UGrappleComponent::CanCreateWebLine() const
{
    return CurrentTier >= EGrappleTier::Web && ActiveLines.Num() < MaxSimultaneousLines;
}

TArray<FVector> UGrappleComponent::FindWebConnectionPoints() const
{
    TArray<FVector> Result;

    // Find nearby grapple points (sigils, destroyed geometry, etc.)
    // Implementation would scan environment

    return Result;
}

bool UGrappleComponent::IsEnemyGrappleable(AActor* Enemy) const
{
    if (!Enemy) return false;

    // Check if enemy is within range and not immune
    float Distance = FVector::Dist(OwnerCharacter->GetActorLocation(), Enemy->GetActorLocation());
    return Distance <= MaxGrappleRange;
}

float UGrappleComponent::GetCurrentTierLines() const
{
    switch (CurrentTier)
    {
    case EGrappleTier::Strand: return 1.0f;
    case EGrappleTier::Thread: return 2.0f;
    case EGrappleTier::Cord: return 3.0f;
    case EGrappleTier::Rope: return 4.0f;
    case EGrappleTier::Web: return 6.0f;
    case EGrappleTier::Nexus: return 8.0f;
    default: return 1.0f;
    }
}

float UGrappleComponent::GetMomentumPreservation() const
{
    return MomentumConservation;
}

void UGrappleComponent::ApplyElementalEffect(FGrappleLineData& LineData)
{
    // Apply elemental-specific effects to the line
    // Implementation would handle different elements
}

void UGrappleComponent::UpdateLineLifecycles(float DeltaTime)
{
    for (int32 i = ActiveLines.Num() - 1; i >= 0; i--)
    {
        ActiveLines[i].Lifetime -= DeltaTime;
        if (ActiveLines[i].Lifetime <= 0.0f)
        {
            ActiveLines.RemoveAt(i);
        }
    }

    CurrentLineCount = ActiveLines.Num();
}

void UGrappleComponent::CleanupExpiredLines()
{
    // Cleanup handled in UpdateLineLifecycles
}

bool UGrappleComponent::HasLineTierCapability(FString Capability) const
{
    // Check if current tier has specific capability
    // Implementation would check against tier capabilities
    return true;
}

void UGrappleComponent::PreserveMomentum(FVector PreGrappleVelocity)
{
    SwingVelocity = PreGrappleVelocity * MomentumConservation;
}