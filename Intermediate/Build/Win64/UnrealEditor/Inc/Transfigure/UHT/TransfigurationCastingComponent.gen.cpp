// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationCastingComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationCastingComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_APersistentSigilActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationCastingComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationCastingComponent_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ECastingState();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnCastingStateChanged ************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnCastingStateChanged_Parms
	{
		ECastingState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnCastingStateChanged_Parms, NewState), Z_Construct_UEnum_Transfigure_ECastingState, METADATA_PARAMS(0, nullptr) }; // 1813631322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnCastingStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnCastingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnCastingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCastingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCastingStateChanged, ECastingState NewState)
{
	struct _Script_Transfigure_eventOnCastingStateChanged_Parms
	{
		ECastingState NewState;
	};
	_Script_Transfigure_eventOnCastingStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnCastingStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCastingStateChanged **************************************************

// ********** Begin Delegate FOnSigilTemporalActivate **********************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnSigilTemporalActivate_Parms
	{
		ASigilActor* Sigil;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sigil;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::NewProp_Sigil = { "Sigil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnSigilTemporalActivate_Parms, Sigil), Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::NewProp_Sigil,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnSigilTemporalActivate__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::_Script_Transfigure_eventOnSigilTemporalActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::_Script_Transfigure_eventOnSigilTemporalActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSigilTemporalActivate_DelegateWrapper(const FMulticastScriptDelegate& OnSigilTemporalActivate, ASigilActor* Sigil)
{
	struct _Script_Transfigure_eventOnSigilTemporalActivate_Parms
	{
		ASigilActor* Sigil;
	};
	_Script_Transfigure_eventOnSigilTemporalActivate_Parms Parms;
	Parms.Sigil=Sigil;
	OnSigilTemporalActivate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSigilTemporalActivate ************************************************

// ********** Begin Class UTransfigurationCastingComponent Function BeginDrawMode ******************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics
{
	struct TransfigurationCastingComponent_eventBeginDrawMode_Parms
	{
		FName SpellID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core casting\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core casting" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventBeginDrawMode_Parms, SpellID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::NewProp_SpellID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "BeginDrawMode", Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::TransfigurationCastingComponent_eventBeginDrawMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::TransfigurationCastingComponent_eventBeginDrawMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execBeginDrawMode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpellID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginDrawMode(Z_Param_SpellID);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function BeginDrawMode ********************

// ********** Begin Class UTransfigurationCastingComponent Function CanAffordSpell *****************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics
{
	struct TransfigurationCastingComponent_eventCanAffordSpell_Parms
	{
		FName SpellID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana integration\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana integration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventCanAffordSpell_Parms, SpellID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransfigurationCastingComponent_eventCanAffordSpell_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransfigurationCastingComponent_eventCanAffordSpell_Parms), &Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_SpellID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "CanAffordSpell", Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::TransfigurationCastingComponent_eventCanAffordSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::TransfigurationCastingComponent_eventCanAffordSpell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execCanAffordSpell)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpellID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAffordSpell(Z_Param_SpellID);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function CanAffordSpell *******************

// ********** Begin Class UTransfigurationCastingComponent Function CancelDrawMode *****************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "CancelDrawMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execCancelDrawMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelDrawMode();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function CancelDrawMode *******************

// ********** Begin Class UTransfigurationCastingComponent Function ConfirmPlacement ***************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "ConfirmPlacement", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execConfirmPlacement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmPlacement();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function ConfirmPlacement *****************

// ********** Begin Class UTransfigurationCastingComponent Function ConvertToPersistentSigil *******
struct Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics
{
	struct TransfigurationCastingComponent_eventConvertToPersistentSigil_Parms
	{
		ASigilActor* Sigil;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Persistent sigils\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Persistent sigils" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sigil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::NewProp_Sigil = { "Sigil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventConvertToPersistentSigil_Parms, Sigil), Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventConvertToPersistentSigil_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::NewProp_Sigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "ConvertToPersistentSigil", Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::TransfigurationCastingComponent_eventConvertToPersistentSigil_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::TransfigurationCastingComponent_eventConvertToPersistentSigil_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execConvertToPersistentSigil)
{
	P_GET_OBJECT(ASigilActor,Z_Param_Sigil);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConvertToPersistentSigil(Z_Param_Sigil,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function ConvertToPersistentSigil *********

// ********** Begin Class UTransfigurationCastingComponent Function GetActivePersistentSigils ******
struct Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics
{
	struct TransfigurationCastingComponent_eventGetActivePersistentSigils_Parms
	{
		TArray<APersistentSigilActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APersistentSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventGetActivePersistentSigils_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "GetActivePersistentSigils", Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::TransfigurationCastingComponent_eventGetActivePersistentSigils_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::TransfigurationCastingComponent_eventGetActivePersistentSigils_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execGetActivePersistentSigils)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APersistentSigilActor*>*)Z_Param__Result=P_THIS->GetActivePersistentSigils();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function GetActivePersistentSigils ********

// ********** Begin Class UTransfigurationCastingComponent Function GetActiveSigilCount ************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics
{
	struct TransfigurationCastingComponent_eventGetActiveSigilCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventGetActiveSigilCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "GetActiveSigilCount", Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::TransfigurationCastingComponent_eventGetActiveSigilCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::TransfigurationCastingComponent_eventGetActiveSigilCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execGetActiveSigilCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveSigilCount();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function GetActiveSigilCount **************

// ********** Begin Class UTransfigurationCastingComponent Function GetCastingState ****************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics
{
	struct TransfigurationCastingComponent_eventGetCastingState_Parms
	{
		ECastingState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State queries\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State queries" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventGetCastingState_Parms, ReturnValue), Z_Construct_UEnum_Transfigure_ECastingState, METADATA_PARAMS(0, nullptr) }; // 1813631322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "GetCastingState", Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::TransfigurationCastingComponent_eventGetCastingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::TransfigurationCastingComponent_eventGetCastingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execGetCastingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ECastingState*)Z_Param__Result=P_THIS->GetCastingState();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function GetCastingState ******************

// ********** Begin Class UTransfigurationCastingComponent Function GetSpellManaCost ***************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics
{
	struct TransfigurationCastingComponent_eventGetSpellManaCost_Parms
	{
		FName SpellID;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventGetSpellManaCost_Parms, SpellID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventGetSpellManaCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::NewProp_SpellID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "GetSpellManaCost", Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::TransfigurationCastingComponent_eventGetSpellManaCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::TransfigurationCastingComponent_eventGetSpellManaCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execGetSpellManaCost)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpellID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpellManaCost(Z_Param_SpellID);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function GetSpellManaCost *****************

// ********** Begin Class UTransfigurationCastingComponent Function IsInDrawMode *******************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics
{
	struct TransfigurationCastingComponent_eventIsInDrawMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TransfigurationCastingComponent_eventIsInDrawMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TransfigurationCastingComponent_eventIsInDrawMode_Parms), &Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "IsInDrawMode", Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::TransfigurationCastingComponent_eventIsInDrawMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::TransfigurationCastingComponent_eventIsInDrawMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execIsInDrawMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInDrawMode();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function IsInDrawMode *********************

// ********** Begin Class UTransfigurationCastingComponent Function OnDrawModeCancelled ************
static FName NAME_UTransfigurationCastingComponent_OnDrawModeCancelled = FName(TEXT("OnDrawModeCancelled"));
void UTransfigurationCastingComponent::OnDrawModeCancelled()
{
	UFunction* Func = FindFunctionChecked(NAME_UTransfigurationCastingComponent_OnDrawModeCancelled);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|VFX" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "OnDrawModeCancelled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTransfigurationCastingComponent Function OnDrawModeCancelled **************

// ********** Begin Class UTransfigurationCastingComponent Function OnDrawModeEntered **************
struct TransfigurationCastingComponent_eventOnDrawModeEntered_Parms
{
	FName SpellID;
};
static FName NAME_UTransfigurationCastingComponent_OnDrawModeEntered = FName(TEXT("OnDrawModeEntered"));
void UTransfigurationCastingComponent::OnDrawModeEntered(FName SpellID)
{
	TransfigurationCastingComponent_eventOnDrawModeEntered_Parms Parms;
	Parms.SpellID=SpellID;
	UFunction* Func = FindFunctionChecked(NAME_UTransfigurationCastingComponent_OnDrawModeEntered);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|VFX" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint implementable events\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint implementable events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventOnDrawModeEntered_Parms, SpellID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::NewProp_SpellID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "OnDrawModeEntered", Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::PropPointers), sizeof(TransfigurationCastingComponent_eventOnDrawModeEntered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TransfigurationCastingComponent_eventOnDrawModeEntered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTransfigurationCastingComponent Function OnDrawModeEntered ****************

// ********** Begin Class UTransfigurationCastingComponent Function OnPlacementConfirmed ***********
struct TransfigurationCastingComponent_eventOnPlacementConfirmed_Parms
{
	ASigilActor* PlacedSigil;
};
static FName NAME_UTransfigurationCastingComponent_OnPlacementConfirmed = FName(TEXT("OnPlacementConfirmed"));
void UTransfigurationCastingComponent::OnPlacementConfirmed(ASigilActor* PlacedSigil)
{
	TransfigurationCastingComponent_eventOnPlacementConfirmed_Parms Parms;
	Parms.PlacedSigil=PlacedSigil;
	UFunction* Func = FindFunctionChecked(NAME_UTransfigurationCastingComponent_OnPlacementConfirmed);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|VFX" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlacedSigil;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::NewProp_PlacedSigil = { "PlacedSigil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationCastingComponent_eventOnPlacementConfirmed_Parms, PlacedSigil), Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::NewProp_PlacedSigil,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "OnPlacementConfirmed", Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::PropPointers), sizeof(TransfigurationCastingComponent_eventOnPlacementConfirmed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TransfigurationCastingComponent_eventOnPlacementConfirmed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTransfigurationCastingComponent Function OnPlacementConfirmed *************

// ********** Begin Class UTransfigurationCastingComponent Function PrepareSigilsForTemporalClap ***
struct Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|Temporal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temporal integration\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporal integration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "PrepareSigilsForTemporalClap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execPrepareSigilsForTemporalClap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareSigilsForTemporalClap();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function PrepareSigilsForTemporalClap *****

// ********** Begin Class UTransfigurationCastingComponent Function TriggerAllSigils ***************
struct Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "TriggerAllSigils", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execTriggerAllSigils)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerAllSigils();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function TriggerAllSigils *****************

// ********** Begin Class UTransfigurationCastingComponent Function TriggerNearestManualSigil ******
struct Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "TriggerNearestManualSigil", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execTriggerNearestManualSigil)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerNearestManualSigil();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function TriggerNearestManualSigil ********

// ********** Begin Class UTransfigurationCastingComponent Function TriggerSigilsSynchronized ******
struct Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Casting|Temporal" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationCastingComponent, nullptr, "TriggerSigilsSynchronized", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationCastingComponent::execTriggerSigilsSynchronized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerSigilsSynchronized();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationCastingComponent Function TriggerSigilsSynchronized ********

// ********** Begin Class UTransfigurationCastingComponent *****************************************
void UTransfigurationCastingComponent::StaticRegisterNativesUTransfigurationCastingComponent()
{
	UClass* Class = UTransfigurationCastingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginDrawMode", &UTransfigurationCastingComponent::execBeginDrawMode },
		{ "CanAffordSpell", &UTransfigurationCastingComponent::execCanAffordSpell },
		{ "CancelDrawMode", &UTransfigurationCastingComponent::execCancelDrawMode },
		{ "ConfirmPlacement", &UTransfigurationCastingComponent::execConfirmPlacement },
		{ "ConvertToPersistentSigil", &UTransfigurationCastingComponent::execConvertToPersistentSigil },
		{ "GetActivePersistentSigils", &UTransfigurationCastingComponent::execGetActivePersistentSigils },
		{ "GetActiveSigilCount", &UTransfigurationCastingComponent::execGetActiveSigilCount },
		{ "GetCastingState", &UTransfigurationCastingComponent::execGetCastingState },
		{ "GetSpellManaCost", &UTransfigurationCastingComponent::execGetSpellManaCost },
		{ "IsInDrawMode", &UTransfigurationCastingComponent::execIsInDrawMode },
		{ "PrepareSigilsForTemporalClap", &UTransfigurationCastingComponent::execPrepareSigilsForTemporalClap },
		{ "TriggerAllSigils", &UTransfigurationCastingComponent::execTriggerAllSigils },
		{ "TriggerNearestManualSigil", &UTransfigurationCastingComponent::execTriggerNearestManualSigil },
		{ "TriggerSigilsSynchronized", &UTransfigurationCastingComponent::execTriggerSigilsSynchronized },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationCastingComponent;
UClass* UTransfigurationCastingComponent::GetPrivateStaticClass()
{
	using TClass = UTransfigurationCastingComponent;
	if (!Z_Registration_Info_UClass_UTransfigurationCastingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationCastingComponent"),
			Z_Registration_Info_UClass_UTransfigurationCastingComponent.InnerSingleton,
			StaticRegisterNativesUTransfigurationCastingComponent,
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
	return Z_Registration_Info_UClass_UTransfigurationCastingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationCastingComponent_NoRegister()
{
	return UTransfigurationCastingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationCastingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Transfiguration/TransfigurationCastingComponent.h" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlacementDistance_MetaData[] = {
		{ "Category", "Casting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveSigils_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualTriggerScanRadius_MetaData[] = {
		{ "Category", "Casting" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalSigilActivationDelay_MetaData[] = {
		{ "Category", "Casting|Temporal" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCastingStateChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAimUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSigilTemporalActivate_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpellManaCost_MetaData[] = {
		{ "Category", "Casting|Mana" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingTemporalSigils_MetaData[] = {
		{ "Category", "Casting|Temporal" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersistentSigils_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSigils_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationCastingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlacementDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActiveSigils;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualTriggerScanRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalSigilActivationDelay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCastingStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAimUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSigilTemporalActivate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpellManaCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingTemporalSigils_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingTemporalSigils;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PersistentSigils_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PersistentSigils;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveSigils_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSigils;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_BeginDrawMode, "BeginDrawMode" }, // 2515118516
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_CanAffordSpell, "CanAffordSpell" }, // 2114257742
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_CancelDrawMode, "CancelDrawMode" }, // 339956811
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_ConfirmPlacement, "ConfirmPlacement" }, // 3321716697
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_ConvertToPersistentSigil, "ConvertToPersistentSigil" }, // 3039134048
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_GetActivePersistentSigils, "GetActivePersistentSigils" }, // 3795864103
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_GetActiveSigilCount, "GetActiveSigilCount" }, // 2980781642
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_GetCastingState, "GetCastingState" }, // 2761764264
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_GetSpellManaCost, "GetSpellManaCost" }, // 2617995766
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_IsInDrawMode, "IsInDrawMode" }, // 1697627272
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeCancelled, "OnDrawModeCancelled" }, // 2592618611
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_OnDrawModeEntered, "OnDrawModeEntered" }, // 65071937
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_OnPlacementConfirmed, "OnPlacementConfirmed" }, // 3952900238
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_PrepareSigilsForTemporalClap, "PrepareSigilsForTemporalClap" }, // 211402834
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerAllSigils, "TriggerAllSigils" }, // 1756271622
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerNearestManualSigil, "TriggerNearestManualSigil" }, // 1267276970
		{ &Z_Construct_UFunction_UTransfigurationCastingComponent_TriggerSigilsSynchronized, "TriggerSigilsSynchronized" }, // 2383308099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationCastingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_MaxPlacementDistance = { "MaxPlacementDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, MaxPlacementDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlacementDistance_MetaData), NewProp_MaxPlacementDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_MaxActiveSigils = { "MaxActiveSigils", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, MaxActiveSigils), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxActiveSigils_MetaData), NewProp_MaxActiveSigils_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ManualTriggerScanRadius = { "ManualTriggerScanRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, ManualTriggerScanRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualTriggerScanRadius_MetaData), NewProp_ManualTriggerScanRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_TemporalSigilActivationDelay = { "TemporalSigilActivationDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, TemporalSigilActivationDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalSigilActivationDelay_MetaData), NewProp_TemporalSigilActivationDelay_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnCastingStateChanged = { "OnCastingStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, OnCastingStateChanged), Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCastingStateChanged_MetaData), NewProp_OnCastingStateChanged_MetaData) }; // 369908193
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnAimUpdated = { "OnAimUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, OnAimUpdated), Z_Construct_UDelegateFunction_Transfigure_OnCastingStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAimUpdated_MetaData), NewProp_OnAimUpdated_MetaData) }; // 369908193
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnSigilTemporalActivate = { "OnSigilTemporalActivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, OnSigilTemporalActivate), Z_Construct_UDelegateFunction_Transfigure_OnSigilTemporalActivate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSigilTemporalActivate_MetaData), NewProp_OnSigilTemporalActivate_MetaData) }; // 3069297034
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_LastSpellManaCost = { "LastSpellManaCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, LastSpellManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpellManaCost_MetaData), NewProp_LastSpellManaCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PendingTemporalSigils_Inner = { "PendingTemporalSigils", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PendingTemporalSigils = { "PendingTemporalSigils", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, PendingTemporalSigils), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingTemporalSigils_MetaData), NewProp_PendingTemporalSigils_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PersistentSigils_Inner = { "PersistentSigils", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APersistentSigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PersistentSigils = { "PersistentSigils", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, PersistentSigils), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersistentSigils_MetaData), NewProp_PersistentSigils_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ActiveSigils_Inner = { "ActiveSigils", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASigilActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ActiveSigils = { "ActiveSigils", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationCastingComponent, ActiveSigils), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSigils_MetaData), NewProp_ActiveSigils_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransfigurationCastingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_MaxPlacementDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_MaxActiveSigils,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ManualTriggerScanRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_TemporalSigilActivationDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnCastingStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnAimUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_OnSigilTemporalActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_LastSpellManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PendingTemporalSigils_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PendingTemporalSigils,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PersistentSigils_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_PersistentSigils,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ActiveSigils_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationCastingComponent_Statics::NewProp_ActiveSigils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationCastingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransfigurationCastingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationCastingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationCastingComponent_Statics::ClassParams = {
	&UTransfigurationCastingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTransfigurationCastingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationCastingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationCastingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationCastingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationCastingComponent()
{
	if (!Z_Registration_Info_UClass_UTransfigurationCastingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationCastingComponent.OuterSingleton, Z_Construct_UClass_UTransfigurationCastingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationCastingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationCastingComponent);
UTransfigurationCastingComponent::~UTransfigurationCastingComponent() {}
// ********** End Class UTransfigurationCastingComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationCastingComponent_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationCastingComponent, UTransfigurationCastingComponent::StaticClass, TEXT("UTransfigurationCastingComponent"), &Z_Registration_Info_UClass_UTransfigurationCastingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationCastingComponent), 2334178578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationCastingComponent_h__Script_Transfigure_3832640043(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationCastingComponent_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationCastingComponent_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
