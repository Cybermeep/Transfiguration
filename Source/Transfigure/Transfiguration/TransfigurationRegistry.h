// Source/TMovement/Public/Transfiguration/TransfigurationRegistry.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TransfigurationDefinition.h"
#include "TransfigurationRegistry.generated.h"

UCLASS(BlueprintType)
class TRANSFIGURE_API UTransfigurationRegistry : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TransfigurationRegistry")
        TMap<FName, TObjectPtr<UTransfigurationDefinition>> SpellTable;

    UFUNCTION(BlueprintCallable, Category = "TransfigurationRegistry")
        UTransfigurationDefinition* GetSpell(FName SpellID) const;

    UFUNCTION(BlueprintCallable, Category = "TransfigurationRegistry")
        TArray<UTransfigurationDefinition*> GetSpellsByElement(ETransfigurationElement Element) const;
};