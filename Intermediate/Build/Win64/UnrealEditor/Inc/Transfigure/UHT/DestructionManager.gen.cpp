// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructionManager.h"
#include "Engine/TimerHandle.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDestructionManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleChunk_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructionManager();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructionManager_NoRegister();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FChunkGenerationTask();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FDestructionRequest();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnDestructionProcessed ***********************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnDestructionProcessed_Parms
	{
		FVector Location;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnDestructionProcessed_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnDestructionProcessed_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnDestructionProcessed__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::_Script_Transfigure_eventOnDestructionProcessed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::_Script_Transfigure_eventOnDestructionProcessed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDestructionProcessed_DelegateWrapper(const FMulticastScriptDelegate& OnDestructionProcessed, FVector Location, float Radius)
{
	struct _Script_Transfigure_eventOnDestructionProcessed_Parms
	{
		FVector Location;
		float Radius;
	};
	_Script_Transfigure_eventOnDestructionProcessed_Parms Parms;
	Parms.Location=Location;
	Parms.Radius=Radius;
	OnDestructionProcessed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnDestructionProcessed *************************************************

// ********** Begin Class ADestructionManager Function GetInstance *********************************
struct Z_Construct_UFunction_ADestructionManager_GetInstance_Statics
{
	struct DestructionManager_eventGetInstance_Parms
	{
		UWorld* World;
		ADestructionManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get singleton instance\n" },
#endif
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get singleton instance" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventGetInstance_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_ADestructionManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructionManager, nullptr, "GetInstance", Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::DestructionManager_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::DestructionManager_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructionManager_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructionManager_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructionManager::execGetInstance)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADestructionManager**)Z_Param__Result=ADestructionManager::GetInstance(Z_Param_World);
	P_NATIVE_END;
}
// ********** End Class ADestructionManager Function GetInstance ***********************************

// ********** Begin Class ADestructionManager Function ProcessDestructionQueue *********************
struct Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Process all queued destruction (called during Temporal Clap)\n" },
#endif
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Process all queued destruction (called during Temporal Clap)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructionManager, nullptr, "ProcessDestructionQueue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructionManager::execProcessDestructionQueue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessDestructionQueue();
	P_NATIVE_END;
}
// ********** End Class ADestructionManager Function ProcessDestructionQueue ***********************

// ********** Begin Class ADestructionManager Function QueueDestruction ****************************
struct Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics
{
	struct DestructionManager_eventQueueDestruction_Parms
	{
		FVector HitLocation;
		float DamageRadius;
		float DamageForce;
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Queue destruction for processing\n" },
#endif
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queue destruction for processing" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventQueueDestruction_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventQueueDestruction_Parms, DamageRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_DamageForce = { "DamageForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventQueueDestruction_Parms, DamageForce), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructionManager_eventQueueDestruction_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_DamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_DamageForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructionManager, nullptr, "QueueDestruction", Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::DestructionManager_eventQueueDestruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::DestructionManager_eventQueueDestruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructionManager_QueueDestruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructionManager_QueueDestruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructionManager::execQueueDestruction)
{
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageForce);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueDestruction(Z_Param_HitLocation,Z_Param_DamageRadius,Z_Param_DamageForce,Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class ADestructionManager Function QueueDestruction ******************************

// ********** Begin Class ADestructionManager ******************************************************
void ADestructionManager::StaticRegisterNativesADestructionManager()
{
	UClass* Class = ADestructionManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInstance", &ADestructionManager::execGetInstance },
		{ "ProcessDestructionQueue", &ADestructionManager::execProcessDestructionQueue },
		{ "QueueDestruction", &ADestructionManager::execQueueDestruction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADestructionManager;
UClass* ADestructionManager::GetPrivateStaticClass()
{
	using TClass = ADestructionManager;
	if (!Z_Registration_Info_UClass_ADestructionManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DestructionManager"),
			Z_Registration_Info_UClass_ADestructionManager.InnerSingleton,
			StaticRegisterNativesADestructionManager,
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
	return Z_Registration_Info_UClass_ADestructionManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADestructionManager_NoRegister()
{
	return ADestructionManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADestructionManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Destruction/DestructionManager.h" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunksPerFrame_MetaData[] = {
		{ "Category", "Destruction|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkGenerationTimeBudget_MetaData[] = {
		{ "Category", "Destruction|Performance" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkPoolSize_MetaData[] = {
		{ "Category", "Destruction|Pool" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkLifetime_MetaData[] = {
		{ "Category", "Destruction|Physics" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinChunkVolume_MetaData[] = {
		{ "Category", "Destruction|Physics" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkVolume_MetaData[] = {
		{ "Category", "Destruction|Physics" },
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDestructionProcessed_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionQueue_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingGenerationTasks_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChunkPool_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChunks_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructionManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunksPerFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChunkGenerationTimeBudget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChunkPoolSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChunkLifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinChunkVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxChunkVolume;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDestructionProcessed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestructionQueue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingGenerationTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingGenerationTasks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChunkPool_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChunkPool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveChunks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveChunks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessingTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADestructionManager_GetInstance, "GetInstance" }, // 2593372380
		{ &Z_Construct_UFunction_ADestructionManager_ProcessDestructionQueue, "ProcessDestructionQueue" }, // 2092171751
		{ &Z_Construct_UFunction_ADestructionManager_QueueDestruction, "QueueDestruction" }, // 3242758876
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructionManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_MaxChunksPerFrame = { "MaxChunksPerFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, MaxChunksPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChunksPerFrame_MetaData), NewProp_MaxChunksPerFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkGenerationTimeBudget = { "ChunkGenerationTimeBudget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ChunkGenerationTimeBudget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkGenerationTimeBudget_MetaData), NewProp_ChunkGenerationTimeBudget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPoolSize = { "ChunkPoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ChunkPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkPoolSize_MetaData), NewProp_ChunkPoolSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkLifetime = { "ChunkLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ChunkLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkLifetime_MetaData), NewProp_ChunkLifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_MinChunkVolume = { "MinChunkVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, MinChunkVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinChunkVolume_MetaData), NewProp_MinChunkVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_MaxChunkVolume = { "MaxChunkVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, MaxChunkVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChunkVolume_MetaData), NewProp_MaxChunkVolume_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_OnDestructionProcessed = { "OnDestructionProcessed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, OnDestructionProcessed), Z_Construct_UDelegateFunction_Transfigure_OnDestructionProcessed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDestructionProcessed_MetaData), NewProp_OnDestructionProcessed_MetaData) }; // 3780427431
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_DestructionQueue_Inner = { "DestructionQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDestructionRequest, METADATA_PARAMS(0, nullptr) }; // 1350498595
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_DestructionQueue = { "DestructionQueue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, DestructionQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionQueue_MetaData), NewProp_DestructionQueue_MetaData) }; // 1350498595
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_PendingGenerationTasks_Inner = { "PendingGenerationTasks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChunkGenerationTask, METADATA_PARAMS(0, nullptr) }; // 1293871127
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_PendingGenerationTasks = { "PendingGenerationTasks", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, PendingGenerationTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingGenerationTasks_MetaData), NewProp_PendingGenerationTasks_MetaData) }; // 1293871127
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPool_Inner = { "ChunkPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADestructibleChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPool = { "ChunkPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ChunkPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChunkPool_MetaData), NewProp_ChunkPool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ActiveChunks_Inner = { "ActiveChunks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADestructibleChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ActiveChunks = { "ActiveChunks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ActiveChunks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveChunks_MetaData), NewProp_ActiveChunks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructionManager_Statics::NewProp_ProcessingTimerHandle = { "ProcessingTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructionManager, ProcessingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessingTimerHandle_MetaData), NewProp_ProcessingTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructionManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_MaxChunksPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkGenerationTimeBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_MinChunkVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_MaxChunkVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_OnDestructionProcessed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_DestructionQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_DestructionQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_PendingGenerationTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_PendingGenerationTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPool_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ChunkPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ActiveChunks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ActiveChunks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructionManager_Statics::NewProp_ProcessingTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructionManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADestructionManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructionManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestructionManager_Statics::ClassParams = {
	&ADestructionManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADestructionManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADestructionManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructionManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestructionManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestructionManager()
{
	if (!Z_Registration_Info_UClass_ADestructionManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestructionManager.OuterSingleton, Z_Construct_UClass_ADestructionManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestructionManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructionManager);
ADestructionManager::~ADestructionManager() {}
// ********** End Class ADestructionManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestructionManager, ADestructionManager::StaticClass, TEXT("ADestructionManager"), &Z_Registration_Info_UClass_ADestructionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestructionManager), 1459484945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h__Script_Transfigure_2090005405(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructionManager_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
