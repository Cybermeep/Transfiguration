// Source/TMovement/Private/Grapple/GrappleLine.cpp

#include "Grapple/GrappleLine.h"
#include "Components/SplineComponent.h"
#include "NiagaraComponent.h"
#include "Components/DecalComponent.h"
#include "TimerManager.h"
#include "Engine/World.h"

AGrappleLine::AGrappleLine()
{
    PrimaryActorTick.bCanEverTick = true;

    SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    SetRootComponent(SplineComponent);

    NiagaraEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraEffect"));
    NiagaraEffect->SetupAttachment(RootComponent);

    TrailDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("TrailDecal"));
    TrailDecal->SetupAttachment(RootComponent);
}

void AGrappleLine::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    TimeRemaining -= DeltaTime;

    if (TimeRemaining <= 0.0f && bIsValid)
    {
        ExpireLine();
    }
}

void AGrappleLine::InitializeLine(const FGrappleLineData& InLineData)
{
    LineData = InLineData;
    TimeRemaining = LineData.Lifetime;
    bIsValid = true;

    // Set up spline points
    SplineComponent->ClearSplinePoints();
    SplineComponent->AddSplinePoint(LineData.StartPoint, ESplineCoordinateSpace::World);
    SplineComponent->AddSplinePoint(LineData.EndPoint, ESplineCoordinateSpace::World);

    OnLineCreated(LineData);
    StartLifespan();

    // Apply elemental effects immediately
    ApplyElementalTrail();
}

void AGrappleLine::StartLifespan()
{
    GetWorldTimerManager().SetTimer(
        ExpirationTimer,
        this, &AGrappleLine::ExpireLine,
        LineData.Lifetime,
        false);
}

void AGrappleLine::ExpireLine()
{
    bIsValid = false;
    OnLineExpired();
    Destroy();
}

void AGrappleLine::ApplyElementalTrail()
{
    // Apply elemental effect along the spline
    float SplineLength = SplineComponent->GetSplineLength();
    int32 NumPoints = FMath::Max(5, FMath::FloorToInt(SplineLength / 100.0f));

    for (int32 i = 0; i <= NumPoints; i++)
    {
        float Distance = (SplineLength / NumPoints) * i;
        FVector Location = SplineComponent->GetLocationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::World);
        ApplyElementalEffectAtLocation(Location);
    }
}

void AGrappleLine::ApplyElementalEffectAtLocation(FVector Location)
{
    switch (LineData.Element)
    {
    case ETransfigurationElement::Fire:
        ApplyFireEffect(Location);
        break;
    case ETransfigurationElement::Ice:
        ApplyIceEffect(Location);
        break;
    case ETransfigurationElement::Lightning:
        ApplyLightningEffect(Location);
        break;
    case ETransfigurationElement::Void:
        ApplyVoidEffect(Location);
        break;
    case ETransfigurationElement::Earth:
        ApplyEarthEffect(Location);
        break;
    default:
        break;
    }

    OnElementalEffect(Location, LineData.Element);
}

void AGrappleLine::ApplyFireEffect(FVector Location)
{
    // Fire effect - damage over time, light area
    // Implementation would spawn fire particles and damage volume
}

void AGrappleLine::ApplyIceEffect(FVector Location)
{
    // Ice effect - slow, freeze surfaces
    // Implementation would spawn ice particles and slow field
}

void AGrappleLine::ApplyLightningEffect(FVector Location)
{
    // Lightning effect - chain damage, stun
    // Implementation would spawn electrical arc particles
}

void AGrappleLine::ApplyVoidEffect(FVector Location)
{
    // Void effect - distortion, teleportation
    // Implementation would spawn void particles
}

void AGrappleLine::ApplyEarthEffect(FVector Location)
{
    // Earth effect - temporary cover, debris
    // Implementation would spawn rock particles and cover
}

bool AGrappleLine::CanConnectTo(AGrappleLine* OtherLine) const
{
    if (!OtherLine || !OtherLine->IsLineValid()) return false;

    // Check if lines are close enough to intersect
    float Distance = FVector::Dist(LineData.EndPoint, OtherLine->GetLineData().StartPoint);
    return Distance < 200.0f;
}

void AGrappleLine::CreateWebIntersection(AGrappleLine* OtherLine)
{
    if (!CanConnectTo(OtherLine)) return;

    FVector IntersectionPoint = (LineData.EndPoint + OtherLine->GetLineData().StartPoint) / 2.0f;

    TArray<AGrappleLine*> ConnectedLines;
    ConnectedLines.Add(this);
    ConnectedLines.Add(OtherLine);

    OnWebIntersectionCreated(IntersectionPoint, ConnectedLines);
   

}