// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyPod.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyPod() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyPod();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyPod_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EPodState();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemySpawnPoint();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPodStateChanged ****************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPodStateChanged_Parms
	{
		EPodState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPodStateChanged_Parms, NewState), Z_Construct_UEnum_Transfigure_EPodState, METADATA_PARAMS(0, nullptr) }; // 466258305
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPodStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnPodStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::_Script_Transfigure_eventOnPodStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPodStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPodStateChanged, EPodState NewState)
{
	struct _Script_Transfigure_eventOnPodStateChanged_Parms
	{
		EPodState NewState;
	};
	_Script_Transfigure_eventOnPodStateChanged_Parms Parms;
	Parms.NewState=NewState;
	OnPodStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPodStateChanged ******************************************************

// ********** Begin Delegate FOnPodDefeated ********************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPodDefeated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPodDefeated_DelegateWrapper(const FMulticastScriptDelegate& OnPodDefeated)
{
	OnPodDefeated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnPodDefeated **********************************************************

// ********** Begin Delegate FOnPodReinforcing *****************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPodReinforcing_Parms
	{
		int32 ReinforceCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReinforceCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::NewProp_ReinforceCount = { "ReinforceCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPodReinforcing_Parms, ReinforceCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::NewProp_ReinforceCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPodReinforcing__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::_Script_Transfigure_eventOnPodReinforcing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::_Script_Transfigure_eventOnPodReinforcing_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPodReinforcing_DelegateWrapper(const FMulticastScriptDelegate& OnPodReinforcing, int32 ReinforceCount)
{
	struct _Script_Transfigure_eventOnPodReinforcing_Parms
	{
		int32 ReinforceCount;
	};
	_Script_Transfigure_eventOnPodReinforcing_Parms Parms;
	Parms.ReinforceCount=ReinforceCount;
	OnPodReinforcing.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPodReinforcing *******************************************************

// ********** Begin Class AEnemyPod Function ActivatePod *******************************************
struct Z_Construct_UFunction_AEnemyPod_ActivatePod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_ActivatePod_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "ActivatePod", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_ActivatePod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_ActivatePod_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_ActivatePod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_ActivatePod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execActivatePod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivatePod();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function ActivatePod *********************************************

// ********** Begin Class AEnemyPod Function CheckEscapeConditions *********************************
struct Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "CheckEscapeConditions", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execCheckEscapeConditions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckEscapeConditions();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function CheckEscapeConditions ***********************************

// ********** Begin Class AEnemyPod Function DeactivatePod *****************************************
struct Z_Construct_UFunction_AEnemyPod_DeactivatePod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_DeactivatePod_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "DeactivatePod", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_DeactivatePod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_DeactivatePod_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_DeactivatePod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_DeactivatePod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execDeactivatePod)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivatePod();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function DeactivatePod *******************************************

// ********** Begin Class AEnemyPod Function FindCoverPositions ************************************
struct Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics
{
	struct EnemyPod_eventFindCoverPositions_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod|Destruction" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventFindCoverPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "FindCoverPositions", Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::EnemyPod_eventFindCoverPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::EnemyPod_eventFindCoverPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_FindCoverPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_FindCoverPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execFindCoverPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->FindCoverPositions();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function FindCoverPositions **************************************

// ********** Begin Class AEnemyPod Function GetNearbyPods *****************************************
struct Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics
{
	struct EnemyPod_eventGetNearbyPods_Parms
	{
		TArray<AEnemyPod*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyPod_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventGetNearbyPods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "GetNearbyPods", Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::EnemyPod_eventGetNearbyPods_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::EnemyPod_eventGetNearbyPods_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_GetNearbyPods()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_GetNearbyPods_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execGetNearbyPods)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AEnemyPod*>*)Z_Param__Result=P_THIS->GetNearbyPods();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function GetNearbyPods *******************************************

// ********** Begin Class AEnemyPod Function GetPlayerInRange **************************************
struct Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics
{
	struct EnemyPod_eventGetPlayerInRange_Parms
	{
		ATMCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventGetPlayerInRange_Parms, ReturnValue), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "GetPlayerInRange", Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::EnemyPod_eventGetPlayerInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::EnemyPod_eventGetPlayerInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_GetPlayerInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_GetPlayerInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execGetPlayerInRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ATMCharacter**)Z_Param__Result=P_THIS->GetPlayerInRange();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function GetPlayerInRange ****************************************

// ********** Begin Class AEnemyPod Function GetThreatLevel ****************************************
struct Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics
{
	struct EnemyPod_eventGetThreatLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventGetThreatLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "GetThreatLevel", Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::EnemyPod_eventGetThreatLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::EnemyPod_eventGetThreatLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_GetThreatLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_GetThreatLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execGetThreatLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetThreatLevel();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function GetThreatLevel ******************************************

// ********** Begin Class AEnemyPod Function IncreaseEnemyAlertness ********************************
struct Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics
{
	struct EnemyPod_eventIncreaseEnemyAlertness_Parms
	{
		ABaseEnemy* Enemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventIncreaseEnemyAlertness_Parms, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "IncreaseEnemyAlertness", Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::EnemyPod_eventIncreaseEnemyAlertness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::EnemyPod_eventIncreaseEnemyAlertness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execIncreaseEnemyAlertness)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_Enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseEnemyAlertness(Z_Param_Enemy);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function IncreaseEnemyAlertness **********************************

// ********** Begin Class AEnemyPod Function InitializePod *****************************************
struct Z_Construct_UFunction_AEnemyPod_InitializePod_Statics
{
	struct EnemyPod_eventInitializePod_Parms
	{
		AEnemyObjectPool* InEnemyPool;
		int32 InPodID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Public methods\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Public methods" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InEnemyPool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPodID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::NewProp_InEnemyPool = { "InEnemyPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventInitializePod_Parms, InEnemyPool), Z_Construct_UClass_AEnemyObjectPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::NewProp_InPodID = { "InPodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventInitializePod_Parms, InPodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::NewProp_InEnemyPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::NewProp_InPodID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "InitializePod", Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::EnemyPod_eventInitializePod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::EnemyPod_eventInitializePod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_InitializePod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_InitializePod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execInitializePod)
{
	P_GET_OBJECT(AEnemyObjectPool,Z_Param_InEnemyPool);
	P_GET_PROPERTY(FIntProperty,Z_Param_InPodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePod(Z_Param_InEnemyPool,Z_Param_InPodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function InitializePod *******************************************

// ********** Begin Class AEnemyPod Function IsClear ***********************************************
struct Z_Construct_UFunction_AEnemyPod_IsClear_Statics
{
	struct EnemyPod_eventIsClear_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AEnemyPod_IsClear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnemyPod_eventIsClear_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyPod_IsClear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyPod_eventIsClear_Parms), &Z_Construct_UFunction_AEnemyPod_IsClear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_IsClear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IsClear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsClear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_IsClear_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "IsClear", Z_Construct_UFunction_AEnemyPod_IsClear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsClear_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_IsClear_Statics::EnemyPod_eventIsClear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_IsClear_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_IsClear_Statics::EnemyPod_eventIsClear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_IsClear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_IsClear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execIsClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsClear();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function IsClear *************************************************

// ********** Begin Class AEnemyPod Function IsPlayerInEscapeRange *********************************
struct Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics
{
	struct EnemyPod_eventIsPlayerInEscapeRange_Parms
	{
		AActor* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventIsPlayerInEscapeRange_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnemyPod_eventIsPlayerInEscapeRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyPod_eventIsPlayerInEscapeRange_Parms), &Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "IsPlayerInEscapeRange", Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::EnemyPod_eventIsPlayerInEscapeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::EnemyPod_eventIsPlayerInEscapeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execIsPlayerInEscapeRange)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerInEscapeRange(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function IsPlayerInEscapeRange ***********************************

// ********** Begin Class AEnemyPod Function IsSpawnPointSafe **************************************
struct Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics
{
	struct EnemyPod_eventIsSpawnPointSafe_Parms
	{
		int32 SpawnPointIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnPointIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_SpawnPointIndex = { "SpawnPointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventIsSpawnPointSafe_Parms, SpawnPointIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnemyPod_eventIsSpawnPointSafe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyPod_eventIsSpawnPointSafe_Parms), &Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_SpawnPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "IsSpawnPointSafe", Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::EnemyPod_eventIsSpawnPointSafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::EnemyPod_eventIsSpawnPointSafe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execIsSpawnPointSafe)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpawnPointIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSpawnPointSafe(Z_Param_SpawnPointIndex);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function IsSpawnPointSafe ****************************************

// ********** Begin Class AEnemyPod Function NotifyNearbyPods **************************************
struct Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "NotifyNearbyPods", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execNotifyNearbyPods)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NotifyNearbyPods();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function NotifyNearbyPods ****************************************

// ********** Begin Class AEnemyPod Function OnActivationEndOverlap ********************************
struct Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics
{
	struct EnemyPod_eventOnActivationEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnActivationEndOverlap", Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::EnemyPod_eventOnActivationEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::EnemyPod_eventOnActivationEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnActivationEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActivationEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnActivationEndOverlap **********************************

// ********** Begin Class AEnemyPod Function OnActivationOverlap ***********************************
struct Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics
{
	struct EnemyPod_eventOnActivationOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((EnemyPod_eventOnActivationOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyPod_eventOnActivationOverlap_Parms), &Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnActivationOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnActivationOverlap", Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::EnemyPod_eventOnActivationOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::EnemyPod_eventOnActivationOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnActivationOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnActivationOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnActivationOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActivationOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnActivationOverlap *************************************

// ********** Begin Class AEnemyPod Function OnEnemyDefeated ***************************************
struct Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics
{
	struct EnemyPod_eventOnEnemyDefeated_Parms
	{
		ABaseEnemy* DefeatedEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefeatedEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::NewProp_DefeatedEnemy = { "DefeatedEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnEnemyDefeated_Parms, DefeatedEnemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::NewProp_DefeatedEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnEnemyDefeated", Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::EnemyPod_eventOnEnemyDefeated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::EnemyPod_eventOnEnemyDefeated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnEnemyDefeated)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_DefeatedEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDefeated(Z_Param_DefeatedEnemy);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnEnemyDefeated *****************************************

// ********** Begin Class AEnemyPod Function OnEnemySpawned ****************************************
struct Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics
{
	struct EnemyPod_eventOnEnemySpawned_Parms
	{
		ABaseEnemy* NewEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::NewProp_NewEnemy = { "NewEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnEnemySpawned_Parms, NewEnemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::NewProp_NewEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnEnemySpawned", Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::EnemyPod_eventOnEnemySpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::EnemyPod_eventOnEnemySpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnEnemySpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnEnemySpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnEnemySpawned)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_NewEnemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemySpawned(Z_Param_NewEnemy);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnEnemySpawned ******************************************

// ********** Begin Class AEnemyPod Function OnEnvironmentDestroyed ********************************
struct Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics
{
	struct EnemyPod_eventOnEnvironmentDestroyed_Parms
	{
		FVector DestructionLocation;
		float DestructionRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod|Destruction" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::NewProp_DestructionLocation = { "DestructionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnEnvironmentDestroyed_Parms, DestructionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::NewProp_DestructionRadius = { "DestructionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnEnvironmentDestroyed_Parms, DestructionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::NewProp_DestructionLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::NewProp_DestructionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnEnvironmentDestroyed", Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::EnemyPod_eventOnEnvironmentDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::EnemyPod_eventOnEnvironmentDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnEnvironmentDestroyed)
{
	P_GET_STRUCT(FVector,Z_Param_DestructionLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DestructionRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnvironmentDestroyed(Z_Param_DestructionLocation,Z_Param_DestructionRadius);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnEnvironmentDestroyed **********************************

// ********** Begin Class AEnemyPod Function OnNeighborPodEngaged **********************************
struct Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics
{
	struct EnemyPod_eventOnNeighborPodEngaged_Parms
	{
		int32 NeighborPodID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NeighborPodID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::NewProp_NeighborPodID = { "NeighborPodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventOnNeighborPodEngaged_Parms, NeighborPodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::NewProp_NeighborPodID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "OnNeighborPodEngaged", Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::EnemyPod_eventOnNeighborPodEngaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::EnemyPod_eventOnNeighborPodEngaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execOnNeighborPodEngaged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NeighborPodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNeighborPodEngaged(Z_Param_NeighborPodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function OnNeighborPodEngaged ************************************

// ********** Begin Class AEnemyPod Function ReinforcementTimeout **********************************
struct Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "ReinforcementTimeout", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execReinforcementTimeout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReinforcementTimeout();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function ReinforcementTimeout ************************************

// ********** Begin Class AEnemyPod Function SendEnemyToLocation ***********************************
struct Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics
{
	struct EnemyPod_eventSendEnemyToLocation_Parms
	{
		ABaseEnemy* Enemy;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventSendEnemyToLocation_Parms, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventSendEnemyToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "SendEnemyToLocation", Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::EnemyPod_eventSendEnemyToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::EnemyPod_eventSendEnemyToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execSendEnemyToLocation)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_Enemy);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendEnemyToLocation(Z_Param_Enemy,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function SendEnemyToLocation *************************************

// ********** Begin Class AEnemyPod Function SetEnemyPatrolBehavior ********************************
struct Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics
{
	struct EnemyPod_eventSetEnemyPatrolBehavior_Parms
	{
		ABaseEnemy* Enemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyPod_eventSetEnemyPatrolBehavior_Parms, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "SetEnemyPatrolBehavior", Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::EnemyPod_eventSetEnemyPatrolBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::EnemyPod_eventSetEnemyPatrolBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execSetEnemyPatrolBehavior)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_Enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnemyPatrolBehavior(Z_Param_Enemy);
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function SetEnemyPatrolBehavior **********************************

// ********** Begin Class AEnemyPod Function SpawnPodEnemies ***************************************
struct Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "SpawnPodEnemies", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execSpawnPodEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPodEnemies();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function SpawnPodEnemies *****************************************

// ********** Begin Class AEnemyPod Function TriggerReinforcements *********************************
struct Z_Construct_UFunction_AEnemyPod_TriggerReinforcements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pod" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_TriggerReinforcements_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "TriggerReinforcements", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_TriggerReinforcements_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_TriggerReinforcements_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_TriggerReinforcements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_TriggerReinforcements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execTriggerReinforcements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerReinforcements();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function TriggerReinforcements ***********************************

// ********** Begin Class AEnemyPod Function UpdateEnemyCoverPositions *****************************
struct Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyPod, nullptr, "UpdateEnemyCoverPositions", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyPod::execUpdateEnemyCoverPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateEnemyCoverPositions();
	P_NATIVE_END;
}
// ********** End Class AEnemyPod Function UpdateEnemyCoverPositions *******************************

// ********** Begin Class AEnemyPod ****************************************************************
void AEnemyPod::StaticRegisterNativesAEnemyPod()
{
	UClass* Class = AEnemyPod::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivatePod", &AEnemyPod::execActivatePod },
		{ "CheckEscapeConditions", &AEnemyPod::execCheckEscapeConditions },
		{ "DeactivatePod", &AEnemyPod::execDeactivatePod },
		{ "FindCoverPositions", &AEnemyPod::execFindCoverPositions },
		{ "GetNearbyPods", &AEnemyPod::execGetNearbyPods },
		{ "GetPlayerInRange", &AEnemyPod::execGetPlayerInRange },
		{ "GetThreatLevel", &AEnemyPod::execGetThreatLevel },
		{ "IncreaseEnemyAlertness", &AEnemyPod::execIncreaseEnemyAlertness },
		{ "InitializePod", &AEnemyPod::execInitializePod },
		{ "IsClear", &AEnemyPod::execIsClear },
		{ "IsPlayerInEscapeRange", &AEnemyPod::execIsPlayerInEscapeRange },
		{ "IsSpawnPointSafe", &AEnemyPod::execIsSpawnPointSafe },
		{ "NotifyNearbyPods", &AEnemyPod::execNotifyNearbyPods },
		{ "OnActivationEndOverlap", &AEnemyPod::execOnActivationEndOverlap },
		{ "OnActivationOverlap", &AEnemyPod::execOnActivationOverlap },
		{ "OnEnemyDefeated", &AEnemyPod::execOnEnemyDefeated },
		{ "OnEnemySpawned", &AEnemyPod::execOnEnemySpawned },
		{ "OnEnvironmentDestroyed", &AEnemyPod::execOnEnvironmentDestroyed },
		{ "OnNeighborPodEngaged", &AEnemyPod::execOnNeighborPodEngaged },
		{ "ReinforcementTimeout", &AEnemyPod::execReinforcementTimeout },
		{ "SendEnemyToLocation", &AEnemyPod::execSendEnemyToLocation },
		{ "SetEnemyPatrolBehavior", &AEnemyPod::execSetEnemyPatrolBehavior },
		{ "SpawnPodEnemies", &AEnemyPod::execSpawnPodEnemies },
		{ "TriggerReinforcements", &AEnemyPod::execTriggerReinforcements },
		{ "UpdateEnemyCoverPositions", &AEnemyPod::execUpdateEnemyCoverPositions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyPod;
UClass* AEnemyPod::GetPrivateStaticClass()
{
	using TClass = AEnemyPod;
	if (!Z_Registration_Info_UClass_AEnemyPod.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyPod"),
			Z_Registration_Info_UClass_AEnemyPod.InnerSingleton,
			StaticRegisterNativesAEnemyPod,
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
	return Z_Registration_Info_UClass_AEnemyPod.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyPod_NoRegister()
{
	return AEnemyPod::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyPod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyPod.h" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Pod|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseEnemyCount_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemyCount_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRadius_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReinforcementDelay_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReinforcementWaveSize_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscapeDetectionRadius_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReinforcesIfPlayerEscapes_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinksToNearbyPods_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodLinkRadius_MetaData[] = {
		{ "Category", "Pod|Configuration" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesCoverFromDestruction_MetaData[] = {
		{ "Category", "Pod|Destruction" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverSearchRadius_MetaData[] = {
		{ "Category", "Pod|Destruction" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationTrigger_MetaData[] = {
		{ "Category", "EnemyPod" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodVolume_MetaData[] = {
		{ "Category", "EnemyPod" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Pod|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemyCount_MetaData[] = {
		{ "Category", "Pod|State" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefeatedCount_MetaData[] = {
		{ "Category", "Pod|State" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastEngagement_MetaData[] = {
		{ "Category", "Pod|State" },
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPodStateChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPodDefeated_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPodReinforcing_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodID_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPool_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEnemies_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReinforcementTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EscapeCheckTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyPod.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseEnemyCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnemyCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReinforcementDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReinforcementWaveSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EscapeDetectionRadius;
	static void NewProp_bReinforcesIfPlayerEscapes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinforcesIfPlayerEscapes;
	static void NewProp_bLinksToNearbyPods_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinksToNearbyPods;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PodLinkRadius;
	static void NewProp_bUsesCoverFromDestruction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesCoverFromDestruction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoverSearchRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PodVolume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEnemyCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefeatedCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastEngagement;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPodStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPodDefeated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPodReinforcing;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEnemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEnemies;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReinforcementTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EscapeCheckTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyPod_ActivatePod, "ActivatePod" }, // 2982699092
		{ &Z_Construct_UFunction_AEnemyPod_CheckEscapeConditions, "CheckEscapeConditions" }, // 4138194225
		{ &Z_Construct_UFunction_AEnemyPod_DeactivatePod, "DeactivatePod" }, // 2293422860
		{ &Z_Construct_UFunction_AEnemyPod_FindCoverPositions, "FindCoverPositions" }, // 959453310
		{ &Z_Construct_UFunction_AEnemyPod_GetNearbyPods, "GetNearbyPods" }, // 1955678989
		{ &Z_Construct_UFunction_AEnemyPod_GetPlayerInRange, "GetPlayerInRange" }, // 1689987084
		{ &Z_Construct_UFunction_AEnemyPod_GetThreatLevel, "GetThreatLevel" }, // 3880820074
		{ &Z_Construct_UFunction_AEnemyPod_IncreaseEnemyAlertness, "IncreaseEnemyAlertness" }, // 2528799694
		{ &Z_Construct_UFunction_AEnemyPod_InitializePod, "InitializePod" }, // 1118498503
		{ &Z_Construct_UFunction_AEnemyPod_IsClear, "IsClear" }, // 2830097321
		{ &Z_Construct_UFunction_AEnemyPod_IsPlayerInEscapeRange, "IsPlayerInEscapeRange" }, // 1258391920
		{ &Z_Construct_UFunction_AEnemyPod_IsSpawnPointSafe, "IsSpawnPointSafe" }, // 1920279362
		{ &Z_Construct_UFunction_AEnemyPod_NotifyNearbyPods, "NotifyNearbyPods" }, // 1995993931
		{ &Z_Construct_UFunction_AEnemyPod_OnActivationEndOverlap, "OnActivationEndOverlap" }, // 851307763
		{ &Z_Construct_UFunction_AEnemyPod_OnActivationOverlap, "OnActivationOverlap" }, // 103507723
		{ &Z_Construct_UFunction_AEnemyPod_OnEnemyDefeated, "OnEnemyDefeated" }, // 2370250755
		{ &Z_Construct_UFunction_AEnemyPod_OnEnemySpawned, "OnEnemySpawned" }, // 2418578156
		{ &Z_Construct_UFunction_AEnemyPod_OnEnvironmentDestroyed, "OnEnvironmentDestroyed" }, // 2558722233
		{ &Z_Construct_UFunction_AEnemyPod_OnNeighborPodEngaged, "OnNeighborPodEngaged" }, // 1239700267
		{ &Z_Construct_UFunction_AEnemyPod_ReinforcementTimeout, "ReinforcementTimeout" }, // 2883082476
		{ &Z_Construct_UFunction_AEnemyPod_SendEnemyToLocation, "SendEnemyToLocation" }, // 2360778065
		{ &Z_Construct_UFunction_AEnemyPod_SetEnemyPatrolBehavior, "SetEnemyPatrolBehavior" }, // 2015970665
		{ &Z_Construct_UFunction_AEnemyPod_SpawnPodEnemies, "SpawnPodEnemies" }, // 1862457735
		{ &Z_Construct_UFunction_AEnemyPod_TriggerReinforcements, "TriggerReinforcements" }, // 1078304598
		{ &Z_Construct_UFunction_AEnemyPod_UpdateEnemyCoverPositions, "UpdateEnemyCoverPositions" }, // 149357554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPod>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnemySpawnPoint, METADATA_PARAMS(0, nullptr) }; // 2550518118
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoints_MetaData), NewProp_SpawnPoints_MetaData) }; // 2550518118
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_BaseEnemyCount = { "BaseEnemyCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, BaseEnemyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseEnemyCount_MetaData), NewProp_BaseEnemyCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_MaxEnemyCount = { "MaxEnemyCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, MaxEnemyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnemyCount_MetaData), NewProp_MaxEnemyCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActivationRadius = { "ActivationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ActivationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationRadius_MetaData), NewProp_ActivationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementDelay = { "ReinforcementDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ReinforcementDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReinforcementDelay_MetaData), NewProp_ReinforcementDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementWaveSize = { "ReinforcementWaveSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ReinforcementWaveSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReinforcementWaveSize_MetaData), NewProp_ReinforcementWaveSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_EscapeDetectionRadius = { "EscapeDetectionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, EscapeDetectionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscapeDetectionRadius_MetaData), NewProp_EscapeDetectionRadius_MetaData) };
void Z_Construct_UClass_AEnemyPod_Statics::NewProp_bReinforcesIfPlayerEscapes_SetBit(void* Obj)
{
	((AEnemyPod*)Obj)->bReinforcesIfPlayerEscapes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_bReinforcesIfPlayerEscapes = { "bReinforcesIfPlayerEscapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyPod), &Z_Construct_UClass_AEnemyPod_Statics::NewProp_bReinforcesIfPlayerEscapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReinforcesIfPlayerEscapes_MetaData), NewProp_bReinforcesIfPlayerEscapes_MetaData) };
void Z_Construct_UClass_AEnemyPod_Statics::NewProp_bLinksToNearbyPods_SetBit(void* Obj)
{
	((AEnemyPod*)Obj)->bLinksToNearbyPods = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_bLinksToNearbyPods = { "bLinksToNearbyPods", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyPod), &Z_Construct_UClass_AEnemyPod_Statics::NewProp_bLinksToNearbyPods_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinksToNearbyPods_MetaData), NewProp_bLinksToNearbyPods_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodLinkRadius = { "PodLinkRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, PodLinkRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodLinkRadius_MetaData), NewProp_PodLinkRadius_MetaData) };
void Z_Construct_UClass_AEnemyPod_Statics::NewProp_bUsesCoverFromDestruction_SetBit(void* Obj)
{
	((AEnemyPod*)Obj)->bUsesCoverFromDestruction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_bUsesCoverFromDestruction = { "bUsesCoverFromDestruction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyPod), &Z_Construct_UClass_AEnemyPod_Statics::NewProp_bUsesCoverFromDestruction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesCoverFromDestruction_MetaData), NewProp_bUsesCoverFromDestruction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_CoverSearchRadius = { "CoverSearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, CoverSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverSearchRadius_MetaData), NewProp_CoverSearchRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActivationTrigger = { "ActivationTrigger", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ActivationTrigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationTrigger_MetaData), NewProp_ActivationTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodVolume = { "PodVolume", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, PodVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodVolume_MetaData), NewProp_PodVolume_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, CurrentState), Z_Construct_UEnum_Transfigure_EPodState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 466258305
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentEnemyCount = { "CurrentEnemyCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, CurrentEnemyCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEnemyCount_MetaData), NewProp_CurrentEnemyCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_DefeatedCount = { "DefeatedCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, DefeatedCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefeatedCount_MetaData), NewProp_DefeatedCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_TimeSinceLastEngagement = { "TimeSinceLastEngagement", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, TimeSinceLastEngagement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastEngagement_MetaData), NewProp_TimeSinceLastEngagement_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodStateChanged = { "OnPodStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, OnPodStateChanged), Z_Construct_UDelegateFunction_Transfigure_OnPodStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPodStateChanged_MetaData), NewProp_OnPodStateChanged_MetaData) }; // 698106485
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodDefeated = { "OnPodDefeated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, OnPodDefeated), Z_Construct_UDelegateFunction_Transfigure_OnPodDefeated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPodDefeated_MetaData), NewProp_OnPodDefeated_MetaData) }; // 2534558942
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodReinforcing = { "OnPodReinforcing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, OnPodReinforcing), Z_Construct_UDelegateFunction_Transfigure_OnPodReinforcing__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPodReinforcing_MetaData), NewProp_OnPodReinforcing_MetaData) }; // 4254919654
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, PodID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodID_MetaData), NewProp_PodID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_EnemyPool = { "EnemyPool", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, EnemyPool), Z_Construct_UClass_AEnemyObjectPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPool_MetaData), NewProp_EnemyPool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActiveEnemies_Inner = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActiveEnemies = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ActiveEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEnemies_MetaData), NewProp_ActiveEnemies_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementTimerHandle = { "ReinforcementTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, ReinforcementTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReinforcementTimerHandle_MetaData), NewProp_ReinforcementTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyPod_Statics::NewProp_EscapeCheckTimerHandle = { "EscapeCheckTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPod, EscapeCheckTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EscapeCheckTimerHandle_MetaData), NewProp_EscapeCheckTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_SpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_SpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_BaseEnemyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_MaxEnemyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActivationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementWaveSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_EscapeDetectionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_bReinforcesIfPlayerEscapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_bLinksToNearbyPods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodLinkRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_bUsesCoverFromDestruction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_CoverSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActivationTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_CurrentEnemyCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_DefeatedCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_TimeSinceLastEngagement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodDefeated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_OnPodReinforcing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_PodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_EnemyPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActiveEnemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ActiveEnemies,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_ReinforcementTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPod_Statics::NewProp_EscapeCheckTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPod_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyPod_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPod_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPod_Statics::ClassParams = {
	&AEnemyPod::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyPod_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPod_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPod_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPod_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyPod()
{
	if (!Z_Registration_Info_UClass_AEnemyPod.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPod.OuterSingleton, Z_Construct_UClass_AEnemyPod_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyPod.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPod);
AEnemyPod::~AEnemyPod() {}
// ********** End Class AEnemyPod ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPod, AEnemyPod::StaticClass, TEXT("AEnemyPod"), &Z_Registration_Info_UClass_AEnemyPod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPod), 3626711298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h__Script_Transfigure_2526106264(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyPod_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
