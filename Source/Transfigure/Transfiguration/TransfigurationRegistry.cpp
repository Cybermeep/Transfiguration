// Source/TMovement/Private/Transfiguration/TransfigurationRegistry.cpp

#include "Transfiguration/TransfigurationRegistry.h"

UTransfigurationDefinition* UTransfigurationRegistry::GetSpell(FName SpellID) const
{
    const TObjectPtr<UTransfigurationDefinition>* Found = SpellTable.Find(SpellID);
    return Found ? Found->Get() : nullptr;
}

TArray<UTransfigurationDefinition*> UTransfigurationRegistry::GetSpellsByElement(
    ETransfigurationElement Element) const
{
    TArray<UTransfigurationDefinition*> Result;
    for (const auto& Pair : SpellTable)
    {
        if (Pair.Value && Pair.Value->Element == Element)
            Result.Add(Pair.Value.Get());
    }
    return Result;
}