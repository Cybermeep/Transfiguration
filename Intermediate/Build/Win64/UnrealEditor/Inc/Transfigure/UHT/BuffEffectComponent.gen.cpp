// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuffEffectComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuffEffectComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UBuffEffectComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UBuffEffectComponent_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EBuffType();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBuffApplied ********************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnBuffApplied_Parms
	{
		EBuffType BuffType;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnBuffApplied_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnBuffApplied_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_BuffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnBuffApplied__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::_Script_Transfigure_eventOnBuffApplied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::_Script_Transfigure_eventOnBuffApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuffApplied_DelegateWrapper(const FMulticastScriptDelegate& OnBuffApplied, EBuffType BuffType, float Duration)
{
	struct _Script_Transfigure_eventOnBuffApplied_Parms
	{
		EBuffType BuffType;
		float Duration;
	};
	_Script_Transfigure_eventOnBuffApplied_Parms Parms;
	Parms.BuffType=BuffType;
	Parms.Duration=Duration;
	OnBuffApplied.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBuffApplied **********************************************************

// ********** Begin Delegate FOnBuffExpired ********************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnBuffExpired_Parms
	{
		EBuffType BuffType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnBuffExpired_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::NewProp_BuffType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnBuffExpired__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::_Script_Transfigure_eventOnBuffExpired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::_Script_Transfigure_eventOnBuffExpired_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBuffExpired_DelegateWrapper(const FMulticastScriptDelegate& OnBuffExpired, EBuffType BuffType)
{
	struct _Script_Transfigure_eventOnBuffExpired_Parms
	{
		EBuffType BuffType;
	};
	_Script_Transfigure_eventOnBuffExpired_Parms Parms;
	Parms.BuffType=BuffType;
	OnBuffExpired.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBuffExpired **********************************************************

// ********** Begin Class UBuffEffectComponent Function ApplyBuff **********************************
struct Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics
{
	struct BuffEffectComponent_eventApplyBuff_Parms
	{
		EBuffType BuffType;
		float Multiplier;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventApplyBuff_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventApplyBuff_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventApplyBuff_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_BuffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffEffectComponent, nullptr, "ApplyBuff", Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::BuffEffectComponent_eventApplyBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::BuffEffectComponent_eventApplyBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffEffectComponent::execApplyBuff)
{
	P_GET_ENUM(EBuffType,Z_Param_BuffType);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBuff(EBuffType(Z_Param_BuffType),Z_Param_Multiplier,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UBuffEffectComponent Function ApplyBuff ************************************

// ********** Begin Class UBuffEffectComponent Function GetBuffMultiplier **************************
struct Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics
{
	struct BuffEffectComponent_eventGetBuffMultiplier_Parms
	{
		EBuffType BuffType;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventGetBuffMultiplier_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventGetBuffMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_BuffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffEffectComponent, nullptr, "GetBuffMultiplier", Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::BuffEffectComponent_eventGetBuffMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::BuffEffectComponent_eventGetBuffMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffEffectComponent::execGetBuffMultiplier)
{
	P_GET_ENUM(EBuffType,Z_Param_BuffType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBuffMultiplier(EBuffType(Z_Param_BuffType));
	P_NATIVE_END;
}
// ********** End Class UBuffEffectComponent Function GetBuffMultiplier ****************************

// ********** Begin Class UBuffEffectComponent Function HasBuff ************************************
struct Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics
{
	struct BuffEffectComponent_eventHasBuff_Parms
	{
		EBuffType BuffType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventHasBuff_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
void Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BuffEffectComponent_eventHasBuff_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BuffEffectComponent_eventHasBuff_Parms), &Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_BuffType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffEffectComponent, nullptr, "HasBuff", Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::BuffEffectComponent_eventHasBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::BuffEffectComponent_eventHasBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffEffectComponent_HasBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffEffectComponent_HasBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffEffectComponent::execHasBuff)
{
	P_GET_ENUM(EBuffType,Z_Param_BuffType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasBuff(EBuffType(Z_Param_BuffType));
	P_NATIVE_END;
}
// ********** End Class UBuffEffectComponent Function HasBuff **************************************

// ********** Begin Class UBuffEffectComponent Function RemoveBuff *********************************
struct Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics
{
	struct BuffEffectComponent_eventRemoveBuff_Parms
	{
		EBuffType BuffType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Buff" },
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuffType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuffType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::NewProp_BuffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::NewProp_BuffType = { "BuffType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BuffEffectComponent_eventRemoveBuff_Parms, BuffType), Z_Construct_UEnum_Transfigure_EBuffType, METADATA_PARAMS(0, nullptr) }; // 3442642938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::NewProp_BuffType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::NewProp_BuffType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBuffEffectComponent, nullptr, "RemoveBuff", Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::BuffEffectComponent_eventRemoveBuff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::BuffEffectComponent_eventRemoveBuff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBuffEffectComponent::execRemoveBuff)
{
	P_GET_ENUM(EBuffType,Z_Param_BuffType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBuff(EBuffType(Z_Param_BuffType));
	P_NATIVE_END;
}
// ********** End Class UBuffEffectComponent Function RemoveBuff ***********************************

// ********** Begin Class UBuffEffectComponent *****************************************************
void UBuffEffectComponent::StaticRegisterNativesUBuffEffectComponent()
{
	UClass* Class = UBuffEffectComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyBuff", &UBuffEffectComponent::execApplyBuff },
		{ "GetBuffMultiplier", &UBuffEffectComponent::execGetBuffMultiplier },
		{ "HasBuff", &UBuffEffectComponent::execHasBuff },
		{ "RemoveBuff", &UBuffEffectComponent::execRemoveBuff },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuffEffectComponent;
UClass* UBuffEffectComponent::GetPrivateStaticClass()
{
	using TClass = UBuffEffectComponent;
	if (!Z_Registration_Info_UClass_UBuffEffectComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuffEffectComponent"),
			Z_Registration_Info_UClass_UBuffEffectComponent.InnerSingleton,
			StaticRegisterNativesUBuffEffectComponent,
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
	return Z_Registration_Info_UClass_UBuffEffectComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuffEffectComponent_NoRegister()
{
	return UBuffEffectComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuffEffectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Transfiguration/BuffEffectComponent.h" },
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuffApplied_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBuffExpired_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/BuffEffectComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuffApplied;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBuffExpired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuffEffectComponent_ApplyBuff, "ApplyBuff" }, // 3439621913
		{ &Z_Construct_UFunction_UBuffEffectComponent_GetBuffMultiplier, "GetBuffMultiplier" }, // 3677831038
		{ &Z_Construct_UFunction_UBuffEffectComponent_HasBuff, "HasBuff" }, // 2698363911
		{ &Z_Construct_UFunction_UBuffEffectComponent_RemoveBuff, "RemoveBuff" }, // 571102929
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuffEffectComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBuffEffectComponent_Statics::NewProp_OnBuffApplied = { "OnBuffApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffEffectComponent, OnBuffApplied), Z_Construct_UDelegateFunction_Transfigure_OnBuffApplied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuffApplied_MetaData), NewProp_OnBuffApplied_MetaData) }; // 3970702673
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBuffEffectComponent_Statics::NewProp_OnBuffExpired = { "OnBuffExpired", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBuffEffectComponent, OnBuffExpired), Z_Construct_UDelegateFunction_Transfigure_OnBuffExpired__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBuffExpired_MetaData), NewProp_OnBuffExpired_MetaData) }; // 3320253939
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBuffEffectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffEffectComponent_Statics::NewProp_OnBuffApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBuffEffectComponent_Statics::NewProp_OnBuffExpired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffEffectComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBuffEffectComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffEffectComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuffEffectComponent_Statics::ClassParams = {
	&UBuffEffectComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBuffEffectComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBuffEffectComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuffEffectComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuffEffectComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuffEffectComponent()
{
	if (!Z_Registration_Info_UClass_UBuffEffectComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuffEffectComponent.OuterSingleton, Z_Construct_UClass_UBuffEffectComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuffEffectComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuffEffectComponent);
UBuffEffectComponent::~UBuffEffectComponent() {}
// ********** End Class UBuffEffectComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuffEffectComponent, UBuffEffectComponent::StaticClass, TEXT("UBuffEffectComponent"), &Z_Registration_Info_UClass_UBuffEffectComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuffEffectComponent), 3493792151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h__Script_Transfigure_3956802339(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_BuffEffectComponent_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
