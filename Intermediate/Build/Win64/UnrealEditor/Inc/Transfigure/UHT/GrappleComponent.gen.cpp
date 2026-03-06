// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrappleComponent.h"
#include "Engine/TimerHandle.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGrappleComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_AGrappleLine_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UGrappleComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UGrappleComponent_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ECombatGrappleMove();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleState();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EGrappleTier();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FGrappleLineData();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGrappleStateChanged ************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnGrappleStateChanged_Parms
	{
		EGrappleState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnGrappleStateChanged_Parms, NewState), Z_Construct_UEnum_Transfigure_EGrappleState, METADATA_PARAMS(0, nullptr) }; // 3281509907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnGrappleStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnGrappleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnGrappleStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrappleStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGrappleStateChanged, EGrappleState NewState)
{
	struct _Script_Transfigure_eventOnGrappleStateChanged_Parms
	{
		EGrappleState NewState;
	};
	_Script_Transfigure_eventOnGrappleStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnGrappleStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGrappleStateChanged **************************************************

// ********** Begin Delegate FOnGrappleLineCreated *************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnGrappleLineCreated_Parms
	{
		FGrappleLineData LineData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::NewProp_LineData = { "LineData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnGrappleLineCreated_Parms, LineData), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineData_MetaData), NewProp_LineData_MetaData) }; // 60921744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::NewProp_LineData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnGrappleLineCreated__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::_Script_Transfigure_eventOnGrappleLineCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::_Script_Transfigure_eventOnGrappleLineCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGrappleLineCreated_DelegateWrapper(const FMulticastScriptDelegate& OnGrappleLineCreated, FGrappleLineData const& LineData)
{
	struct _Script_Transfigure_eventOnGrappleLineCreated_Parms
	{
		FGrappleLineData LineData;
	};
	_Script_Transfigure_eventOnGrappleLineCreated_Parms Parms;
	Parms.LineData=LineData;
	OnGrappleLineCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnGrappleLineCreated ***************************************************

// ********** Begin Delegate FOnCombatGrappleExecuted **********************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnCombatGrappleExecuted_Parms
	{
		ECombatGrappleMove MoveType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnCombatGrappleExecuted_Parms, MoveType), Z_Construct_UEnum_Transfigure_ECombatGrappleMove, METADATA_PARAMS(0, nullptr) }; // 3197916696
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::NewProp_MoveType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnCombatGrappleExecuted__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::_Script_Transfigure_eventOnCombatGrappleExecuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::_Script_Transfigure_eventOnCombatGrappleExecuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCombatGrappleExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnCombatGrappleExecuted, ECombatGrappleMove MoveType)
{
	struct _Script_Transfigure_eventOnCombatGrappleExecuted_Parms
	{
		ECombatGrappleMove MoveType;
	};
	_Script_Transfigure_eventOnCombatGrappleExecuted_Parms Parms;
	Parms.MoveType=MoveType;
	OnCombatGrappleExecuted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCombatGrappleExecuted ************************************************

// ********** Begin Class UGrappleComponent Function CancelAiming **********************************
struct Z_Construct_UFunction_UGrappleComponent_CancelAiming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_CancelAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "CancelAiming", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CancelAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_CancelAiming_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGrappleComponent_CancelAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_CancelAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execCancelAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAiming();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function CancelAiming ************************************

// ********** Begin Class UGrappleComponent Function CanCreateWebLine ******************************
struct Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics
{
	struct GrappleComponent_eventCanCreateWebLine_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrappleComponent_eventCanCreateWebLine_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrappleComponent_eventCanCreateWebLine_Parms), &Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "CanCreateWebLine", Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::GrappleComponent_eventCanCreateWebLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::GrappleComponent_eventCanCreateWebLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execCanCreateWebLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCreateWebLine();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function CanCreateWebLine ********************************

// ********** Begin Class UGrappleComponent Function CreateWebLine *********************************
struct Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics
{
	struct GrappleComponent_eventCreateWebLine_Parms
	{
		FVector StartPoint;
		FVector EndPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventCreateWebLine_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventCreateWebLine_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::NewProp_EndPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "CreateWebLine", Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::GrappleComponent_eventCreateWebLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::GrappleComponent_eventCreateWebLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_CreateWebLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_CreateWebLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execCreateWebLine)
{
	P_GET_STRUCT(FVector,Z_Param_StartPoint);
	P_GET_STRUCT(FVector,Z_Param_EndPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateWebLine(Z_Param_StartPoint,Z_Param_EndPoint);
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function CreateWebLine ***********************************

// ********** Begin Class UGrappleComponent Function ExecuteCombatMove *****************************
struct Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics
{
	struct GrappleComponent_eventExecuteCombatMove_Parms
	{
		ECombatGrappleMove MoveType;
		AActor* TargetEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventExecuteCombatMove_Parms, MoveType), Z_Construct_UEnum_Transfigure_ECombatGrappleMove, METADATA_PARAMS(0, nullptr) }; // 3197916696
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_TargetEnemy = { "TargetEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventExecuteCombatMove_Parms, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_MoveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::NewProp_TargetEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "ExecuteCombatMove", Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::GrappleComponent_eventExecuteCombatMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::GrappleComponent_eventExecuteCombatMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execExecuteCombatMove)
{
	P_GET_ENUM(ECombatGrappleMove,Z_Param_MoveType);
	P_GET_OBJECT(AActor,Z_Param_TargetEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteCombatMove(ECombatGrappleMove(Z_Param_MoveType),Z_Param_TargetEnemy);
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function ExecuteCombatMove *******************************

// ********** Begin Class UGrappleComponent Function FindWebConnectionPoints ***********************
struct Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics
{
	struct GrappleComponent_eventFindWebConnectionPoints_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Web" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventFindWebConnectionPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "FindWebConnectionPoints", Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::GrappleComponent_eventFindWebConnectionPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::GrappleComponent_eventFindWebConnectionPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execFindWebConnectionPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->FindWebConnectionPoints();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function FindWebConnectionPoints *************************

// ********** Begin Class UGrappleComponent Function FireGrapple ***********************************
struct Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics
{
	struct GrappleComponent_eventFireGrapple_Parms
	{
		FVector AimLocation;
		AActor* TargetEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "CPP_Default_TargetEnemy", "None" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::NewProp_AimLocation = { "AimLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventFireGrapple_Parms, AimLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::NewProp_TargetEnemy = { "TargetEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventFireGrapple_Parms, TargetEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::NewProp_AimLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::NewProp_TargetEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "FireGrapple", Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::GrappleComponent_eventFireGrapple_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::GrappleComponent_eventFireGrapple_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_FireGrapple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_FireGrapple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execFireGrapple)
{
	P_GET_STRUCT(FVector,Z_Param_AimLocation);
	P_GET_OBJECT(AActor,Z_Param_TargetEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireGrapple(Z_Param_AimLocation,Z_Param_TargetEnemy);
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function FireGrapple *************************************

// ********** Begin Class UGrappleComponent Function GetActiveLines ********************************
struct Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics
{
	struct GrappleComponent_eventGetActiveLines_Parms
	{
		TArray<FGrappleLineData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(0, nullptr) }; // 60921744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventGetActiveLines_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 60921744
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "GetActiveLines", Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::GrappleComponent_eventGetActiveLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::GrappleComponent_eventGetActiveLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_GetActiveLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_GetActiveLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execGetActiveLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGrappleLineData>*)Z_Param__Result=P_THIS->GetActiveLines();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function GetActiveLines **********************************

// ********** Begin Class UGrappleComponent Function GetCurrentState *******************************
struct Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics
{
	struct GrappleComponent_eventGetCurrentState_Parms
	{
		EGrappleState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_Transfigure_EGrappleState, METADATA_PARAMS(0, nullptr) }; // 3281509907
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "GetCurrentState", Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::GrappleComponent_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::GrappleComponent_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGrappleState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function GetCurrentState *********************************

// ********** Begin Class UGrappleComponent Function GetCurrentTier ********************************
struct Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics
{
	struct GrappleComponent_eventGetCurrentTier_Parms
	{
		EGrappleTier ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventGetCurrentTier_Parms, ReturnValue), Z_Construct_UEnum_Transfigure_EGrappleTier, METADATA_PARAMS(0, nullptr) }; // 2773041228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "GetCurrentTier", Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::GrappleComponent_eventGetCurrentTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::GrappleComponent_eventGetCurrentTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_GetCurrentTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_GetCurrentTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execGetCurrentTier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGrappleTier*)Z_Param__Result=P_THIS->GetCurrentTier();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function GetCurrentTier **********************************

// ********** Begin Class UGrappleComponent Function GetCurrentTierLines ***************************
struct Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics
{
	struct GrappleComponent_eventGetCurrentTierLines_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Query" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventGetCurrentTierLines_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "GetCurrentTierLines", Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::GrappleComponent_eventGetCurrentTierLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::GrappleComponent_eventGetCurrentTierLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execGetCurrentTierLines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentTierLines();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function GetCurrentTierLines *****************************

// ********** Begin Class UGrappleComponent Function GetMomentumPreservation ***********************
struct Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics
{
	struct GrappleComponent_eventGetMomentumPreservation_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Query" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventGetMomentumPreservation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "GetMomentumPreservation", Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::GrappleComponent_eventGetMomentumPreservation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::GrappleComponent_eventGetMomentumPreservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execGetMomentumPreservation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMomentumPreservation();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function GetMomentumPreservation *************************

// ********** Begin Class UGrappleComponent Function IsEnemyGrappleable ****************************
struct Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics
{
	struct GrappleComponent_eventIsEnemyGrappleable_Parms
	{
		AActor* Enemy;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple|Combat" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventIsEnemyGrappleable_Parms, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GrappleComponent_eventIsEnemyGrappleable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GrappleComponent_eventIsEnemyGrappleable_Parms), &Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "IsEnemyGrappleable", Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::GrappleComponent_eventIsEnemyGrappleable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::GrappleComponent_eventIsEnemyGrappleable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execIsEnemyGrappleable)
{
	P_GET_OBJECT(AActor,Z_Param_Enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnemyGrappleable(Z_Param_Enemy);
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function IsEnemyGrappleable ******************************

// ********** Begin Class UGrappleComponent Function ReleaseGrapple ********************************
struct Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "ReleaseGrapple", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execReleaseGrapple)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseGrapple();
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function ReleaseGrapple **********************************

// ********** Begin Class UGrappleComponent Function SetCurrentTier ********************************
struct Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics
{
	struct GrappleComponent_eventSetCurrentTier_Parms
	{
		EGrappleTier NewTier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::NewProp_NewTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::NewProp_NewTier = { "NewTier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventSetCurrentTier_Parms, NewTier), Z_Construct_UEnum_Transfigure_EGrappleTier, METADATA_PARAMS(0, nullptr) }; // 2773041228
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::NewProp_NewTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::NewProp_NewTier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "SetCurrentTier", Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::GrappleComponent_eventSetCurrentTier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::GrappleComponent_eventSetCurrentTier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_SetCurrentTier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_SetCurrentTier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execSetCurrentTier)
{
	P_GET_ENUM(EGrappleTier,Z_Param_NewTier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTier(EGrappleTier(Z_Param_NewTier));
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function SetCurrentTier **********************************

// ********** Begin Class UGrappleComponent Function SetEvadeDirection *****************************
struct Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics
{
	struct GrappleComponent_eventSetEvadeDirection_Parms
	{
		FVector Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 BUG 3 FIX: SetEvadeDirection so TMCharacter can pass input direction \xe2\x94\x80\xe2\x94\x80\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 BUG 3 FIX: SetEvadeDirection so TMCharacter can pass input direction \xe2\x94\x80\xe2\x94\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventSetEvadeDirection_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "SetEvadeDirection", Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::GrappleComponent_eventSetEvadeDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::GrappleComponent_eventSetEvadeDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execSetEvadeDirection)
{
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEvadeDirection(Z_Param_Direction);
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function SetEvadeDirection *******************************

// ********** Begin Class UGrappleComponent Function StartAiming ***********************************
struct Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics
{
	struct GrappleComponent_eventStartAiming_Parms
	{
		ETransfigurationElement Element;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grapple" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public methods\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GrappleComponent_eventStartAiming_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4031656671
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGrappleComponent, nullptr, "StartAiming", Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::GrappleComponent_eventStartAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::GrappleComponent_eventStartAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrappleComponent_StartAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrappleComponent_StartAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrappleComponent::execStartAiming)
{
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAiming(ETransfigurationElement(Z_Param_Element));
	P_NATIVE_END;
}
// ********** End Class UGrappleComponent Function StartAiming *************************************

// ********** Begin Class UGrappleComponent ********************************************************
void UGrappleComponent::StaticRegisterNativesUGrappleComponent()
{
	UClass* Class = UGrappleComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelAiming", &UGrappleComponent::execCancelAiming },
		{ "CanCreateWebLine", &UGrappleComponent::execCanCreateWebLine },
		{ "CreateWebLine", &UGrappleComponent::execCreateWebLine },
		{ "ExecuteCombatMove", &UGrappleComponent::execExecuteCombatMove },
		{ "FindWebConnectionPoints", &UGrappleComponent::execFindWebConnectionPoints },
		{ "FireGrapple", &UGrappleComponent::execFireGrapple },
		{ "GetActiveLines", &UGrappleComponent::execGetActiveLines },
		{ "GetCurrentState", &UGrappleComponent::execGetCurrentState },
		{ "GetCurrentTier", &UGrappleComponent::execGetCurrentTier },
		{ "GetCurrentTierLines", &UGrappleComponent::execGetCurrentTierLines },
		{ "GetMomentumPreservation", &UGrappleComponent::execGetMomentumPreservation },
		{ "IsEnemyGrappleable", &UGrappleComponent::execIsEnemyGrappleable },
		{ "ReleaseGrapple", &UGrappleComponent::execReleaseGrapple },
		{ "SetCurrentTier", &UGrappleComponent::execSetCurrentTier },
		{ "SetEvadeDirection", &UGrappleComponent::execSetEvadeDirection },
		{ "StartAiming", &UGrappleComponent::execStartAiming },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGrappleComponent;
UClass* UGrappleComponent::GetPrivateStaticClass()
{
	using TClass = UGrappleComponent;
	if (!Z_Registration_Info_UClass_UGrappleComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GrappleComponent"),
			Z_Registration_Info_UClass_UGrappleComponent.InnerSingleton,
			StaticRegisterNativesUGrappleComponent,
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
	return Z_Registration_Info_UClass_UGrappleComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UGrappleComponent_NoRegister()
{
	return UGrappleComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGrappleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Grapple/GrappleComponent.h" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGrappleRange_MetaData[] = {
		{ "Category", "Grapple|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingStrength_MetaData[] = {
		{ "Category", "Grapple|Config" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MomentumConservation_MetaData[] = {
		{ "Category", "Grapple|Config" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSwingTime_MetaData[] = {
		{ "Category", "Grapple|Config" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousLines_MetaData[] = {
		{ "Category", "Grapple|Config" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTier_MetaData[] = {
		{ "Category", "Grapple|Tier" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingManaCost_MetaData[] = {
		{ "Category", "Grapple|Mana" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatGrappleManaCost_MetaData[] = {
		{ "Category", "Grapple|Mana" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WebLineManaCost_MetaData[] = {
		{ "Category", "Grapple|Mana" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Grapple|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentElement_MetaData[] = {
		{ "Category", "Grapple|State" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLines_MetaData[] = {
		{ "Category", "Grapple|State" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLineCount_MetaData[] = {
		{ "Category", "Grapple|State" },
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrappleStateChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGrappleLineCreated_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatGrappleExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedLines_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSwingData_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingAnchorPoint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Swing physics state (Verlet integration)\n" },
#endif
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Swing physics state (Verlet integration)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingRopeLength_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSwinging_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/GrappleComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGrappleRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MomentumConservation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSwingTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousLines;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentTier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CombatGrappleManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WebLineManaCost;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentElement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentElement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveLines;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLineCount;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrappleStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGrappleLineCreated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatGrappleExecuted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedLines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedLines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentSwingData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingAnchorPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwingVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingRopeLength;
	static void NewProp_bIsSwinging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSwinging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrappleComponent_CancelAiming, "CancelAiming" }, // 762401731
		{ &Z_Construct_UFunction_UGrappleComponent_CanCreateWebLine, "CanCreateWebLine" }, // 3708881580
		{ &Z_Construct_UFunction_UGrappleComponent_CreateWebLine, "CreateWebLine" }, // 733368589
		{ &Z_Construct_UFunction_UGrappleComponent_ExecuteCombatMove, "ExecuteCombatMove" }, // 799333489
		{ &Z_Construct_UFunction_UGrappleComponent_FindWebConnectionPoints, "FindWebConnectionPoints" }, // 3661965985
		{ &Z_Construct_UFunction_UGrappleComponent_FireGrapple, "FireGrapple" }, // 4015163520
		{ &Z_Construct_UFunction_UGrappleComponent_GetActiveLines, "GetActiveLines" }, // 1772119324
		{ &Z_Construct_UFunction_UGrappleComponent_GetCurrentState, "GetCurrentState" }, // 494854447
		{ &Z_Construct_UFunction_UGrappleComponent_GetCurrentTier, "GetCurrentTier" }, // 1682251334
		{ &Z_Construct_UFunction_UGrappleComponent_GetCurrentTierLines, "GetCurrentTierLines" }, // 2871485566
		{ &Z_Construct_UFunction_UGrappleComponent_GetMomentumPreservation, "GetMomentumPreservation" }, // 4083995122
		{ &Z_Construct_UFunction_UGrappleComponent_IsEnemyGrappleable, "IsEnemyGrappleable" }, // 838319851
		{ &Z_Construct_UFunction_UGrappleComponent_ReleaseGrapple, "ReleaseGrapple" }, // 661100126
		{ &Z_Construct_UFunction_UGrappleComponent_SetCurrentTier, "SetCurrentTier" }, // 849017257
		{ &Z_Construct_UFunction_UGrappleComponent_SetEvadeDirection, "SetEvadeDirection" }, // 272271083
		{ &Z_Construct_UFunction_UGrappleComponent_StartAiming, "StartAiming" }, // 2171150136
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrappleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxGrappleRange = { "MaxGrappleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, MaxGrappleRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGrappleRange_MetaData), NewProp_MaxGrappleRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingStrength = { "SwingStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingStrength_MetaData), NewProp_SwingStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MomentumConservation = { "MomentumConservation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, MomentumConservation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MomentumConservation_MetaData), NewProp_MomentumConservation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxSwingTime = { "MaxSwingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, MaxSwingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSwingTime_MetaData), NewProp_MaxSwingTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxSimultaneousLines = { "MaxSimultaneousLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, MaxSimultaneousLines), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimultaneousLines_MetaData), NewProp_MaxSimultaneousLines_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentTier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentTier = { "CurrentTier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CurrentTier), Z_Construct_UEnum_Transfigure_EGrappleTier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTier_MetaData), NewProp_CurrentTier_MetaData) }; // 2773041228
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingManaCost = { "SwingManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingManaCost_MetaData), NewProp_SwingManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CombatGrappleManaCost = { "CombatGrappleManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CombatGrappleManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatGrappleManaCost_MetaData), NewProp_CombatGrappleManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_WebLineManaCost = { "WebLineManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, WebLineManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WebLineManaCost_MetaData), NewProp_WebLineManaCost_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CurrentState), Z_Construct_UEnum_Transfigure_EGrappleState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3281509907
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentElement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentElement = { "CurrentElement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CurrentElement), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentElement_MetaData), NewProp_CurrentElement_MetaData) }; // 4031656671
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_ActiveLines_Inner = { "ActiveLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(0, nullptr) }; // 60921744
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_ActiveLines = { "ActiveLines", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, ActiveLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLines_MetaData), NewProp_ActiveLines_MetaData) }; // 60921744
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentLineCount = { "CurrentLineCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CurrentLineCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLineCount_MetaData), NewProp_CurrentLineCount_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnGrappleStateChanged = { "OnGrappleStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, OnGrappleStateChanged), Z_Construct_UDelegateFunction_Transfigure_OnGrappleStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrappleStateChanged_MetaData), NewProp_OnGrappleStateChanged_MetaData) }; // 2008364538
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnGrappleLineCreated = { "OnGrappleLineCreated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, OnGrappleLineCreated), Z_Construct_UDelegateFunction_Transfigure_OnGrappleLineCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGrappleLineCreated_MetaData), NewProp_OnGrappleLineCreated_MetaData) }; // 3889437187
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnCombatGrappleExecuted = { "OnCombatGrappleExecuted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, OnCombatGrappleExecuted), Z_Construct_UDelegateFunction_Transfigure_OnCombatGrappleExecuted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatGrappleExecuted_MetaData), NewProp_OnCombatGrappleExecuted_MetaData) }; // 1647627579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, OwnerCharacter), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SpawnedLines_Inner = { "SpawnedLines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGrappleLine_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SpawnedLines = { "SpawnedLines", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SpawnedLines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedLines_MetaData), NewProp_SpawnedLines_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentSwingData = { "CurrentSwingData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, CurrentSwingData), Z_Construct_UScriptStruct_FGrappleLineData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSwingData_MetaData), NewProp_CurrentSwingData_MetaData) }; // 60921744
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingTimerHandle = { "SwingTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingTimerHandle_MetaData), NewProp_SwingTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingAnchorPoint = { "SwingAnchorPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingAnchorPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingAnchorPoint_MetaData), NewProp_SwingAnchorPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingVelocity = { "SwingVelocity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingVelocity_MetaData), NewProp_SwingVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingRopeLength = { "SwingRopeLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGrappleComponent, SwingRopeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingRopeLength_MetaData), NewProp_SwingRopeLength_MetaData) };
void Z_Construct_UClass_UGrappleComponent_Statics::NewProp_bIsSwinging_SetBit(void* Obj)
{
	((UGrappleComponent*)Obj)->bIsSwinging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGrappleComponent_Statics::NewProp_bIsSwinging = { "bIsSwinging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGrappleComponent), &Z_Construct_UClass_UGrappleComponent_Statics::NewProp_bIsSwinging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSwinging_MetaData), NewProp_bIsSwinging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGrappleComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxGrappleRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MomentumConservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxSwingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_MaxSimultaneousLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentTier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CombatGrappleManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_WebLineManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentElement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_ActiveLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_ActiveLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentLineCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnGrappleStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnGrappleLineCreated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OnCombatGrappleExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SpawnedLines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SpawnedLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_CurrentSwingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingAnchorPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_SwingRopeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGrappleComponent_Statics::NewProp_bIsSwinging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrappleComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGrappleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrappleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrappleComponent_Statics::ClassParams = {
	&UGrappleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGrappleComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGrappleComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrappleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrappleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrappleComponent()
{
	if (!Z_Registration_Info_UClass_UGrappleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrappleComponent.OuterSingleton, Z_Construct_UClass_UGrappleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrappleComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrappleComponent);
UGrappleComponent::~UGrappleComponent() {}
// ********** End Class UGrappleComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrappleComponent, UGrappleComponent::StaticClass, TEXT("UGrappleComponent"), &Z_Registration_Info_UClass_UGrappleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrappleComponent), 300554690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h__Script_Transfigure_2154600733(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_GrappleComponent_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
