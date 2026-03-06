// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersistentSigilActor.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePersistentSigilActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_APersistentSigilActor();
TRANSFIGURE_API UClass* Z_Construct_UClass_APersistentSigilActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ASigilActor();
TRANSFIGURE_API UClass* Z_Construct_UClass_UBuffEffectComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APersistentSigilActor Function ApplyBuffToOverlappingActors **************
struct Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APersistentSigilActor, nullptr, "ApplyBuffToOverlappingActors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APersistentSigilActor::execApplyBuffToOverlappingActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyBuffToOverlappingActors();
	P_NATIVE_END;
}
// ********** End Class APersistentSigilActor Function ApplyBuffToOverlappingActors ****************

// ********** Begin Class APersistentSigilActor Function ApplyHealingToOverlappingActors ***********
struct Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APersistentSigilActor, nullptr, "ApplyHealingToOverlappingActors", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APersistentSigilActor::execApplyHealingToOverlappingActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHealingToOverlappingActors();
	P_NATIVE_END;
}
// ********** End Class APersistentSigilActor Function ApplyHealingToOverlappingActors *************

// ********** Begin Class APersistentSigilActor Function OnTriggerVolumeEndOverlap *****************
struct Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics
{
	struct PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APersistentSigilActor, nullptr, "OnTriggerVolumeEndOverlap", Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::PersistentSigilActor_eventOnTriggerVolumeEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APersistentSigilActor::execOnTriggerVolumeEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerVolumeEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class APersistentSigilActor Function OnTriggerVolumeEndOverlap *******************

// ********** Begin Class APersistentSigilActor Function OnTriggerVolumeOverlap ********************
struct Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics
{
	struct PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms
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
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms), &Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APersistentSigilActor, nullptr, "OnTriggerVolumeOverlap", Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::PersistentSigilActor_eventOnTriggerVolumeOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APersistentSigilActor::execOnTriggerVolumeOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTriggerVolumeOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APersistentSigilActor Function OnTriggerVolumeOverlap **********************

// ********** Begin Class APersistentSigilActor ****************************************************
void APersistentSigilActor::StaticRegisterNativesAPersistentSigilActor()
{
	UClass* Class = APersistentSigilActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyBuffToOverlappingActors", &APersistentSigilActor::execApplyBuffToOverlappingActors },
		{ "ApplyHealingToOverlappingActors", &APersistentSigilActor::execApplyHealingToOverlappingActors },
		{ "OnTriggerVolumeEndOverlap", &APersistentSigilActor::execOnTriggerVolumeEndOverlap },
		{ "OnTriggerVolumeOverlap", &APersistentSigilActor::execOnTriggerVolumeOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APersistentSigilActor;
UClass* APersistentSigilActor::GetPrivateStaticClass()
{
	using TClass = APersistentSigilActor;
	if (!Z_Registration_Info_UClass_APersistentSigilActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PersistentSigilActor"),
			Z_Registration_Info_UClass_APersistentSigilActor.InnerSingleton,
			StaticRegisterNativesAPersistentSigilActor,
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
	return Z_Registration_Info_UClass_APersistentSigilActor.InnerSingleton;
}
UClass* Z_Construct_UClass_APersistentSigilActor_NoRegister()
{
	return APersistentSigilActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APersistentSigilActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/PersistentSigilActor.h" },
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffComponent_MetaData[] = {
		{ "Category", "PersistentSigilActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedActors_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/PersistentSigilActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuffComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealingTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APersistentSigilActor_ApplyBuffToOverlappingActors, "ApplyBuffToOverlappingActors" }, // 2498148232
		{ &Z_Construct_UFunction_APersistentSigilActor_ApplyHealingToOverlappingActors, "ApplyHealingToOverlappingActors" }, // 3297095473
		{ &Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeEndOverlap, "OnTriggerVolumeEndOverlap" }, // 209258570
		{ &Z_Construct_UFunction_APersistentSigilActor_OnTriggerVolumeOverlap, "OnTriggerVolumeOverlap" }, // 2505817892
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APersistentSigilActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_BuffComponent = { "BuffComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APersistentSigilActor, BuffComponent), Z_Construct_UClass_UBuffEffectComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffComponent_MetaData), NewProp_BuffComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_AffectedActors_Inner = { "AffectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_AffectedActors = { "AffectedActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APersistentSigilActor, AffectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedActors_MetaData), NewProp_AffectedActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_HealingTimerHandle = { "HealingTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APersistentSigilActor, HealingTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingTimerHandle_MetaData), NewProp_HealingTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APersistentSigilActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_BuffComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_AffectedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_AffectedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APersistentSigilActor_Statics::NewProp_HealingTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersistentSigilActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APersistentSigilActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASigilActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APersistentSigilActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APersistentSigilActor_Statics::ClassParams = {
	&APersistentSigilActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APersistentSigilActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APersistentSigilActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APersistentSigilActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APersistentSigilActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APersistentSigilActor()
{
	if (!Z_Registration_Info_UClass_APersistentSigilActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APersistentSigilActor.OuterSingleton, Z_Construct_UClass_APersistentSigilActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APersistentSigilActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APersistentSigilActor);
APersistentSigilActor::~APersistentSigilActor() {}
// ********** End Class APersistentSigilActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APersistentSigilActor, APersistentSigilActor::StaticClass, TEXT("APersistentSigilActor"), &Z_Registration_Info_UClass_APersistentSigilActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APersistentSigilActor), 3393805958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h__Script_Transfigure_1605534768(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_PersistentSigilActor_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
