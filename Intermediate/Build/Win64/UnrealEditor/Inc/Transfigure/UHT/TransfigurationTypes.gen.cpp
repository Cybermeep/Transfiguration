// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_APortalSigilActor_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EBuffType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ECastingState();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ECombatGrappleMove();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleState();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleTier();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPodState();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPortalActivation();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPortalType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ESigilTriggerType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveComboChain();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FChunkGenerationTask();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FCombatGrappleData();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FComboChainRecipe();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FDestructionRequest();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyPoolEntry();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnPoint();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FGrappleLineData();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPair();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FSigilComboRecipe();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETransfigurationElement ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransfigurationElement;
static UEnum* ETransfigurationElement_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETransfigurationElement.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETransfigurationElement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_ETransfigurationElement, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ETransfigurationElement"));
	}
	return Z_Registration_Info_UEnum_ETransfigurationElement.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<ETransfigurationElement>()
{
	return ETransfigurationElement_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arcane.DisplayName", "Arcane" },
		{ "Arcane.Name", "ETransfigurationElement::Arcane" },
		{ "BlueprintType", "true" },
		{ "Earth.DisplayName", "Earth" },
		{ "Earth.Name", "ETransfigurationElement::Earth" },
		{ "Fire.DisplayName", "Fire" },
		{ "Fire.Name", "ETransfigurationElement::Fire" },
		{ "Ice.DisplayName", "Ice" },
		{ "Ice.Name", "ETransfigurationElement::Ice" },
		{ "Lightning.DisplayName", "Lightning" },
		{ "Lightning.Name", "ETransfigurationElement::Lightning" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ETransfigurationElement::None" },
		{ "Void.DisplayName", "Void" },
		{ "Void.Name", "ETransfigurationElement::Void" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETransfigurationElement::None", (int64)ETransfigurationElement::None },
		{ "ETransfigurationElement::Fire", (int64)ETransfigurationElement::Fire },
		{ "ETransfigurationElement::Ice", (int64)ETransfigurationElement::Ice },
		{ "ETransfigurationElement::Lightning", (int64)ETransfigurationElement::Lightning },
		{ "ETransfigurationElement::Arcane", (int64)ETransfigurationElement::Arcane },
		{ "ETransfigurationElement::Earth", (int64)ETransfigurationElement::Earth },
		{ "ETransfigurationElement::Void", (int64)ETransfigurationElement::Void },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"ETransfigurationElement",
	"ETransfigurationElement",
	Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement()
{
	if (!Z_Registration_Info_UEnum_ETransfigurationElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransfigurationElement.InnerSingleton, Z_Construct_UEnum_Transfigure_ETransfigurationElement_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETransfigurationElement.InnerSingleton;
}
// ********** End Enum ETransfigurationElement *****************************************************

// ********** Begin Enum ESigilTriggerType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESigilTriggerType;
static UEnum* ESigilTriggerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESigilTriggerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESigilTriggerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_ESigilTriggerType, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ESigilTriggerType"));
	}
	return Z_Registration_Info_UEnum_ESigilTriggerType.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<ESigilTriggerType>()
{
	return ESigilTriggerType_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "ESigilTriggerType::Manual" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "ProximityAny.DisplayName", "ProximityAny" },
		{ "ProximityAny.Name", "ESigilTriggerType::ProximityAny" },
		{ "ProximityEnemy.DisplayName", "ProximityEnemy" },
		{ "ProximityEnemy.Name", "ESigilTriggerType::ProximityEnemy" },
		{ "Stepped.DisplayName", "Stepped" },
		{ "Stepped.Name", "ESigilTriggerType::Stepped" },
		{ "TimedAuto.DisplayName", "TimedAuto" },
		{ "TimedAuto.Name", "ESigilTriggerType::TimedAuto" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESigilTriggerType::Manual", (int64)ESigilTriggerType::Manual },
		{ "ESigilTriggerType::ProximityEnemy", (int64)ESigilTriggerType::ProximityEnemy },
		{ "ESigilTriggerType::ProximityAny", (int64)ESigilTriggerType::ProximityAny },
		{ "ESigilTriggerType::TimedAuto", (int64)ESigilTriggerType::TimedAuto },
		{ "ESigilTriggerType::Stepped", (int64)ESigilTriggerType::Stepped },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"ESigilTriggerType",
	"ESigilTriggerType",
	Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_ESigilTriggerType()
{
	if (!Z_Registration_Info_UEnum_ESigilTriggerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESigilTriggerType.InnerSingleton, Z_Construct_UEnum_Transfigure_ESigilTriggerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESigilTriggerType.InnerSingleton;
}
// ********** End Enum ESigilTriggerType ***********************************************************

// ********** Begin Enum ECastingState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECastingState;
static UEnum* ECastingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECastingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECastingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_ECastingState, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ECastingState"));
	}
	return Z_Registration_Info_UEnum_ECastingState.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<ECastingState>()
{
	return ECastingState_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_ECastingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Drawing.DisplayName", "Drawing" },
		{ "Drawing.Name", "ECastingState::Drawing" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "ECastingState::Idle" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Placing.DisplayName", "Placing" },
		{ "Placing.Name", "ECastingState::Placing" },
		{ "Triggering.DisplayName", "Triggering" },
		{ "Triggering.Name", "ECastingState::Triggering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECastingState::Idle", (int64)ECastingState::Idle },
		{ "ECastingState::Drawing", (int64)ECastingState::Drawing },
		{ "ECastingState::Placing", (int64)ECastingState::Placing },
		{ "ECastingState::Triggering", (int64)ECastingState::Triggering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_ECastingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"ECastingState",
	"ECastingState",
	Z_Construct_UEnum_Transfigure_ECastingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ECastingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ECastingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_ECastingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_ECastingState()
{
	if (!Z_Registration_Info_UEnum_ECastingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECastingState.InnerSingleton, Z_Construct_UEnum_Transfigure_ECastingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECastingState.InnerSingleton;
}
// ********** End Enum ECastingState ***************************************************************

// ********** Begin Enum EBuffType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuffType;
static UEnum* EBuffType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBuffType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBuffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EBuffType, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EBuffType"));
	}
	return Z_Registration_Info_UEnum_EBuffType.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EBuffType>()
{
	return EBuffType_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EBuffType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EBuffType::Damage" },
		{ "Defense.DisplayName", "Defense" },
		{ "Defense.Name", "EBuffType::Defense" },
		{ "Jump.DisplayName", "Jump Height" },
		{ "Jump.Name", "EBuffType::Jump" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Speed.DisplayName", "Speed" },
		{ "Speed.Name", "EBuffType::Speed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuffType::Speed", (int64)EBuffType::Speed },
		{ "EBuffType::Damage", (int64)EBuffType::Damage },
		{ "EBuffType::Defense", (int64)EBuffType::Defense },
		{ "EBuffType::Jump", (int64)EBuffType::Jump },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EBuffType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EBuffType",
	"EBuffType",
	Z_Construct_UEnum_Transfigure_EBuffType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EBuffType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EBuffType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EBuffType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EBuffType()
{
	if (!Z_Registration_Info_UEnum_EBuffType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuffType.InnerSingleton, Z_Construct_UEnum_Transfigure_EBuffType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBuffType.InnerSingleton;
}
// ********** End Enum EBuffType *******************************************************************

// ********** Begin Enum EPortalType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPortalType;
static UEnum* EPortalType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPortalType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPortalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EPortalType, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EPortalType"));
	}
	return Z_Registration_Info_UEnum_EPortalType.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EPortalType>()
{
	return EPortalType_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EPortalType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Mobile.DisplayName", "Mobile" },
		{ "Mobile.Name", "EPortalType::Mobile" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Networked.DisplayName", "Networked" },
		{ "Networked.Name", "EPortalType::Networked" },
		{ "OneWay.DisplayName", "OneWay" },
		{ "OneWay.Name", "EPortalType::OneWay" },
		{ "Static.DisplayName", "Static" },
		{ "Static.Name", "EPortalType::Static" },
		{ "TwoWay.DisplayName", "TwoWay" },
		{ "TwoWay.Name", "EPortalType::TwoWay" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPortalType::Static", (int64)EPortalType::Static },
		{ "EPortalType::Mobile", (int64)EPortalType::Mobile },
		{ "EPortalType::OneWay", (int64)EPortalType::OneWay },
		{ "EPortalType::TwoWay", (int64)EPortalType::TwoWay },
		{ "EPortalType::Networked", (int64)EPortalType::Networked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EPortalType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EPortalType",
	"EPortalType",
	Z_Construct_UEnum_Transfigure_EPortalType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPortalType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPortalType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EPortalType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EPortalType()
{
	if (!Z_Registration_Info_UEnum_EPortalType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPortalType.InnerSingleton, Z_Construct_UEnum_Transfigure_EPortalType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPortalType.InnerSingleton;
}
// ********** End Enum EPortalType *****************************************************************

// ********** Begin Enum EPortalActivation *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPortalActivation;
static UEnum* EPortalActivation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPortalActivation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPortalActivation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EPortalActivation, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EPortalActivation"));
	}
	return Z_Registration_Info_UEnum_EPortalActivation.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EPortalActivation>()
{
	return EPortalActivation_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EPortalActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Charged.DisplayName", "Charged" },
		{ "Charged.Name", "EPortalActivation::Charged" },
		{ "Conditional.DisplayName", "Conditional" },
		{ "Conditional.Name", "EPortalActivation::Conditional" },
		{ "Delayed.DisplayName", "Delayed" },
		{ "Delayed.Name", "EPortalActivation::Delayed" },
		{ "Immediate.DisplayName", "Immediate" },
		{ "Immediate.Name", "EPortalActivation::Immediate" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPortalActivation::Immediate", (int64)EPortalActivation::Immediate },
		{ "EPortalActivation::Delayed", (int64)EPortalActivation::Delayed },
		{ "EPortalActivation::Conditional", (int64)EPortalActivation::Conditional },
		{ "EPortalActivation::Charged", (int64)EPortalActivation::Charged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EPortalActivation",
	"EPortalActivation",
	Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EPortalActivation()
{
	if (!Z_Registration_Info_UEnum_EPortalActivation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPortalActivation.InnerSingleton, Z_Construct_UEnum_Transfigure_EPortalActivation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPortalActivation.InnerSingleton;
}
// ********** End Enum EPortalActivation ***********************************************************

// ********** Begin Enum EPodState *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPodState;
static UEnum* EPodState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPodState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPodState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EPodState, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EPodState"));
	}
	return Z_Registration_Info_UEnum_EPodState.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EPodState>()
{
	return EPodState_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EPodState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EPodState::Active" },
		{ "BlueprintType", "true" },
		{ "Defeated.DisplayName", "Defeated" },
		{ "Defeated.Name", "EPodState::Defeated" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "EPodState::Inactive" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Reinforcing.DisplayName", "Reinforcing" },
		{ "Reinforcing.Name", "EPodState::Reinforcing" },
		{ "Spawning.DisplayName", "Spawning" },
		{ "Spawning.Name", "EPodState::Spawning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPodState::Inactive", (int64)EPodState::Inactive },
		{ "EPodState::Spawning", (int64)EPodState::Spawning },
		{ "EPodState::Active", (int64)EPodState::Active },
		{ "EPodState::Defeated", (int64)EPodState::Defeated },
		{ "EPodState::Reinforcing", (int64)EPodState::Reinforcing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EPodState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EPodState",
	"EPodState",
	Z_Construct_UEnum_Transfigure_EPodState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPodState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EPodState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EPodState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EPodState()
{
	if (!Z_Registration_Info_UEnum_EPodState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPodState.InnerSingleton, Z_Construct_UEnum_Transfigure_EPodState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPodState.InnerSingleton;
}
// ********** End Enum EPodState *******************************************************************

// ********** Begin Enum EGrappleType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrappleType;
static UEnum* EGrappleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrappleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrappleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EGrappleType, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EGrappleType"));
	}
	return Z_Registration_Info_UEnum_EGrappleType.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleType>()
{
	return EGrappleType_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EGrappleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "EGrappleType::Combat" },
		{ "ElementalTrail.DisplayName", "Elemental Trail" },
		{ "ElementalTrail.Name", "EGrappleType::ElementalTrail" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Swing.DisplayName", "Swing" },
		{ "Swing.Name", "EGrappleType::Swing" },
		{ "WebLine.DisplayName", "Web Line" },
		{ "WebLine.Name", "EGrappleType::WebLine" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrappleType::Swing", (int64)EGrappleType::Swing },
		{ "EGrappleType::Combat", (int64)EGrappleType::Combat },
		{ "EGrappleType::WebLine", (int64)EGrappleType::WebLine },
		{ "EGrappleType::ElementalTrail", (int64)EGrappleType::ElementalTrail },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EGrappleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EGrappleType",
	"EGrappleType",
	Z_Construct_UEnum_Transfigure_EGrappleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EGrappleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EGrappleType()
{
	if (!Z_Registration_Info_UEnum_EGrappleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrappleType.InnerSingleton, Z_Construct_UEnum_Transfigure_EGrappleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrappleType.InnerSingleton;
}
// ********** End Enum EGrappleType ****************************************************************

// ********** Begin Enum EGrappleState *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrappleState;
static UEnum* EGrappleState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrappleState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrappleState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EGrappleState, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EGrappleState"));
	}
	return Z_Registration_Info_UEnum_EGrappleState.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleState>()
{
	return EGrappleState_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EGrappleState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aiming.DisplayName", "Aiming" },
		{ "Aiming.Name", "EGrappleState::Aiming" },
		{ "BlueprintType", "true" },
		{ "CombatGrapple.DisplayName", "Combat Grapple" },
		{ "CombatGrapple.Name", "EGrappleState::CombatGrapple" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "EGrappleState::Inactive" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Swinging.DisplayName", "Swinging" },
		{ "Swinging.Name", "EGrappleState::Swinging" },
		{ "WebBuilding.DisplayName", "Web Building" },
		{ "WebBuilding.Name", "EGrappleState::WebBuilding" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrappleState::Inactive", (int64)EGrappleState::Inactive },
		{ "EGrappleState::Aiming", (int64)EGrappleState::Aiming },
		{ "EGrappleState::Swinging", (int64)EGrappleState::Swinging },
		{ "EGrappleState::CombatGrapple", (int64)EGrappleState::CombatGrapple },
		{ "EGrappleState::WebBuilding", (int64)EGrappleState::WebBuilding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EGrappleState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EGrappleState",
	"EGrappleState",
	Z_Construct_UEnum_Transfigure_EGrappleState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EGrappleState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EGrappleState()
{
	if (!Z_Registration_Info_UEnum_EGrappleState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrappleState.InnerSingleton, Z_Construct_UEnum_Transfigure_EGrappleState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrappleState.InnerSingleton;
}
// ********** End Enum EGrappleState ***************************************************************

// ********** Begin Enum EGrappleTier **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrappleTier;
static UEnum* EGrappleTier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGrappleTier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGrappleTier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EGrappleTier, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EGrappleTier"));
	}
	return Z_Registration_Info_UEnum_EGrappleTier.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleTier>()
{
	return EGrappleTier_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EGrappleTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cord.DisplayName", "Cord (Tier 3)" },
		{ "Cord.Name", "EGrappleTier::Cord" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Nexus.DisplayName", "Nexus (Tier 6)" },
		{ "Nexus.Name", "EGrappleTier::Nexus" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGrappleTier::None" },
		{ "Rope.DisplayName", "Rope (Tier 4)" },
		{ "Rope.Name", "EGrappleTier::Rope" },
		{ "Strand.DisplayName", "Strand (Tier 1)" },
		{ "Strand.Name", "EGrappleTier::Strand" },
		{ "Thread.DisplayName", "Thread (Tier 2)" },
		{ "Thread.Name", "EGrappleTier::Thread" },
		{ "Web.DisplayName", "Web (Tier 5)" },
		{ "Web.Name", "EGrappleTier::Web" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGrappleTier::None", (int64)EGrappleTier::None },
		{ "EGrappleTier::Strand", (int64)EGrappleTier::Strand },
		{ "EGrappleTier::Thread", (int64)EGrappleTier::Thread },
		{ "EGrappleTier::Cord", (int64)EGrappleTier::Cord },
		{ "EGrappleTier::Rope", (int64)EGrappleTier::Rope },
		{ "EGrappleTier::Web", (int64)EGrappleTier::Web },
		{ "EGrappleTier::Nexus", (int64)EGrappleTier::Nexus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EGrappleTier",
	"EGrappleTier",
	Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EGrappleTier()
{
	if (!Z_Registration_Info_UEnum_EGrappleTier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrappleTier.InnerSingleton, Z_Construct_UEnum_Transfigure_EGrappleTier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGrappleTier.InnerSingleton;
}
// ********** End Enum EGrappleTier ****************************************************************

// ********** Begin Enum ECombatGrappleMove ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatGrappleMove;
static UEnum* ECombatGrappleMove_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatGrappleMove.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatGrappleMove.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_ECombatGrappleMove, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ECombatGrappleMove"));
	}
	return Z_Registration_Info_UEnum_ECombatGrappleMove.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<ECombatGrappleMove>()
{
	return ECombatGrappleMove_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Evade.DisplayName", "Grapple Evade" },
		{ "Evade.Name", "ECombatGrappleMove::Evade" },
		{ "Kick.DisplayName", "Grapple Kick" },
		{ "Kick.Name", "ECombatGrappleMove::Kick" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
		{ "Pull.DisplayName", "Grapple Pull" },
		{ "Pull.Name", "ECombatGrappleMove::Pull" },
		{ "Slam.DisplayName", "Grapple Slam" },
		{ "Slam.Name", "ECombatGrappleMove::Slam" },
		{ "Toss.DisplayName", "Grapple Toss" },
		{ "Toss.Name", "ECombatGrappleMove::Toss" },
		{ "WebTrap.DisplayName", "Web Trap" },
		{ "WebTrap.Name", "ECombatGrappleMove::WebTrap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatGrappleMove::Kick", (int64)ECombatGrappleMove::Kick },
		{ "ECombatGrappleMove::Slam", (int64)ECombatGrappleMove::Slam },
		{ "ECombatGrappleMove::Toss", (int64)ECombatGrappleMove::Toss },
		{ "ECombatGrappleMove::Evade", (int64)ECombatGrappleMove::Evade },
		{ "ECombatGrappleMove::Pull", (int64)ECombatGrappleMove::Pull },
		{ "ECombatGrappleMove::WebTrap", (int64)ECombatGrappleMove::WebTrap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"ECombatGrappleMove",
	"ECombatGrappleMove",
	Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_ECombatGrappleMove()
{
	if (!Z_Registration_Info_UEnum_ECombatGrappleMove.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatGrappleMove.InnerSingleton, Z_Construct_UEnum_Transfigure_ECombatGrappleMove_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatGrappleMove.InnerSingleton;
}
// ********** End Enum ECombatGrappleMove **********************************************************

// ********** Begin ScriptStruct FSigilComboRecipe *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSigilComboRecipe;
class UScriptStruct* FSigilComboRecipe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSigilComboRecipe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSigilComboRecipe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSigilComboRecipe, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("SigilComboRecipe"));
	}
	return Z_Registration_Info_UScriptStruct_FSigilComboRecipe.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSigilComboRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementA_MetaData[] = {
		{ "Category", "SigilComboRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementB_MetaData[] = {
		{ "Category", "SigilComboRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultSpellID_MetaData[] = {
		{ "Category", "SigilComboRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementA_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementA;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementB_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementB;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResultSpellID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSigilComboRecipe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementA = { "ElementA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSigilComboRecipe, ElementA), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementA_MetaData), NewProp_ElementA_MetaData) }; // 4031656671
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementB = { "ElementB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSigilComboRecipe, ElementB), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementB_MetaData), NewProp_ElementB_MetaData) }; // 4031656671
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ResultSpellID = { "ResultSpellID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSigilComboRecipe, ResultSpellID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultSpellID_MetaData), NewProp_ResultSpellID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementA_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementB_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ElementB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewProp_ResultSpellID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"SigilComboRecipe",
	Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::PropPointers),
	sizeof(FSigilComboRecipe),
	alignof(FSigilComboRecipe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSigilComboRecipe()
{
	if (!Z_Registration_Info_UScriptStruct_FSigilComboRecipe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSigilComboRecipe.InnerSingleton, Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSigilComboRecipe.InnerSingleton;
}
// ********** End ScriptStruct FSigilComboRecipe ***************************************************

// ********** Begin ScriptStruct FComboChainRecipe *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FComboChainRecipe;
class UScriptStruct* FComboChainRecipe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FComboChainRecipe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FComboChainRecipe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboChainRecipe, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ComboChainRecipe"));
	}
	return Z_Registration_Info_UScriptStruct_FComboChainRecipe.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FComboChainRecipe_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementChain_MetaData[] = {
		{ "Category", "ComboChainRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultSpellID_MetaData[] = {
		{ "Category", "ComboChainRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainTimeWindow_MetaData[] = {
		{ "Category", "ComboChainRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsumesSigils_MetaData[] = {
		{ "Category", "ComboChainRecipe" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementChain_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ElementChain;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResultSpellID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainTimeWindow;
	static void NewProp_bConsumesSigils_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumesSigils;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboChainRecipe>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain_Inner = { "ElementChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4031656671
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain = { "ElementChain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboChainRecipe, ElementChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementChain_MetaData), NewProp_ElementChain_MetaData) }; // 4031656671
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ResultSpellID = { "ResultSpellID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboChainRecipe, ResultSpellID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultSpellID_MetaData), NewProp_ResultSpellID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ChainTimeWindow = { "ChainTimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboChainRecipe, ChainTimeWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainTimeWindow_MetaData), NewProp_ChainTimeWindow_MetaData) };
void Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_bConsumesSigils_SetBit(void* Obj)
{
	((FComboChainRecipe*)Obj)->bConsumesSigils = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_bConsumesSigils = { "bConsumesSigils", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComboChainRecipe), &Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_bConsumesSigils_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsumesSigils_MetaData), NewProp_bConsumesSigils_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboChainRecipe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ElementChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ResultSpellID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_ChainTimeWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewProp_bConsumesSigils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChainRecipe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboChainRecipe_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"ComboChainRecipe",
	Z_Construct_UScriptStruct_FComboChainRecipe_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChainRecipe_Statics::PropPointers),
	sizeof(FComboChainRecipe),
	alignof(FComboChainRecipe),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboChainRecipe_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboChainRecipe_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboChainRecipe()
{
	if (!Z_Registration_Info_UScriptStruct_FComboChainRecipe.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FComboChainRecipe.InnerSingleton, Z_Construct_UScriptStruct_FComboChainRecipe_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FComboChainRecipe.InnerSingleton;
}
// ********** End ScriptStruct FComboChainRecipe ***************************************************

// ********** Begin ScriptStruct FActiveComboChain *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActiveComboChain;
class UScriptStruct* FActiveComboChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveComboChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActiveComboChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveComboChain, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ActiveComboChain"));
	}
	return Z_Registration_Info_UScriptStruct_FActiveComboChain.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActiveComboChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveComboChain>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveComboChain_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"ActiveComboChain",
	nullptr,
	0,
	sizeof(FActiveComboChain),
	alignof(FActiveComboChain),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveComboChain_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveComboChain_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveComboChain()
{
	if (!Z_Registration_Info_UScriptStruct_FActiveComboChain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActiveComboChain.InnerSingleton, Z_Construct_UScriptStruct_FActiveComboChain_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActiveComboChain.InnerSingleton;
}
// ********** End ScriptStruct FActiveComboChain ***************************************************

// ********** Begin ScriptStruct FPortalPair *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPortalPair;
class UScriptStruct* FPortalPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPortalPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPortalPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPair, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("PortalPair"));
	}
	return Z_Registration_Info_UScriptStruct_FPortalPair.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPortalPair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalA_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalB_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PortalA;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PortalB;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_PortalA = { "PortalA", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortalPair, PortalA), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalA_MetaData), NewProp_PortalA_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_PortalB = { "PortalB", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortalPair, PortalB), Z_Construct_UClass_APortalSigilActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalB_MetaData), NewProp_PortalB_MetaData) };
void Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FPortalPair*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPortalPair), &Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_LastUsedTime = { "LastUsedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPortalPair, LastUsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUsedTime_MetaData), NewProp_LastUsedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_PortalA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_PortalB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPair_Statics::NewProp_LastUsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"PortalPair",
	Z_Construct_UScriptStruct_FPortalPair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPair_Statics::PropPointers),
	sizeof(FPortalPair),
	alignof(FPortalPair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPortalPair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPortalPair()
{
	if (!Z_Registration_Info_UScriptStruct_FPortalPair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPortalPair.InnerSingleton, Z_Construct_UScriptStruct_FPortalPair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPortalPair.InnerSingleton;
}
// ********** End ScriptStruct FPortalPair *********************************************************

// ********** Begin ScriptStruct FEnemySpawnPoint **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnemySpawnPoint;
class UScriptStruct* FEnemySpawnPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemySpawnPoint, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EnemySpawnPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPatrolPoint_MetaData[] = {
		{ "Category", "EnemySpawnPoint" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bIsPatrolPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPatrolPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemySpawnPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemySpawnPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemySpawnPoint, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_bIsPatrolPoint_SetBit(void* Obj)
{
	((FEnemySpawnPoint*)Obj)->bIsPatrolPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_bIsPatrolPoint = { "bIsPatrolPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnemySpawnPoint), &Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_bIsPatrolPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPatrolPoint_MetaData), NewProp_bIsPatrolPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewProp_bIsPatrolPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"EnemySpawnPoint",
	Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::PropPointers),
	sizeof(FEnemySpawnPoint),
	alignof(FEnemySpawnPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnPoint()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.InnerSingleton, Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEnemySpawnPoint.InnerSingleton;
}
// ********** End ScriptStruct FEnemySpawnPoint ****************************************************

// ********** Begin ScriptStruct FGrappleLineData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGrappleLineData;
class UScriptStruct* FGrappleLineData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FGrappleLineData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FGrappleLineData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrappleLineData, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("GrappleLineData"));
	}
	return Z_Registration_Info_UScriptStruct_FGrappleLineData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FGrappleLineData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineWidth_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineWidth;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrappleLineData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrappleLineData, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrappleLineData, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrappleLineData, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 4031656671
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrappleLineData, Lifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lifetime_MetaData), NewProp_Lifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_LineWidth = { "LineWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGrappleLineData, LineWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineWidth_MetaData), NewProp_LineWidth_MetaData) };
void Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FGrappleLineData*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGrappleLineData), &Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrappleLineData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_Lifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_LineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrappleLineData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrappleLineData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"GrappleLineData",
	Z_Construct_UScriptStruct_FGrappleLineData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrappleLineData_Statics::PropPointers),
	sizeof(FGrappleLineData),
	alignof(FGrappleLineData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrappleLineData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGrappleLineData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGrappleLineData()
{
	if (!Z_Registration_Info_UScriptStruct_FGrappleLineData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGrappleLineData.InnerSingleton, Z_Construct_UScriptStruct_FGrappleLineData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FGrappleLineData.InnerSingleton;
}
// ********** End ScriptStruct FGrappleLineData ****************************************************

// ********** Begin ScriptStruct FCombatGrappleData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCombatGrappleData;
class UScriptStruct* FCombatGrappleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatGrappleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCombatGrappleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatGrappleData, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("CombatGrappleData"));
	}
	return Z_Registration_Info_UScriptStruct_FCombatGrappleData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCombatGrappleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEnemy_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MomentumPreserved_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MomentumPreserved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatGrappleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatGrappleData, MoveType), Z_Construct_UEnum_Transfigure_ECombatGrappleMove, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveType_MetaData), NewProp_MoveType_MetaData) }; // 3197916696
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_TargetEnemy = { "TargetEnemy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatGrappleData, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEnemy_MetaData), NewProp_TargetEnemy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatGrappleData, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MomentumPreserved = { "MomentumPreserved", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatGrappleData, MomentumPreserved), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MomentumPreserved_MetaData), NewProp_MomentumPreserved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatGrappleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MoveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_TargetEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewProp_MomentumPreserved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatGrappleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatGrappleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"CombatGrappleData",
	Z_Construct_UScriptStruct_FCombatGrappleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatGrappleData_Statics::PropPointers),
	sizeof(FCombatGrappleData),
	alignof(FCombatGrappleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatGrappleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatGrappleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatGrappleData()
{
	if (!Z_Registration_Info_UScriptStruct_FCombatGrappleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCombatGrappleData.InnerSingleton, Z_Construct_UScriptStruct_FCombatGrappleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCombatGrappleData.InnerSingleton;
}
// ********** End ScriptStruct FCombatGrappleData **************************************************

// ********** Begin ScriptStruct FEnemyPoolEntry ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEnemyPoolEntry;
class UScriptStruct* FEnemyPoolEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyPoolEntry, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EnemyPoolEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTime_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodID_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyPoolEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyPoolEntry, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
void Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FEnemyPoolEntry*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEnemyPoolEntry), &Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_SpawnTime = { "SpawnTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyPoolEntry, SpawnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTime_MetaData), NewProp_SpawnTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyPoolEntry, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEnemyPoolEntry, PodID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodID_MetaData), NewProp_PodID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_SpawnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewProp_PodID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"EnemyPoolEntry",
	Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::PropPointers),
	sizeof(FEnemyPoolEntry),
	alignof(FEnemyPoolEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEnemyPoolEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.InnerSingleton, Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEnemyPoolEntry.InnerSingleton;
}
// ********** End ScriptStruct FEnemyPoolEntry *****************************************************

// ********** Begin ScriptStruct FDestructionRequest ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDestructionRequest;
class UScriptStruct* FDestructionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDestructionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDestructionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDestructionRequest, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("DestructionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FDestructionRequest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDestructionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRadius_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageForce_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestTime_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageForce;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDestructionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDestructionRequest, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDestructionRequest, DamageRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRadius_MetaData), NewProp_DamageRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_DamageForce = { "DamageForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDestructionRequest, DamageForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageForce_MetaData), NewProp_DamageForce_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDestructionRequest, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_RequestTime = { "RequestTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDestructionRequest, RequestTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestTime_MetaData), NewProp_RequestTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDestructionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_DamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_DamageForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewProp_RequestTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDestructionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"DestructionRequest",
	Z_Construct_UScriptStruct_FDestructionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructionRequest_Statics::PropPointers),
	sizeof(FDestructionRequest),
	alignof(FDestructionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDestructionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDestructionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDestructionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FDestructionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDestructionRequest.InnerSingleton, Z_Construct_UScriptStruct_FDestructionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDestructionRequest.InnerSingleton;
}
// ********** End ScriptStruct FDestructionRequest *************************************************

// ********** Begin ScriptStruct FChunkGenerationTask **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChunkGenerationTask;
class UScriptStruct* FChunkGenerationTask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChunkGenerationTask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChunkGenerationTask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkGenerationTask, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ChunkGenerationTask"));
	}
	return Z_Registration_Info_UScriptStruct_FChunkGenerationTask.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FChunkGenerationTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedVertices_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTriangles_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChunkSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedVertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedTriangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTriangles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkGenerationTask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, SourceMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIndex_MetaData), NewProp_SectionIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, ChunkSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkSize_MetaData), NewProp_ChunkSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedVertices_Inner = { "GeneratedVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedVertices = { "GeneratedVertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, GeneratedVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedVertices_MetaData), NewProp_GeneratedVertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedTriangles_Inner = { "GeneratedTriangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedTriangles = { "GeneratedTriangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkGenerationTask, GeneratedTriangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTriangles_MetaData), NewProp_GeneratedTriangles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_SectionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_ChunkSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedTriangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewProp_GeneratedTriangles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"ChunkGenerationTask",
	Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::PropPointers),
	sizeof(FChunkGenerationTask),
	alignof(FChunkGenerationTask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkGenerationTask()
{
	if (!Z_Registration_Info_UScriptStruct_FChunkGenerationTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChunkGenerationTask.InnerSingleton, Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FChunkGenerationTask.InnerSingleton;
}
// ********** End ScriptStruct FChunkGenerationTask ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETransfigurationElement_StaticEnum, TEXT("ETransfigurationElement"), &Z_Registration_Info_UEnum_ETransfigurationElement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4031656671U) },
		{ ESigilTriggerType_StaticEnum, TEXT("ESigilTriggerType"), &Z_Registration_Info_UEnum_ESigilTriggerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2405727790U) },
		{ ECastingState_StaticEnum, TEXT("ECastingState"), &Z_Registration_Info_UEnum_ECastingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1813631322U) },
		{ EBuffType_StaticEnum, TEXT("EBuffType"), &Z_Registration_Info_UEnum_EBuffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3442642938U) },
		{ EPortalType_StaticEnum, TEXT("EPortalType"), &Z_Registration_Info_UEnum_EPortalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1195441479U) },
		{ EPortalActivation_StaticEnum, TEXT("EPortalActivation"), &Z_Registration_Info_UEnum_EPortalActivation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3465513026U) },
		{ EPodState_StaticEnum, TEXT("EPodState"), &Z_Registration_Info_UEnum_EPodState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 466258305U) },
		{ EGrappleType_StaticEnum, TEXT("EGrappleType"), &Z_Registration_Info_UEnum_EGrappleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3118571021U) },
		{ EGrappleState_StaticEnum, TEXT("EGrappleState"), &Z_Registration_Info_UEnum_EGrappleState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3281509907U) },
		{ EGrappleTier_StaticEnum, TEXT("EGrappleTier"), &Z_Registration_Info_UEnum_EGrappleTier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2773041228U) },
		{ ECombatGrappleMove_StaticEnum, TEXT("ECombatGrappleMove"), &Z_Registration_Info_UEnum_ECombatGrappleMove, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3197916696U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSigilComboRecipe::StaticStruct, Z_Construct_UScriptStruct_FSigilComboRecipe_Statics::NewStructOps, TEXT("SigilComboRecipe"), &Z_Registration_Info_UScriptStruct_FSigilComboRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSigilComboRecipe), 795283368U) },
		{ FComboChainRecipe::StaticStruct, Z_Construct_UScriptStruct_FComboChainRecipe_Statics::NewStructOps, TEXT("ComboChainRecipe"), &Z_Registration_Info_UScriptStruct_FComboChainRecipe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboChainRecipe), 2250150973U) },
		{ FActiveComboChain::StaticStruct, Z_Construct_UScriptStruct_FActiveComboChain_Statics::NewStructOps, TEXT("ActiveComboChain"), &Z_Registration_Info_UScriptStruct_FActiveComboChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveComboChain), 1456326325U) },
		{ FPortalPair::StaticStruct, Z_Construct_UScriptStruct_FPortalPair_Statics::NewStructOps, TEXT("PortalPair"), &Z_Registration_Info_UScriptStruct_FPortalPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalPair), 1301741940U) },
		{ FEnemySpawnPoint::StaticStruct, Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics::NewStructOps, TEXT("EnemySpawnPoint"), &Z_Registration_Info_UScriptStruct_FEnemySpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemySpawnPoint), 2550518118U) },
		{ FGrappleLineData::StaticStruct, Z_Construct_UScriptStruct_FGrappleLineData_Statics::NewStructOps, TEXT("GrappleLineData"), &Z_Registration_Info_UScriptStruct_FGrappleLineData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrappleLineData), 60921744U) },
		{ FCombatGrappleData::StaticStruct, Z_Construct_UScriptStruct_FCombatGrappleData_Statics::NewStructOps, TEXT("CombatGrappleData"), &Z_Registration_Info_UScriptStruct_FCombatGrappleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatGrappleData), 348987950U) },
		{ FEnemyPoolEntry::StaticStruct, Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics::NewStructOps, TEXT("EnemyPoolEntry"), &Z_Registration_Info_UScriptStruct_FEnemyPoolEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnemyPoolEntry), 3936082218U) },
		{ FDestructionRequest::StaticStruct, Z_Construct_UScriptStruct_FDestructionRequest_Statics::NewStructOps, TEXT("DestructionRequest"), &Z_Registration_Info_UScriptStruct_FDestructionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDestructionRequest), 1350498595U) },
		{ FChunkGenerationTask::StaticStruct, Z_Construct_UScriptStruct_FChunkGenerationTask_Statics::NewStructOps, TEXT("ChunkGenerationTask"), &Z_Registration_Info_UScriptStruct_FChunkGenerationTask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkGenerationTask), 1293871127U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_384709169(TEXT("/Script/Transfigure"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h__Script_Transfigure_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
