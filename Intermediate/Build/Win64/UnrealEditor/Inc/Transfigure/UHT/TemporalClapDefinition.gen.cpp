// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemporalClapDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTemporalClapDefinition() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapDefinition();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTemporalClapDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTemporalClapDefinition **************************************************
void UTemporalClapDefinition::StaticRegisterNativesUTemporalClapDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTemporalClapDefinition;
UClass* UTemporalClapDefinition::GetPrivateStaticClass()
{
	using TClass = UTemporalClapDefinition;
	if (!Z_Registration_Info_UClass_UTemporalClapDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TemporalClapDefinition"),
			Z_Registration_Info_UClass_UTemporalClapDefinition.InnerSingleton,
			StaticRegisterNativesUTemporalClapDefinition,
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
	return Z_Registration_Info_UClass_UTemporalClapDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UTemporalClapDefinition_NoRegister()
{
	return UTemporalClapDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTemporalClapDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Temporal/TemporalClapDefinition.h" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapAnimationDuration_MetaData[] = {
		{ "Category", "Temporal|Timing" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlowMotionDuration_MetaData[] = {
		{ "Category", "Temporal|Timing" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "Temporal|Timing" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilationFactor_MetaData[] = {
		{ "Category", "Temporal|Speed" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraTiltAngle_MetaData[] = {
		{ "Category", "Temporal|Camera" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Temporal|Camera" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLerpSpeed_MetaData[] = {
		{ "Category", "Temporal|Camera" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SigilActivationStaggerDelay_MetaData[] = {
		{ "Category", "Temporal|Sigils" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSound_MetaData[] = {
		{ "Category", "Temporal|Audio" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSound_MetaData[] = {
		{ "Category", "Temporal|Audio" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapSound_MetaData[] = {
		{ "Category", "Temporal|Audio" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFX_MetaData[] = {
		{ "Category", "Temporal|VFX" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFX_MetaData[] = {
		{ "Category", "Temporal|VFX" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClapShockwaveFX_MetaData[] = {
		{ "Category", "Temporal|VFX" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeDistortionFX_MetaData[] = {
		{ "Category", "Temporal|VFX" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "Temporal|Mana" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRefundOnNoSigils_MetaData[] = {
		{ "Category", "Temporal|Mana" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrappleLineExtensionMultiplier_MetaData[] = {
		{ "Category", "Temporal|Grapple" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessDestructionDuringClap_MetaData[] = {
		{ "Category", "Temporal|Destruction" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionProcessSpeedMultiplier_MetaData[] = {
		{ "Category", "Temporal|Destruction" },
		{ "ModuleRelativePath", "Temporal/TemporalClapDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClapAnimationDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowMotionDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraTiltAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLerpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SigilActivationStaggerDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClapSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClapShockwaveFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeDistortionFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaRefundOnNoSigils;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrappleLineExtensionMultiplier;
	static void NewProp_bProcessDestructionDuringClap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessDestructionDuringClap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestructionProcessSpeedMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemporalClapDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapAnimationDuration = { "ClapAnimationDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, ClapAnimationDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapAnimationDuration_MetaData), NewProp_ClapAnimationDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_SlowMotionDuration = { "SlowMotionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, SlowMotionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlowMotionDuration_MetaData), NewProp_SlowMotionDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_TimeDilationFactor = { "TimeDilationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, TimeDilationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDilationFactor_MetaData), NewProp_TimeDilationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraTiltAngle = { "CameraTiltAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, CameraTiltAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraTiltAngle_MetaData), NewProp_CameraTiltAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, CameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraFOV_MetaData), NewProp_CameraFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraLerpSpeed = { "CameraLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, CameraLerpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLerpSpeed_MetaData), NewProp_CameraLerpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_SigilActivationStaggerDelay = { "SigilActivationStaggerDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, SigilActivationStaggerDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SigilActivationStaggerDelay_MetaData), NewProp_SigilActivationStaggerDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_StartSound = { "StartSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, StartSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSound_MetaData), NewProp_StartSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_EndSound = { "EndSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, EndSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSound_MetaData), NewProp_EndSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapSound = { "ClapSound", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, ClapSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapSound_MetaData), NewProp_ClapSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_StartFX = { "StartFX", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, StartFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFX_MetaData), NewProp_StartFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_EndFX = { "EndFX", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, EndFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFX_MetaData), NewProp_EndFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapShockwaveFX = { "ClapShockwaveFX", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, ClapShockwaveFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClapShockwaveFX_MetaData), NewProp_ClapShockwaveFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_TimeDistortionFX = { "TimeDistortionFX", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, TimeDistortionFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeDistortionFX_MetaData), NewProp_TimeDistortionFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ManaRefundOnNoSigils = { "ManaRefundOnNoSigils", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, ManaRefundOnNoSigils), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRefundOnNoSigils_MetaData), NewProp_ManaRefundOnNoSigils_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_GrappleLineExtensionMultiplier = { "GrappleLineExtensionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, GrappleLineExtensionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrappleLineExtensionMultiplier_MetaData), NewProp_GrappleLineExtensionMultiplier_MetaData) };
void Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_bProcessDestructionDuringClap_SetBit(void* Obj)
{
	((UTemporalClapDefinition*)Obj)->bProcessDestructionDuringClap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_bProcessDestructionDuringClap = { "bProcessDestructionDuringClap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTemporalClapDefinition), &Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_bProcessDestructionDuringClap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessDestructionDuringClap_MetaData), NewProp_bProcessDestructionDuringClap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_DestructionProcessSpeedMultiplier = { "DestructionProcessSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemporalClapDefinition, DestructionProcessSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionProcessSpeedMultiplier_MetaData), NewProp_DestructionProcessSpeedMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemporalClapDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapAnimationDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_SlowMotionDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_TimeDilationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraTiltAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_CameraLerpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_SigilActivationStaggerDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_StartSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_EndSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_StartFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_EndFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ClapShockwaveFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_TimeDistortionFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_ManaRefundOnNoSigils,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_GrappleLineExtensionMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_bProcessDestructionDuringClap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemporalClapDefinition_Statics::NewProp_DestructionProcessSpeedMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTemporalClapDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemporalClapDefinition_Statics::ClassParams = {
	&UTemporalClapDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTemporalClapDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemporalClapDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemporalClapDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemporalClapDefinition()
{
	if (!Z_Registration_Info_UClass_UTemporalClapDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemporalClapDefinition.OuterSingleton, Z_Construct_UClass_UTemporalClapDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemporalClapDefinition.OuterSingleton;
}
UTemporalClapDefinition::UTemporalClapDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemporalClapDefinition);
UTemporalClapDefinition::~UTemporalClapDefinition() {}
// ********** End Class UTemporalClapDefinition ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapDefinition_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemporalClapDefinition, UTemporalClapDefinition::StaticClass, TEXT("UTemporalClapDefinition"), &Z_Registration_Info_UClass_UTemporalClapDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemporalClapDefinition), 1058129379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapDefinition_h__Script_Transfigure_2864515522(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapDefinition_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Temporal_TemporalClapDefinition_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
