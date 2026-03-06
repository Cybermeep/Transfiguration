// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationDefinition();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationDefinition_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPortalActivation();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPortalType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ESigilTriggerType();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTransfigurationDefinition ***********************************************
void UTransfigurationDefinition::StaticRegisterNativesUTransfigurationDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationDefinition;
UClass* UTransfigurationDefinition::GetPrivateStaticClass()
{
	using TClass = UTransfigurationDefinition;
	if (!Z_Registration_Info_UClass_UTransfigurationDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationDefinition"),
			Z_Registration_Info_UClass_UTransfigurationDefinition.InnerSingleton,
			StaticRegisterNativesUTransfigurationDefinition,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTransfigurationDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationDefinition_NoRegister()
{
	return UTransfigurationDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Transfiguration/TransfigurationDefinition.h" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellID_MetaData[] = {
		{ "Category", "Spell|Identity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Identity\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Identity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPersistentSigil_MetaData[] = {
		{ "Category", "Spell|Identity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Persistent Sigil Types\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persistent Sigil Types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentDuration_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "EditCondition", "bIsPersistentSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBuffSigil_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHealingSigil_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTeleportSigil_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTeleportID_MetaData[] = {
		{ "Category", "Spell|Identity" },
		{ "EditCondition", "bIsTeleportSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPortalSigil_MetaData[] = {
		{ "Category", "Spell|Portal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Portal Properties\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Portal Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalType_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalActivation_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalCooldown_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalActivationDelay_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainsMomentum_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresLineOfSight_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMovementStateForPortal_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "EditCondition", "bIsPortalSigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalVisualScale_MetaData[] = {
		{ "Category", "Spell|Portal" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana Costs\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana Costs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCostScalesWithSpeed_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedManaMultiplier_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "EditCondition", "bCostScalesWithSpeed" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefundOnMiss_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefundPercentage_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresManaRegenDelay_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomRegenDelay_MetaData[] = {
		{ "Category", "Spell|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerType_MetaData[] = {
		{ "Category", "Spell|Sigil" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sigil Behavior\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sigil Behavior" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerRadius_MetaData[] = {
		{ "Category", "Spell|Sigil" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "50.0" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToLive_MetaData[] = {
		{ "Category", "Spell|Sigil" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Spell|Power" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spell Power\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spell Power" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Spell|Power" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScalesWithSpeed_MetaData[] = {
		{ "Category", "Spell|MovementSynergy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement Synergy\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement Synergy" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConservesMomentum_MetaData[] = {
		{ "Category", "Spell|MovementSynergy" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanCastWhileMoving_MetaData[] = {
		{ "Category", "Spell|MovementSynergy" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMovementStates_MetaData[] = {
		{ "Category", "Spell|MovementSynergy" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAugmentations_MetaData[] = {
		{ "Category", "Spell|MovementSynergy" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCausesEnvironmentalDestruction_MetaData[] = {
		{ "Category", "Spell|Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destruction\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destruction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionRadius_MetaData[] = {
		{ "Category", "Spell|Destruction" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionForce_MetaData[] = {
		{ "Category", "Spell|Destruction" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestructionRequiresTemporalClap_MetaData[] = {
		{ "Category", "Spell|Destruction" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "Spell|Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Effect Class\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect Class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactFX_MetaData[] = {
		{ "Category", "Spell|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Visuals\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visuals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Spell|Visuals" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SigilDecalMaterial_MetaData[] = {
		{ "Category", "Spell|Visuals" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedScaledImpactFX_MetaData[] = {
		{ "Category", "Spell|Visuals" },
		{ "EditCondition", "bScalesWithSpeed" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleLoopFX_MetaData[] = {
		{ "Category", "Spell|Visuals" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static void NewProp_bIsPersistentSigil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPersistentSigil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PersistentDuration;
	static void NewProp_bIsBuffSigil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuffSigil;
	static void NewProp_bIsHealingSigil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHealingSigil;
	static void NewProp_bIsTeleportSigil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTeleportSigil;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinkedTeleportID;
	static void NewProp_bIsPortalSigil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPortalSigil;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PortalType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PortalType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PortalActivation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PortalActivation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PortalCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PortalActivationDelay;
	static void NewProp_bMaintainsMomentum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainsMomentum;
	static void NewProp_bRequiresLineOfSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresLineOfSight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedMovementStateForPortal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PortalVisualScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static void NewProp_bCostScalesWithSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCostScalesWithSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedManaMultiplier;
	static void NewProp_bRefundOnMiss_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefundOnMiss;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefundPercentage;
	static void NewProp_bRequiresManaRegenDelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresManaRegenDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomRegenDelay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToLive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static void NewProp_bScalesWithSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScalesWithSpeed;
	static void NewProp_bConservesMomentum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConservesMomentum;
	static void NewProp_bCanCastWhileMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCastWhileMoving;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedMovementStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedMovementStates;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MovementAugmentations_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MovementAugmentations_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MovementAugmentations;
	static void NewProp_bCausesEnvironmentalDestruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCausesEnvironmentalDestruction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionForce;
	static void NewProp_bDestructionRequiresTemporalClap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestructionRequiresTemporalClap;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SigilDecalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeedScaledImpactFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleLoopFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, SpellID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellID_MetaData), NewProp_SpellID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Element_MetaData), NewProp_Element_MetaData) }; // 4031656671
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPersistentSigil_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bIsPersistentSigil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPersistentSigil = { "bIsPersistentSigil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPersistentSigil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPersistentSigil_MetaData), NewProp_bIsPersistentSigil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PersistentDuration = { "PersistentDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PersistentDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentDuration_MetaData), NewProp_PersistentDuration_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsBuffSigil_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bIsBuffSigil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsBuffSigil = { "bIsBuffSigil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsBuffSigil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBuffSigil_MetaData), NewProp_bIsBuffSigil_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsHealingSigil_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bIsHealingSigil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsHealingSigil = { "bIsHealingSigil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsHealingSigil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHealingSigil_MetaData), NewProp_bIsHealingSigil_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsTeleportSigil_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bIsTeleportSigil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsTeleportSigil = { "bIsTeleportSigil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsTeleportSigil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTeleportSigil_MetaData), NewProp_bIsTeleportSigil_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_LinkedTeleportID = { "LinkedTeleportID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, LinkedTeleportID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedTeleportID_MetaData), NewProp_LinkedTeleportID_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPortalSigil_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bIsPortalSigil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPortalSigil = { "bIsPortalSigil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPortalSigil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPortalSigil_MetaData), NewProp_bIsPortalSigil_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalType = { "PortalType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PortalType), Z_Construct_UEnum_Transfigure_EPortalType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalType_MetaData), NewProp_PortalType_MetaData) }; // 1195441479
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivation = { "PortalActivation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PortalActivation), Z_Construct_UEnum_Transfigure_EPortalActivation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalActivation_MetaData), NewProp_PortalActivation_MetaData) }; // 3465513026
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalCooldown = { "PortalCooldown", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PortalCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalCooldown_MetaData), NewProp_PortalCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivationDelay = { "PortalActivationDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PortalActivationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalActivationDelay_MetaData), NewProp_PortalActivationDelay_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bMaintainsMomentum_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bMaintainsMomentum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bMaintainsMomentum = { "bMaintainsMomentum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bMaintainsMomentum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainsMomentum_MetaData), NewProp_bMaintainsMomentum_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresLineOfSight_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bRequiresLineOfSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresLineOfSight = { "bRequiresLineOfSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresLineOfSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresLineOfSight_MetaData), NewProp_bRequiresLineOfSight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStateForPortal = { "AllowedMovementStateForPortal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, AllowedMovementStateForPortal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMovementStateForPortal_MetaData), NewProp_AllowedMovementStateForPortal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalVisualScale = { "PortalVisualScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, PortalVisualScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalVisualScale_MetaData), NewProp_PortalVisualScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCostScalesWithSpeed_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bCostScalesWithSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCostScalesWithSpeed = { "bCostScalesWithSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCostScalesWithSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCostScalesWithSpeed_MetaData), NewProp_bCostScalesWithSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MaxSpeedManaMultiplier = { "MaxSpeedManaMultiplier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, MaxSpeedManaMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedManaMultiplier_MetaData), NewProp_MaxSpeedManaMultiplier_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRefundOnMiss_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bRefundOnMiss = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRefundOnMiss = { "bRefundOnMiss", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRefundOnMiss_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefundOnMiss_MetaData), NewProp_bRefundOnMiss_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_RefundPercentage = { "RefundPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, RefundPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefundPercentage_MetaData), NewProp_RefundPercentage_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresManaRegenDelay_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bRequiresManaRegenDelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresManaRegenDelay = { "bRequiresManaRegenDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresManaRegenDelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresManaRegenDelay_MetaData), NewProp_bRequiresManaRegenDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_CustomRegenDelay = { "CustomRegenDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, CustomRegenDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomRegenDelay_MetaData), NewProp_CustomRegenDelay_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerType = { "TriggerType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, TriggerType), Z_Construct_UEnum_Transfigure_ESigilTriggerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerType_MetaData), NewProp_TriggerType_MetaData) }; // 2405727790
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerRadius = { "TriggerRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, TriggerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerRadius_MetaData), NewProp_TriggerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TimeToLive = { "TimeToLive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, TimeToLive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToLive_MetaData), NewProp_TimeToLive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bScalesWithSpeed_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bScalesWithSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bScalesWithSpeed = { "bScalesWithSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bScalesWithSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScalesWithSpeed_MetaData), NewProp_bScalesWithSpeed_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bConservesMomentum_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bConservesMomentum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bConservesMomentum = { "bConservesMomentum", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bConservesMomentum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConservesMomentum_MetaData), NewProp_bConservesMomentum_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCanCastWhileMoving_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bCanCastWhileMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCanCastWhileMoving = { "bCanCastWhileMoving", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCanCastWhileMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanCastWhileMoving_MetaData), NewProp_bCanCastWhileMoving_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStates_Inner = { "AllowedMovementStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStates = { "AllowedMovementStates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, AllowedMovementStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedMovementStates_MetaData), NewProp_AllowedMovementStates_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations_ValueProp = { "MovementAugmentations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations_Key_KeyProp = { "MovementAugmentations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations = { "MovementAugmentations", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, MovementAugmentations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAugmentations_MetaData), NewProp_MovementAugmentations_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCausesEnvironmentalDestruction_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bCausesEnvironmentalDestruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCausesEnvironmentalDestruction = { "bCausesEnvironmentalDestruction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCausesEnvironmentalDestruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCausesEnvironmentalDestruction_MetaData), NewProp_bCausesEnvironmentalDestruction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DestructionRadius = { "DestructionRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, DestructionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionRadius_MetaData), NewProp_DestructionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DestructionForce = { "DestructionForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, DestructionForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionForce_MetaData), NewProp_DestructionForce_MetaData) };
void Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bDestructionRequiresTemporalClap_SetBit(void* Obj)
{
	((UTransfigurationDefinition*)Obj)->bDestructionRequiresTemporalClap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bDestructionRequiresTemporalClap = { "bDestructionRequiresTemporalClap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransfigurationDefinition), &Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bDestructionRequiresTemporalClap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestructionRequiresTemporalClap_MetaData), NewProp_bDestructionRequiresTemporalClap_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTransfigurationEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ImpactFX = { "ImpactFX", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, ImpactFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactFX_MetaData), NewProp_ImpactFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, ImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SigilDecalMaterial = { "SigilDecalMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, SigilDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SigilDecalMaterial_MetaData), NewProp_SigilDecalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SpeedScaledImpactFX = { "SpeedScaledImpactFX", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, SpeedScaledImpactFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedScaledImpactFX_MetaData), NewProp_SpeedScaledImpactFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_IdleLoopFX = { "IdleLoopFX", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationDefinition, IdleLoopFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleLoopFX_MetaData), NewProp_IdleLoopFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransfigurationDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SpellID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPersistentSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PersistentDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsBuffSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsHealingSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsTeleportSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_LinkedTeleportID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bIsPortalSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalActivationDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bMaintainsMomentum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStateForPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_PortalVisualScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCostScalesWithSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MaxSpeedManaMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRefundOnMiss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_RefundPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bRequiresManaRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_CustomRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TriggerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_TimeToLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bScalesWithSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bConservesMomentum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCanCastWhileMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_AllowedMovementStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_MovementAugmentations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bCausesEnvironmentalDestruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DestructionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_DestructionForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_bDestructionRequiresTemporalClap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ImpactFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SigilDecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_SpeedScaledImpactFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationDefinition_Statics::NewProp_IdleLoopFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransfigurationDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationDefinition_Statics::ClassParams = {
	&UTransfigurationDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransfigurationDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationDefinition()
{
	if (!Z_Registration_Info_UClass_UTransfigurationDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationDefinition.OuterSingleton, Z_Construct_UClass_UTransfigurationDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationDefinition.OuterSingleton;
}
UTransfigurationDefinition::UTransfigurationDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationDefinition);
UTransfigurationDefinition::~UTransfigurationDefinition() {}
// ********** End Class UTransfigurationDefinition *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationDefinition_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationDefinition, UTransfigurationDefinition::StaticClass, TEXT("UTransfigurationDefinition"), &Z_Registration_Info_UClass_UTransfigurationDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationDefinition), 106325354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationDefinition_h__Script_Transfigure_2075427869(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationDefinition_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationDefinition_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
