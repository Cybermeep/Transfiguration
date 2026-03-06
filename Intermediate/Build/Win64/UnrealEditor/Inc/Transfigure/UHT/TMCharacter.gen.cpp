// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TMCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTMCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UGrappleComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationCastingComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationComboDetector_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleTier();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnManaChanged ********************************************************
struct Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics
{
	struct TMCharacter_eventOnManaChanged_Parms
	{
		float NewMana;
		float MaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 DELEGATES \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 DELEGATES \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::NewProp_NewMana = { "NewMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventOnManaChanged_Parms, NewMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventOnManaChanged_Parms, MaxMana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::NewProp_NewMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::NewProp_MaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "OnManaChanged__DelegateSignature", Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::TMCharacter_eventOnManaChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::TMCharacter_eventOnManaChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ATMCharacter::FOnManaChanged_DelegateWrapper(const FMulticastScriptDelegate& OnManaChanged, float NewMana, float MaxMana)
{
	struct TMCharacter_eventOnManaChanged_Parms
	{
		float NewMana;
		float MaxMana;
	};
	TMCharacter_eventOnManaChanged_Parms Parms;
	Parms.NewMana=NewMana;
	Parms.MaxMana=MaxMana;
	OnManaChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnManaChanged **********************************************************

// ********** Begin Delegate FOnManaDepleted *******************************************************
struct Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics
{
	struct TMCharacter_eventOnManaDepleted_Parms
	{
		float TimeUntilRegen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeUntilRegen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::NewProp_TimeUntilRegen = { "TimeUntilRegen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventOnManaDepleted_Parms, TimeUntilRegen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::NewProp_TimeUntilRegen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "OnManaDepleted__DelegateSignature", Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::TMCharacter_eventOnManaDepleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::TMCharacter_eventOnManaDepleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ATMCharacter::FOnManaDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnManaDepleted, float TimeUntilRegen)
{
	struct TMCharacter_eventOnManaDepleted_Parms
	{
		float TimeUntilRegen;
	};
	TMCharacter_eventOnManaDepleted_Parms Parms;
	Parms.TimeUntilRegen=TimeUntilRegen;
	OnManaDepleted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnManaDepleted *********************************************************

// ********** Begin Delegate FOnManaRegenStarted ***************************************************
struct Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "OnManaRegenStarted__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ATMCharacter::FOnManaRegenStarted_DelegateWrapper(const FMulticastScriptDelegate& OnManaRegenStarted)
{
	OnManaRegenStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnManaRegenStarted *****************************************************

// ********** Begin Delegate FTemporalClapDelegate *************************************************
struct Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "TemporalClapDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void ATMCharacter::FTemporalClapDelegate_DelegateWrapper(const FMulticastScriptDelegate& TemporalClapDelegate)
{
	TemporalClapDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FTemporalClapDelegate ***************************************************

// ********** Begin Class ATMCharacter Function ActivateTemporalClap *******************************
struct Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Temporal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 TEMPORAL FUNCTIONS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 TEMPORAL FUNCTIONS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "ActivateTemporalClap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execActivateTemporalClap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateTemporalClap();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function ActivateTemporalClap *********************************

// ********** Begin Class ATMCharacter Function AddMana ********************************************
struct Z_Construct_UFunction_ATMCharacter_AddMana_Statics
{
	struct TMCharacter_eventAddMana_Parms
	{
		float ManaAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_AddMana_Statics::NewProp_ManaAmount = { "ManaAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventAddMana_Parms, ManaAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_AddMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_AddMana_Statics::NewProp_ManaAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_AddMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_AddMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "AddMana", Z_Construct_UFunction_ATMCharacter_AddMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_AddMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_AddMana_Statics::TMCharacter_eventAddMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_AddMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_AddMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_AddMana_Statics::TMCharacter_eventAddMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_AddMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_AddMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execAddMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMana(Z_Param_ManaAmount);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function AddMana **********************************************

// ********** Begin Class ATMCharacter Function ApplyDamageBuff ************************************
struct Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics
{
	struct TMCharacter_eventApplyDamageBuff_Parms
	{
		float Multiplier;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Magic|Buffs" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventApplyDamageBuff_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventApplyDamageBuff_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "ApplyDamageBuff", Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::TMCharacter_eventApplyDamageBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::TMCharacter_eventApplyDamageBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execApplyDamageBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamageBuff(Z_Param_Multiplier,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function ApplyDamageBuff **************************************

// ********** Begin Class ATMCharacter Function ApplySpeedBuff *************************************
struct Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics
{
	struct TMCharacter_eventApplySpeedBuff_Parms
	{
		float Multiplier;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Magic|Buffs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 BUFF FUNCTIONS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 BUFF FUNCTIONS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventApplySpeedBuff_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventApplySpeedBuff_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "ApplySpeedBuff", Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::TMCharacter_eventApplySpeedBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::TMCharacter_eventApplySpeedBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execApplySpeedBuff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplySpeedBuff(Z_Param_Multiplier,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function ApplySpeedBuff ***************************************

// ********** Begin Class ATMCharacter Function CanActivateTemporalClap ****************************
struct Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics
{
	struct TMCharacter_eventCanActivateTemporalClap_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventCanActivateTemporalClap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventCanActivateTemporalClap_Parms), &Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "CanActivateTemporalClap", Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::TMCharacter_eventCanActivateTemporalClap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::TMCharacter_eventCanActivateTemporalClap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execCanActivateTemporalClap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanActivateTemporalClap();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function CanActivateTemporalClap ******************************

// ********** Begin Class ATMCharacter Function CanWallRunAtLocation *******************************
struct Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics
{
	struct TMCharacter_eventCanWallRunAtLocation_Parms
	{
		FVector Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Destruction" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventCanWallRunAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventCanWallRunAtLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventCanWallRunAtLocation_Parms), &Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "CanWallRunAtLocation", Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::TMCharacter_eventCanWallRunAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::TMCharacter_eventCanWallRunAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execCanWallRunAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanWallRunAtLocation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function CanWallRunAtLocation *********************************

// ********** Begin Class ATMCharacter Function ConsumeMana ****************************************
struct Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics
{
	struct TMCharacter_eventConsumeMana_Parms
	{
		float ManaCost;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 MANA FUNCTIONS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 MANA FUNCTIONS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventConsumeMana_Parms, ManaCost), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventConsumeMana_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventConsumeMana_Parms), &Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "ConsumeMana", Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::TMCharacter_eventConsumeMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::TMCharacter_eventConsumeMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_ConsumeMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_ConsumeMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execConsumeMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaCost);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConsumeMana(Z_Param_ManaCost);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function ConsumeMana ******************************************

// ********** Begin Class ATMCharacter Function EndTemporalClap ************************************
struct Z_Construct_UFunction_ATMCharacter_EndTemporalClap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_EndTemporalClap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "EndTemporalClap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_EndTemporalClap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_EndTemporalClap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATMCharacter_EndTemporalClap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_EndTemporalClap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execEndTemporalClap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndTemporalClap();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function EndTemporalClap **************************************

// ********** Begin Class ATMCharacter Function GetCurrentSpeed ************************************
struct Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics
{
	struct TMCharacter_eventGetCurrentSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetCurrentSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetCurrentSpeed", Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::TMCharacter_eventGetCurrentSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::TMCharacter_eventGetCurrentSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetCurrentSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentSpeed();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetCurrentSpeed **************************************

// ********** Begin Class ATMCharacter Function GetGrappleTier *************************************
struct Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics
{
	struct TMCharacter_eventGetGrappleTier_Parms
	{
		EGrappleTier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Grapple" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetGrappleTier_Parms, ReturnValue), Z_Construct_UEnum_Transfigure_EGrappleTier, METADATA_PARAMS(0, nullptr) }; // 2773041228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetGrappleTier", Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::TMCharacter_eventGetGrappleTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::TMCharacter_eventGetGrappleTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetGrappleTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetGrappleTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetGrappleTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGrappleTier*)Z_Param__Result=P_THIS->GetGrappleTier();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetGrappleTier ***************************************

// ********** Begin Class ATMCharacter Function GetHealth ******************************************
struct Z_Construct_UFunction_ATMCharacter_GetHealth_Statics
{
	struct TMCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Magic|Buffs" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetHealth", Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::TMCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::TMCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetHealth ********************************************

// ********** Begin Class ATMCharacter Function GetManaPercentage **********************************
struct Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics
{
	struct TMCharacter_eventGetManaPercentage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetManaPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetManaPercentage", Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::TMCharacter_eventGetManaPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::TMCharacter_eventGetManaPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetManaPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetManaPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetManaPercentage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetManaPercentage();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetManaPercentage ************************************

// ********** Begin Class ATMCharacter Function GetMaxHealth ***************************************
struct Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics
{
	struct TMCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Magic|Buffs" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetMaxHealth", Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::TMCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::TMCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetMaxHealth *****************************************

// ********** Begin Class ATMCharacter Function GetSpeedScalingFactor ******************************
struct Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics
{
	struct TMCharacter_eventGetSpeedScalingFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventGetSpeedScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "GetSpeedScalingFactor", Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::TMCharacter_eventGetSpeedScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::TMCharacter_eventGetSpeedScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execGetSpeedScalingFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpeedScalingFactor();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function GetSpeedScalingFactor ********************************

// ********** Begin Class ATMCharacter Function HasEnoughMana **************************************
struct Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics
{
	struct TMCharacter_eventHasEnoughMana_Parms
	{
		float ManaCost;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventHasEnoughMana_Parms, ManaCost), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventHasEnoughMana_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventHasEnoughMana_Parms), &Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "HasEnoughMana", Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::TMCharacter_eventHasEnoughMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::TMCharacter_eventHasEnoughMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_HasEnoughMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_HasEnoughMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execHasEnoughMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ManaCost);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughMana(Z_Param_ManaCost);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function HasEnoughMana ****************************************

// ********** Begin Class ATMCharacter Function IsGrappling ****************************************
struct Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics
{
	struct TMCharacter_eventIsGrappling_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Grapple" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 GRAPPLE FUNCTIONS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 GRAPPLE FUNCTIONS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventIsGrappling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventIsGrappling_Parms), &Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "IsGrappling", Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::TMCharacter_eventIsGrappling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::TMCharacter_eventIsGrappling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_IsGrappling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_IsGrappling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execIsGrappling)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsGrappling();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function IsGrappling ******************************************

// ********** Begin Class ATMCharacter Function IsLocationDestructible *****************************
struct Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics
{
	struct TMCharacter_eventIsLocationDestructible_Parms
	{
		FVector Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 DESTRUCTION FUNCTIONS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 DESTRUCTION FUNCTIONS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventIsLocationDestructible_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventIsLocationDestructible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventIsLocationDestructible_Parms), &Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "IsLocationDestructible", Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::TMCharacter_eventIsLocationDestructible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::TMCharacter_eventIsLocationDestructible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_IsLocationDestructible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_IsLocationDestructible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execIsLocationDestructible)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLocationDestructible(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function IsLocationDestructible *******************************

// ********** Begin Class ATMCharacter Function IsSliding ******************************************
struct Z_Construct_UFunction_ATMCharacter_IsSliding_Statics
{
	struct TMCharacter_eventIsSliding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventIsSliding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventIsSliding_Parms), &Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "IsSliding", Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::TMCharacter_eventIsSliding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::TMCharacter_eventIsSliding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_IsSliding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_IsSliding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execIsSliding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSliding();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function IsSliding ********************************************

// ********** Begin Class ATMCharacter Function IsSprinting ****************************************
struct Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics
{
	struct TMCharacter_eventIsSprinting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "IsSprinting", Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::TMCharacter_eventIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::TMCharacter_eventIsSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_IsSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_IsSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execIsSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSprinting();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function IsSprinting ******************************************

// ********** Begin Class ATMCharacter Function IsWallRunning **************************************
struct Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics
{
	struct TMCharacter_eventIsWallRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 UFUNCTIONs \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 UFUNCTIONs \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TMCharacter_eventIsWallRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TMCharacter_eventIsWallRunning_Parms), &Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "IsWallRunning", Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::TMCharacter_eventIsWallRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::TMCharacter_eventIsWallRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_IsWallRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_IsWallRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execIsWallRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWallRunning();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function IsWallRunning ****************************************

// ********** Begin Class ATMCharacter Function SetHealth ******************************************
struct Z_Construct_UFunction_ATMCharacter_SetHealth_Statics
{
	struct TMCharacter_eventSetHealth_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Magic|Buffs" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TMCharacter_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "SetHealth", Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::TMCharacter_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::TMCharacter_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATMCharacter_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealth);
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function SetHealth ********************************************

// ********** Begin Class ATMCharacter Function UpgradeGrappleTier *********************************
struct Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TM|Grapple" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATMCharacter, nullptr, "UpgradeGrappleTier", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATMCharacter::execUpgradeGrappleTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeGrappleTier();
	P_NATIVE_END;
}
// ********** End Class ATMCharacter Function UpgradeGrappleTier ***********************************

// ********** Begin Class ATMCharacter *************************************************************
void ATMCharacter::StaticRegisterNativesATMCharacter()
{
	UClass* Class = ATMCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateTemporalClap", &ATMCharacter::execActivateTemporalClap },
		{ "AddMana", &ATMCharacter::execAddMana },
		{ "ApplyDamageBuff", &ATMCharacter::execApplyDamageBuff },
		{ "ApplySpeedBuff", &ATMCharacter::execApplySpeedBuff },
		{ "CanActivateTemporalClap", &ATMCharacter::execCanActivateTemporalClap },
		{ "CanWallRunAtLocation", &ATMCharacter::execCanWallRunAtLocation },
		{ "ConsumeMana", &ATMCharacter::execConsumeMana },
		{ "EndTemporalClap", &ATMCharacter::execEndTemporalClap },
		{ "GetCurrentSpeed", &ATMCharacter::execGetCurrentSpeed },
		{ "GetGrappleTier", &ATMCharacter::execGetGrappleTier },
		{ "GetHealth", &ATMCharacter::execGetHealth },
		{ "GetManaPercentage", &ATMCharacter::execGetManaPercentage },
		{ "GetMaxHealth", &ATMCharacter::execGetMaxHealth },
		{ "GetSpeedScalingFactor", &ATMCharacter::execGetSpeedScalingFactor },
		{ "HasEnoughMana", &ATMCharacter::execHasEnoughMana },
		{ "IsGrappling", &ATMCharacter::execIsGrappling },
		{ "IsLocationDestructible", &ATMCharacter::execIsLocationDestructible },
		{ "IsSliding", &ATMCharacter::execIsSliding },
		{ "IsSprinting", &ATMCharacter::execIsSprinting },
		{ "IsWallRunning", &ATMCharacter::execIsWallRunning },
		{ "SetHealth", &ATMCharacter::execSetHealth },
		{ "UpgradeGrappleTier", &ATMCharacter::execUpgradeGrappleTier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATMCharacter;
UClass* ATMCharacter::GetPrivateStaticClass()
{
	using TClass = ATMCharacter;
	if (!Z_Registration_Info_UClass_ATMCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TMCharacter"),
			Z_Registration_Info_UClass_ATMCharacter.InnerSingleton,
			StaticRegisterNativesATMCharacter,
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
	return Z_Registration_Info_UClass_ATMCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ATMCharacter_NoRegister()
{
	return ATMCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATMCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/TMCharacter.h" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "TM|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 MOVEMENT PARAMETERS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 MOVEMENT PARAMETERS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlideImpulse_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpZVelocity_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallRunGravityScale_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallRunSpeed_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallJumpLateralBoost_MetaData[] = {
		{ "Category", "TM|Movement" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForMagicScaling_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 MAGIC SCALING \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 MAGIC SCALING \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeedForMagicScaling_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDamageScale_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamageScale_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCooldownScale_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCooldownScale_MetaData[] = {
		{ "Category", "TM|Magic|Scaling" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingSigilRate_MetaData[] = {
		{ "Category", "TM|Magic|Sigils" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 PERSISTENT SIGILS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 PERSISTENT SIGILS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBuffMultiplier_MetaData[] = {
		{ "Category", "TM|Magic|Sigils" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedBuffDuration_MetaData[] = {
		{ "Category", "TM|Magic|Sigils" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageBuffMultiplier_MetaData[] = {
		{ "Category", "TM|Magic|Sigils" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageBuffDuration_MetaData[] = {
		{ "Category", "TM|Magic|Sigils" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "TM|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 MANA SYSTEM \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 MANA SYSTEM \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingMana_MetaData[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "TM|Mana|Regeneration" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenDelay_MetaData[] = {
		{ "Category", "TM|Mana|Regeneration" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaOnKill_MetaData[] = {
		{ "Category", "TM|Mana|Combat" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaOnHeadshot_MetaData[] = {
		{ "Category", "TM|Mana|Combat" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaOnMelee_MetaData[] = {
		{ "Category", "TM|Mana|Combat" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseTemporalClap_MetaData[] = {
		{ "Category", "TM|Temporal" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 TEMPORAL CLAP \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 TEMPORAL CLAP \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalClapCooldown_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalTimeDilation_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalClapDuration_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapAnimationDuration_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalClapManaCost_MetaData[] = {
		{ "Category", "TM|Temporal|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTemporalClapRefundOnNoSigils_MetaData[] = {
		{ "Category", "TM|Temporal|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalClapRefundPercent_MetaData[] = {
		{ "Category", "TM|Temporal|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalCameraTiltAngle_MetaData[] = {
		{ "Category", "TM|Temporal|Camera" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalCameraFOV_MetaData[] = {
		{ "Category", "TM|Temporal|Camera" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemporalActive_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalTimeRemaining_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStateName_MetaData[] = {
		{ "Category", "TM|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 STATE \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 STATE \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaChanged_MetaData[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaDepleted_MetaData[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaRegenStarted_MetaData[] = {
		{ "Category", "TM|Mana" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTemporalClapStarted_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTemporalClapEnded_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClapAnimationComplete_MetaData[] = {
		{ "Category", "TM|Temporal" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransfigurationCasting_MetaData[] = {
		{ "Category", "Magic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 COMPONENTS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 COMPONENTS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboDetector_MetaData[] = {
		{ "Category", "Magic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrappleComponent_MetaData[] = {
		{ "Category", "Grapple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "TM|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 INPUT ASSETS \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 INPUT ASSETS \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Move_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Look_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Sprint_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Slide_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_DrawSigil_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_PlaceSigil_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TriggerSigil_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TriggerAll_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_TemporalClap_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Grapple_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GrappleKick_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GrappleSlam_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GrappleToss_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GrappleEvade_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_GrapplePull_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_WebTrap_MetaData[] = {
		{ "Category", "TM|Input" },
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 HEALTH \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 HEALTH \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDamageMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Character/TMCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpZVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallRunGravityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallRunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallJumpLateralBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForMagicScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeedForMagicScaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDamageScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamageScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCooldownScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCooldownScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingSigilRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBuffMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageBuffMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageBuffDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRegenDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaOnKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaOnHeadshot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaOnMelee;
	static void NewProp_bCanUseTemporalClap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseTemporalClap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalClapCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalTimeDilation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalClapDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClapAnimationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalClapManaCost;
	static void NewProp_bTemporalClapRefundOnNoSigils_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporalClapRefundOnNoSigils;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalClapRefundPercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalCameraTiltAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalCameraFOV;
	static void NewProp_bIsTemporalActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemporalActive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalTimeRemaining;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentStateName;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaDepleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaRegenStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTemporalClapStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTemporalClapEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClapAnimationComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransfigurationCasting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboDetector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Sprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Slide;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_DrawSigil;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_PlaceSigil;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TriggerSigil;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TriggerAll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_TemporalClap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Grapple;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GrappleKick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GrappleSlam;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GrappleToss;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GrappleEvade;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_GrapplePull;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_WebTrap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATMCharacter_ActivateTemporalClap, "ActivateTemporalClap" }, // 1307791900
		{ &Z_Construct_UFunction_ATMCharacter_AddMana, "AddMana" }, // 596528297
		{ &Z_Construct_UFunction_ATMCharacter_ApplyDamageBuff, "ApplyDamageBuff" }, // 2705852592
		{ &Z_Construct_UFunction_ATMCharacter_ApplySpeedBuff, "ApplySpeedBuff" }, // 2116258079
		{ &Z_Construct_UFunction_ATMCharacter_CanActivateTemporalClap, "CanActivateTemporalClap" }, // 973760756
		{ &Z_Construct_UFunction_ATMCharacter_CanWallRunAtLocation, "CanWallRunAtLocation" }, // 340153841
		{ &Z_Construct_UFunction_ATMCharacter_ConsumeMana, "ConsumeMana" }, // 3209864620
		{ &Z_Construct_UFunction_ATMCharacter_EndTemporalClap, "EndTemporalClap" }, // 3534766338
		{ &Z_Construct_UFunction_ATMCharacter_GetCurrentSpeed, "GetCurrentSpeed" }, // 1265956913
		{ &Z_Construct_UFunction_ATMCharacter_GetGrappleTier, "GetGrappleTier" }, // 2148203085
		{ &Z_Construct_UFunction_ATMCharacter_GetHealth, "GetHealth" }, // 593012248
		{ &Z_Construct_UFunction_ATMCharacter_GetManaPercentage, "GetManaPercentage" }, // 3556880448
		{ &Z_Construct_UFunction_ATMCharacter_GetMaxHealth, "GetMaxHealth" }, // 722016061
		{ &Z_Construct_UFunction_ATMCharacter_GetSpeedScalingFactor, "GetSpeedScalingFactor" }, // 3371519394
		{ &Z_Construct_UFunction_ATMCharacter_HasEnoughMana, "HasEnoughMana" }, // 704966965
		{ &Z_Construct_UFunction_ATMCharacter_IsGrappling, "IsGrappling" }, // 2418417530
		{ &Z_Construct_UFunction_ATMCharacter_IsLocationDestructible, "IsLocationDestructible" }, // 299175423
		{ &Z_Construct_UFunction_ATMCharacter_IsSliding, "IsSliding" }, // 3273673754
		{ &Z_Construct_UFunction_ATMCharacter_IsSprinting, "IsSprinting" }, // 1082145822
		{ &Z_Construct_UFunction_ATMCharacter_IsWallRunning, "IsWallRunning" }, // 3036858006
		{ &Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature, "OnManaChanged__DelegateSignature" }, // 2425657902
		{ &Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature, "OnManaDepleted__DelegateSignature" }, // 3783566080
		{ &Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature, "OnManaRegenStarted__DelegateSignature" }, // 4073973773
		{ &Z_Construct_UFunction_ATMCharacter_SetHealth, "SetHealth" }, // 4172542657
		{ &Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature, "TemporalClapDelegate__DelegateSignature" }, // 3543650213
		{ &Z_Construct_UFunction_ATMCharacter_UpgradeGrappleTier, "UpgradeGrappleTier" }, // 3688832060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATMCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_SlideImpulse = { "SlideImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, SlideImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlideImpulse_MetaData), NewProp_SlideImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_JumpZVelocity = { "JumpZVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, JumpZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpZVelocity_MetaData), NewProp_JumpZVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallRunGravityScale = { "WallRunGravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, WallRunGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallRunGravityScale_MetaData), NewProp_WallRunGravityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallRunSpeed = { "WallRunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, WallRunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallRunSpeed_MetaData), NewProp_WallRunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallJumpLateralBoost = { "WallJumpLateralBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, WallJumpLateralBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallJumpLateralBoost_MetaData), NewProp_WallJumpLateralBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinSpeedForMagicScaling = { "MinSpeedForMagicScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MinSpeedForMagicScaling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeedForMagicScaling_MetaData), NewProp_MinSpeedForMagicScaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxSpeedForMagicScaling = { "MaxSpeedForMagicScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MaxSpeedForMagicScaling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeedForMagicScaling_MetaData), NewProp_MaxSpeedForMagicScaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinDamageScale = { "MinDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MinDamageScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDamageScale_MetaData), NewProp_MinDamageScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxDamageScale = { "MaxDamageScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MaxDamageScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamageScale_MetaData), NewProp_MaxDamageScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinCooldownScale = { "MinCooldownScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MinCooldownScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCooldownScale_MetaData), NewProp_MinCooldownScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxCooldownScale = { "MaxCooldownScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MaxCooldownScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCooldownScale_MetaData), NewProp_MaxCooldownScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_HealingSigilRate = { "HealingSigilRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, HealingSigilRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingSigilRate_MetaData), NewProp_HealingSigilRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_SpeedBuffMultiplier = { "SpeedBuffMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, SpeedBuffMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBuffMultiplier_MetaData), NewProp_SpeedBuffMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_SpeedBuffDuration = { "SpeedBuffDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, SpeedBuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedBuffDuration_MetaData), NewProp_SpeedBuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_DamageBuffMultiplier = { "DamageBuffMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, DamageBuffMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageBuffMultiplier_MetaData), NewProp_DamageBuffMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_DamageBuffDuration = { "DamageBuffDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, DamageBuffDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageBuffDuration_MetaData), NewProp_DamageBuffDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_StartingMana = { "StartingMana", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, StartingMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingMana_MetaData), NewProp_StartingMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ManaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaRegenDelay = { "ManaRegenDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ManaRegenDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenDelay_MetaData), NewProp_ManaRegenDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnKill = { "ManaOnKill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ManaOnKill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaOnKill_MetaData), NewProp_ManaOnKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnHeadshot = { "ManaOnHeadshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ManaOnHeadshot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaOnHeadshot_MetaData), NewProp_ManaOnHeadshot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnMelee = { "ManaOnMelee", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ManaOnMelee), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaOnMelee_MetaData), NewProp_ManaOnMelee_MetaData) };
void Z_Construct_UClass_ATMCharacter_Statics::NewProp_bCanUseTemporalClap_SetBit(void* Obj)
{
	((ATMCharacter*)Obj)->bCanUseTemporalClap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_bCanUseTemporalClap = { "bCanUseTemporalClap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATMCharacter), &Z_Construct_UClass_ATMCharacter_Statics::NewProp_bCanUseTemporalClap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUseTemporalClap_MetaData), NewProp_bCanUseTemporalClap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapCooldown = { "TemporalClapCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalClapCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalClapCooldown_MetaData), NewProp_TemporalClapCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalTimeDilation = { "TemporalTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalTimeDilation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalTimeDilation_MetaData), NewProp_TemporalTimeDilation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapDuration = { "TemporalClapDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalClapDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalClapDuration_MetaData), NewProp_TemporalClapDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ClapAnimationDuration = { "ClapAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ClapAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapAnimationDuration_MetaData), NewProp_ClapAnimationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapManaCost = { "TemporalClapManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalClapManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalClapManaCost_MetaData), NewProp_TemporalClapManaCost_MetaData) };
void Z_Construct_UClass_ATMCharacter_Statics::NewProp_bTemporalClapRefundOnNoSigils_SetBit(void* Obj)
{
	((ATMCharacter*)Obj)->bTemporalClapRefundOnNoSigils = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_bTemporalClapRefundOnNoSigils = { "bTemporalClapRefundOnNoSigils", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATMCharacter), &Z_Construct_UClass_ATMCharacter_Statics::NewProp_bTemporalClapRefundOnNoSigils_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTemporalClapRefundOnNoSigils_MetaData), NewProp_bTemporalClapRefundOnNoSigils_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapRefundPercent = { "TemporalClapRefundPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalClapRefundPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalClapRefundPercent_MetaData), NewProp_TemporalClapRefundPercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalCameraTiltAngle = { "TemporalCameraTiltAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalCameraTiltAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalCameraTiltAngle_MetaData), NewProp_TemporalCameraTiltAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalCameraFOV = { "TemporalCameraFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalCameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalCameraFOV_MetaData), NewProp_TemporalCameraFOV_MetaData) };
void Z_Construct_UClass_ATMCharacter_Statics::NewProp_bIsTemporalActive_SetBit(void* Obj)
{
	((ATMCharacter*)Obj)->bIsTemporalActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_bIsTemporalActive = { "bIsTemporalActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATMCharacter), &Z_Construct_UClass_ATMCharacter_Statics::NewProp_bIsTemporalActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTemporalActive_MetaData), NewProp_bIsTemporalActive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalTimeRemaining = { "TemporalTimeRemaining", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TemporalTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalTimeRemaining_MetaData), NewProp_TemporalTimeRemaining_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentStateName = { "CurrentStateName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, CurrentStateName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStateName_MetaData), NewProp_CurrentStateName_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaChanged = { "OnManaChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnManaChanged), Z_Construct_UDelegateFunction_ATMCharacter_OnManaChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaChanged_MetaData), NewProp_OnManaChanged_MetaData) }; // 2425657902
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaDepleted = { "OnManaDepleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnManaDepleted), Z_Construct_UDelegateFunction_ATMCharacter_OnManaDepleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaDepleted_MetaData), NewProp_OnManaDepleted_MetaData) }; // 3783566080
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaRegenStarted = { "OnManaRegenStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnManaRegenStarted), Z_Construct_UDelegateFunction_ATMCharacter_OnManaRegenStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaRegenStarted_MetaData), NewProp_OnManaRegenStarted_MetaData) }; // 4073973773
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnTemporalClapStarted = { "OnTemporalClapStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnTemporalClapStarted), Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTemporalClapStarted_MetaData), NewProp_OnTemporalClapStarted_MetaData) }; // 3543650213
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnTemporalClapEnded = { "OnTemporalClapEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnTemporalClapEnded), Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTemporalClapEnded_MetaData), NewProp_OnTemporalClapEnded_MetaData) }; // 3543650213
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnClapAnimationComplete = { "OnClapAnimationComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, OnClapAnimationComplete), Z_Construct_UDelegateFunction_ATMCharacter_TemporalClapDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClapAnimationComplete_MetaData), NewProp_OnClapAnimationComplete_MetaData) }; // 3543650213
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_TransfigurationCasting = { "TransfigurationCasting", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, TransfigurationCasting), Z_Construct_UClass_UTransfigurationCastingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransfigurationCasting_MetaData), NewProp_TransfigurationCasting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_ComboDetector = { "ComboDetector", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, ComboDetector), Z_Construct_UClass_UTransfigurationComboDetector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboDetector_MetaData), NewProp_ComboDetector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_GrappleComponent = { "GrappleComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, GrappleComponent), Z_Construct_UClass_UGrappleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrappleComponent_MetaData), NewProp_GrappleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Move = { "IA_Move", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Move_MetaData), NewProp_IA_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Look = { "IA_Look", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Look_MetaData), NewProp_IA_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Sprint = { "IA_Sprint", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Sprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Sprint_MetaData), NewProp_IA_Sprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Slide = { "IA_Slide", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Slide), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Slide_MetaData), NewProp_IA_Slide_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_DrawSigil = { "IA_DrawSigil", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_DrawSigil), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_DrawSigil_MetaData), NewProp_IA_DrawSigil_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_PlaceSigil = { "IA_PlaceSigil", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_PlaceSigil), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_PlaceSigil_MetaData), NewProp_IA_PlaceSigil_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TriggerSigil = { "IA_TriggerSigil", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_TriggerSigil), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TriggerSigil_MetaData), NewProp_IA_TriggerSigil_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TriggerAll = { "IA_TriggerAll", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_TriggerAll), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TriggerAll_MetaData), NewProp_IA_TriggerAll_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TemporalClap = { "IA_TemporalClap", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_TemporalClap), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_TemporalClap_MetaData), NewProp_IA_TemporalClap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Grapple = { "IA_Grapple", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_Grapple), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Grapple_MetaData), NewProp_IA_Grapple_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleKick = { "IA_GrappleKick", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_GrappleKick), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GrappleKick_MetaData), NewProp_IA_GrappleKick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleSlam = { "IA_GrappleSlam", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_GrappleSlam), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GrappleSlam_MetaData), NewProp_IA_GrappleSlam_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleToss = { "IA_GrappleToss", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_GrappleToss), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GrappleToss_MetaData), NewProp_IA_GrappleToss_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleEvade = { "IA_GrappleEvade", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_GrappleEvade), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GrappleEvade_MetaData), NewProp_IA_GrappleEvade_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrapplePull = { "IA_GrapplePull", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_GrapplePull), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_GrapplePull_MetaData), NewProp_IA_GrapplePull_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_WebTrap = { "IA_WebTrap", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, IA_WebTrap), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_WebTrap_MetaData), NewProp_IA_WebTrap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentDamageMultiplier = { "CurrentDamageMultiplier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATMCharacter, CurrentDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDamageMultiplier_MetaData), NewProp_CurrentDamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATMCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_SlideImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_JumpZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallRunGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallRunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_WallJumpLateralBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinSpeedForMagicScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxSpeedForMagicScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinDamageScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxDamageScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MinCooldownScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxCooldownScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_HealingSigilRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_SpeedBuffMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_SpeedBuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_DamageBuffMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_DamageBuffDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_StartingMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnHeadshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ManaOnMelee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_bCanUseTemporalClap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ClapAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_bTemporalClapRefundOnNoSigils,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalClapRefundPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalCameraTiltAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalCameraFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_bIsTemporalActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TemporalTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentStateName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaDepleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnManaRegenStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnTemporalClapStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnTemporalClapEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_OnClapAnimationComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_TransfigurationCasting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_ComboDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_GrappleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Sprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Slide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_DrawSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_PlaceSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TriggerSigil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TriggerAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_TemporalClap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_Grapple,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleKick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleSlam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleToss,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrappleEvade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_GrapplePull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_IA_WebTrap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATMCharacter_Statics::NewProp_CurrentDamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATMCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATMCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATMCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATMCharacter_Statics::ClassParams = {
	&ATMCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATMCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATMCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATMCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATMCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATMCharacter()
{
	if (!Z_Registration_Info_UClass_ATMCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATMCharacter.OuterSingleton, Z_Construct_UClass_ATMCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATMCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATMCharacter);
ATMCharacter::~ATMCharacter() {}
// ********** End Class ATMCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATMCharacter, ATMCharacter::StaticClass, TEXT("ATMCharacter"), &Z_Registration_Info_UClass_ATMCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATMCharacter), 979633873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h__Script_Transfigure_4232660349(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Character_TMCharacter_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
