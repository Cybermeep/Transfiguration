// Source/TMovement/Private/Transfiguration/TransfigurationGameInstance.cpp

#include "Transfiguration/TransfigurationGameInstance.h"

void UTransfigurationGameInstance::Init()
{
    Super::Init();
    SpellRegistry = NewObject<UTransfigurationRegistry>(this);
}