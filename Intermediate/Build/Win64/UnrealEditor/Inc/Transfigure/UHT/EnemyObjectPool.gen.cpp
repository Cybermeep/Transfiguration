// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyObjectPool.h"
#include "Engine/TimerHandle.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyObjectPool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyPoolEntry();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPoolExhausted ******************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnPoolExhausted_Parms
	{
		int32 RequestedCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestedCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::NewProp_RequestedCount = { "RequestedCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnPoolExhausted_Parms, RequestedCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::NewProp_RequestedCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnPoolExhausted__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::_Script_Transfigure_eventOnPoolExhausted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::_Script_Transfigure_eventOnPoolExhausted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPoolExhausted_DelegateWrapper(const FMulticastScriptDelegate& OnPoolExhausted, int32 RequestedCount)
{
	struct _Script_Transfigure_eventOnPoolExhausted_Parms
	{
		int32 RequestedCount;
	};
	_Script_Transfigure_eventOnPoolExhausted_Parms Parms;
	Parms.RequestedCount=RequestedCount;
	OnPoolExhausted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPoolExhausted ********************************************************

// ********** Begin Delegate FOnEnemyReturned ******************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnEnemyReturned_Parms
	{
		ABaseEnemy* Enemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnEnemyReturned_Parms, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnEnemyReturned__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::_Script_Transfigure_eventOnEnemyReturned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::_Script_Transfigure_eventOnEnemyReturned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEnemyReturned_DelegateWrapper(const FMulticastScriptDelegate& OnEnemyReturned, ABaseEnemy* Enemy)
{
	struct _Script_Transfigure_eventOnEnemyReturned_Parms
	{
		ABaseEnemy* Enemy;
	};
	_Script_Transfigure_eventOnEnemyReturned_Parms Parms;
	Parms.Enemy=Enemy;
	OnEnemyReturned.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnEnemyReturned ********************************************************

// ********** Begin Class AEnemyObjectPool Function CanSpawn ***************************************
struct Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics
{
	struct EnemyObjectPool_eventCanSpawn_Parms
	{
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventCanSpawn_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EnemyObjectPool_eventCanSpawn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyObjectPool_eventCanSpawn_Parms), &Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "CanSpawn", Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::EnemyObjectPool_eventCanSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::EnemyObjectPool_eventCanSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_CanSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_CanSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execCanSpawn)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSpawn(Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function CanSpawn *****************************************

// ********** Begin Class AEnemyObjectPool Function GetActiveCount *********************************
struct Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics
{
	struct EnemyObjectPool_eventGetActiveCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetActiveCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "GetActiveCount", Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::EnemyObjectPool_eventGetActiveCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::EnemyObjectPool_eventGetActiveCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execGetActiveCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveCount();
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function GetActiveCount ***********************************

// ********** Begin Class AEnemyObjectPool Function GetActiveEnemies *******************************
struct Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics
{
	struct EnemyObjectPool_eventGetActiveEnemies_Parms
	{
		TArray<ABaseEnemy*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetActiveEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "GetActiveEnemies", Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::EnemyObjectPool_eventGetActiveEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::EnemyObjectPool_eventGetActiveEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execGetActiveEnemies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ABaseEnemy*>*)Z_Param__Result=P_THIS->GetActiveEnemies();
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function GetActiveEnemies *********************************

// ********** Begin Class AEnemyObjectPool Function GetAvailableCount ******************************
struct Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics
{
	struct EnemyObjectPool_eventGetAvailableCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetAvailableCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "GetAvailableCount", Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::EnemyObjectPool_eventGetAvailableCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::EnemyObjectPool_eventGetAvailableCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execGetAvailableCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAvailableCount();
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function GetAvailableCount ********************************

// ********** Begin Class AEnemyObjectPool Function GetPodEnemies **********************************
struct Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics
{
	struct EnemyObjectPool_eventGetPodEnemies_Parms
	{
		int32 PodID;
		TArray<ABaseEnemy*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetPodEnemies_Parms, PodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetPodEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_PodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "GetPodEnemies", Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::EnemyObjectPool_eventGetPodEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::EnemyObjectPool_eventGetPodEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execGetPodEnemies)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ABaseEnemy*>*)Z_Param__Result=P_THIS->GetPodEnemies(Z_Param_PodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function GetPodEnemies ************************************

// ********** Begin Class AEnemyObjectPool Function GetPoolSize ************************************
struct Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics
{
	struct EnemyObjectPool_eventGetPoolSize_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventGetPoolSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "GetPoolSize", Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::EnemyObjectPool_eventGetPoolSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::EnemyObjectPool_eventGetPoolSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execGetPoolSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPoolSize();
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function GetPoolSize **************************************

// ********** Begin Class AEnemyObjectPool Function InitializePool *********************************
struct Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics
{
	struct EnemyObjectPool_eventInitializePool_Parms
	{
		TSubclassOf<ABaseEnemy> EnemyClass;
		int32 PoolSize;
		int32 MaxConcurrent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "CPP_Default_MaxConcurrent", "-1" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventInitializePool_Parms, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventInitializePool_Parms, PoolSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_MaxConcurrent = { "MaxConcurrent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventInitializePool_Parms, MaxConcurrent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::NewProp_MaxConcurrent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "InitializePool", Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::EnemyObjectPool_eventInitializePool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::EnemyObjectPool_eventInitializePool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_InitializePool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_InitializePool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execInitializePool)
{
	P_GET_OBJECT(UClass,Z_Param_EnemyClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_PoolSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxConcurrent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializePool(Z_Param_EnemyClass,Z_Param_PoolSize,Z_Param_MaxConcurrent);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function InitializePool ***********************************

// ********** Begin Class AEnemyObjectPool Function OnEnemyDestroyed *******************************
struct Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics
{
	struct EnemyObjectPool_eventOnEnemyDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventOnEnemyDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "OnEnemyDestroyed", Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::EnemyObjectPool_eventOnEnemyDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::EnemyObjectPool_eventOnEnemyDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execOnEnemyDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function OnEnemyDestroyed *********************************

// ********** Begin Class AEnemyObjectPool Function PerformPoolMaintenance *************************
struct Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "PerformPoolMaintenance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execPerformPoolMaintenance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformPoolMaintenance();
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function PerformPoolMaintenance ***************************

// ********** Begin Class AEnemyObjectPool Function RequestEnemies *********************************
struct Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics
{
	struct EnemyObjectPool_eventRequestEnemies_Parms
	{
		TArray<FVector> SpawnLocations;
		int32 PodID;
		TArray<ABaseEnemy*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "CPP_Default_PodID", "-1" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemies_Parms, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemies_Parms, PodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_SpawnLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_SpawnLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_PodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "RequestEnemies", Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::EnemyObjectPool_eventRequestEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::EnemyObjectPool_eventRequestEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execRequestEnemies)
{
	P_GET_TARRAY(FVector,Z_Param_SpawnLocations);
	P_GET_PROPERTY(FIntProperty,Z_Param_PodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ABaseEnemy*>*)Z_Param__Result=P_THIS->RequestEnemies(Z_Param_SpawnLocations,Z_Param_PodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function RequestEnemies ***********************************

// ********** Begin Class AEnemyObjectPool Function RequestEnemy ***********************************
struct Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics
{
	struct EnemyObjectPool_eventRequestEnemy_Parms
	{
		FVector SpawnLocation;
		FRotator SpawnRotation;
		int32 PodID;
		ABaseEnemy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "CPP_Default_PodID", "-1" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemy_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemy_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemy_Parms, PodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventRequestEnemy_Parms, ReturnValue), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_SpawnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_PodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "RequestEnemy", Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::EnemyObjectPool_eventRequestEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::EnemyObjectPool_eventRequestEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execRequestEnemy)
{
	P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
	P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
	P_GET_PROPERTY(FIntProperty,Z_Param_PodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABaseEnemy**)Z_Param__Result=P_THIS->RequestEnemy(Z_Param_SpawnLocation,Z_Param_SpawnRotation,Z_Param_PodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function RequestEnemy *************************************

// ********** Begin Class AEnemyObjectPool Function ReturnEnemy ************************************
struct Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics
{
	struct EnemyObjectPool_eventReturnEnemy_Parms
	{
		ABaseEnemy* Enemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventReturnEnemy_Parms, Enemy), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "ReturnEnemy", Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::EnemyObjectPool_eventReturnEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::EnemyObjectPool_eventReturnEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execReturnEnemy)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_Enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnEnemy(Z_Param_Enemy);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function ReturnEnemy **************************************

// ********** Begin Class AEnemyObjectPool Function ReturnPodEnemies *******************************
struct Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics
{
	struct EnemyObjectPool_eventReturnPodEnemies_Parms
	{
		int32 PodID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyObjectPool_eventReturnPodEnemies_Parms, PodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::NewProp_PodID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyObjectPool, nullptr, "ReturnPodEnemies", Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::EnemyObjectPool_eventReturnPodEnemies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::EnemyObjectPool_eventReturnPodEnemies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyObjectPool::execReturnPodEnemies)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnPodEnemies(Z_Param_PodID);
	P_NATIVE_END;
}
// ********** End Class AEnemyObjectPool Function ReturnPodEnemies *********************************

// ********** Begin Class AEnemyObjectPool *********************************************************
void AEnemyObjectPool::StaticRegisterNativesAEnemyObjectPool()
{
	UClass* Class = AEnemyObjectPool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSpawn", &AEnemyObjectPool::execCanSpawn },
		{ "GetActiveCount", &AEnemyObjectPool::execGetActiveCount },
		{ "GetActiveEnemies", &AEnemyObjectPool::execGetActiveEnemies },
		{ "GetAvailableCount", &AEnemyObjectPool::execGetAvailableCount },
		{ "GetPodEnemies", &AEnemyObjectPool::execGetPodEnemies },
		{ "GetPoolSize", &AEnemyObjectPool::execGetPoolSize },
		{ "InitializePool", &AEnemyObjectPool::execInitializePool },
		{ "OnEnemyDestroyed", &AEnemyObjectPool::execOnEnemyDestroyed },
		{ "PerformPoolMaintenance", &AEnemyObjectPool::execPerformPoolMaintenance },
		{ "RequestEnemies", &AEnemyObjectPool::execRequestEnemies },
		{ "RequestEnemy", &AEnemyObjectPool::execRequestEnemy },
		{ "ReturnEnemy", &AEnemyObjectPool::execReturnEnemy },
		{ "ReturnPodEnemies", &AEnemyObjectPool::execReturnPodEnemies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyObjectPool;
UClass* AEnemyObjectPool::GetPrivateStaticClass()
{
	using TClass = AEnemyObjectPool;
	if (!Z_Registration_Info_UClass_AEnemyObjectPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyObjectPool"),
			Z_Registration_Info_UClass_AEnemyObjectPool.InnerSingleton,
			StaticRegisterNativesAEnemyObjectPool,
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
	return Z_Registration_Info_UClass_AEnemyObjectPool.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister()
{
	return AEnemyObjectPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyObjectPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyObjectPool.h" },
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPoolExhausted_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemyReturned_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pool_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcurrent_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCount_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextPodID_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodSpawnTimes_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolMaintenanceTimer_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/EnemyObjectPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPoolExhausted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyReturned;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcurrent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextPodID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PodSpawnTimes_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodSpawnTimes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PodSpawnTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolMaintenanceTimer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyObjectPool_CanSpawn, "CanSpawn" }, // 2737724625
		{ &Z_Construct_UFunction_AEnemyObjectPool_GetActiveCount, "GetActiveCount" }, // 126415421
		{ &Z_Construct_UFunction_AEnemyObjectPool_GetActiveEnemies, "GetActiveEnemies" }, // 1740669713
		{ &Z_Construct_UFunction_AEnemyObjectPool_GetAvailableCount, "GetAvailableCount" }, // 3119230679
		{ &Z_Construct_UFunction_AEnemyObjectPool_GetPodEnemies, "GetPodEnemies" }, // 3448534925
		{ &Z_Construct_UFunction_AEnemyObjectPool_GetPoolSize, "GetPoolSize" }, // 1058037076
		{ &Z_Construct_UFunction_AEnemyObjectPool_InitializePool, "InitializePool" }, // 923857786
		{ &Z_Construct_UFunction_AEnemyObjectPool_OnEnemyDestroyed, "OnEnemyDestroyed" }, // 2613328331
		{ &Z_Construct_UFunction_AEnemyObjectPool_PerformPoolMaintenance, "PerformPoolMaintenance" }, // 367787212
		{ &Z_Construct_UFunction_AEnemyObjectPool_RequestEnemies, "RequestEnemies" }, // 3506371853
		{ &Z_Construct_UFunction_AEnemyObjectPool_RequestEnemy, "RequestEnemy" }, // 4272590934
		{ &Z_Construct_UFunction_AEnemyObjectPool_ReturnEnemy, "ReturnEnemy" }, // 888250957
		{ &Z_Construct_UFunction_AEnemyObjectPool_ReturnPodEnemies, "ReturnPodEnemies" }, // 3550589095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyObjectPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_OnPoolExhausted = { "OnPoolExhausted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, OnPoolExhausted), Z_Construct_UDelegateFunction_Transfigure_OnPoolExhausted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPoolExhausted_MetaData), NewProp_OnPoolExhausted_MetaData) }; // 953158731
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_OnEnemyReturned = { "OnEnemyReturned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, OnEnemyReturned), Z_Construct_UDelegateFunction_Transfigure_OnEnemyReturned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnemyReturned_MetaData), NewProp_OnEnemyReturned_MetaData) }; // 839639330
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_Pool_Inner = { "Pool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEnemyPoolEntry, METADATA_PARAMS(0, nullptr) }; // 3936082218
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, Pool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pool_MetaData), NewProp_Pool_MetaData) }; // 3936082218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_MaxConcurrent = { "MaxConcurrent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, MaxConcurrent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxConcurrent_MetaData), NewProp_MaxConcurrent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_ActiveCount = { "ActiveCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, ActiveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCount_MetaData), NewProp_ActiveCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_NextPodID = { "NextPodID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, NextPodID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextPodID_MetaData), NewProp_NextPodID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes_ValueProp = { "PodSpawnTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes_Key_KeyProp = { "PodSpawnTimes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes = { "PodSpawnTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, PodSpawnTimes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodSpawnTimes_MetaData), NewProp_PodSpawnTimes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PoolMaintenanceTimer = { "PoolMaintenanceTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyObjectPool, PoolMaintenanceTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolMaintenanceTimer_MetaData), NewProp_PoolMaintenanceTimer_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyObjectPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_OnPoolExhausted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_OnEnemyReturned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_Pool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_Pool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_MaxConcurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_ActiveCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_NextPodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PodSpawnTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyObjectPool_Statics::NewProp_PoolMaintenanceTimer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyObjectPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyObjectPool_Statics::ClassParams = {
	&AEnemyObjectPool::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyObjectPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPool_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyObjectPool_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyObjectPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyObjectPool()
{
	if (!Z_Registration_Info_UClass_AEnemyObjectPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyObjectPool.OuterSingleton, Z_Construct_UClass_AEnemyObjectPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyObjectPool.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyObjectPool);
AEnemyObjectPool::~AEnemyObjectPool() {}
// ********** End Class AEnemyObjectPool ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyObjectPool, AEnemyObjectPool::StaticClass, TEXT("AEnemyObjectPool"), &Z_Registration_Info_UClass_AEnemyObjectPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyObjectPool), 3209875455U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h__Script_Transfigure_3696522969(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_EnemyObjectPool_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
