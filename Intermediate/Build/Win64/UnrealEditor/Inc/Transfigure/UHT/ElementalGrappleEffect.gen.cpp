// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ElementalGrappleEffect.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeElementalGrappleEffect() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AElementalGrappleEffect();
TRANSFIGURE_API UClass* Z_Construct_UClass_AElementalGrappleEffect_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AElementalGrappleEffect Function ApplyDamageTick *************************
struct Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AElementalGrappleEffect, nullptr, "ApplyDamageTick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElementalGrappleEffect::execApplyDamageTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamageTick();
	P_NATIVE_END;
}
// ********** End Class AElementalGrappleEffect Function ApplyDamageTick ***************************

// ********** Begin Class AElementalGrappleEffect Function ApplyEffectToEnemy **********************
struct Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics
{
	struct ElementalGrappleEffect_eventApplyEffectToEnemy_Parms
	{
		AActor* Enemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ElementalGrapple" },
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventApplyEffectToEnemy_Parms, Enemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::NewProp_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AElementalGrappleEffect, nullptr, "ApplyEffectToEnemy", Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::ElementalGrappleEffect_eventApplyEffectToEnemy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::ElementalGrappleEffect_eventApplyEffectToEnemy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElementalGrappleEffect::execApplyEffectToEnemy)
{
	P_GET_OBJECT(AActor,Z_Param_Enemy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToEnemy(Z_Param_Enemy);
	P_NATIVE_END;
}
// ********** End Class AElementalGrappleEffect Function ApplyEffectToEnemy ************************

// ********** Begin Class AElementalGrappleEffect Function InitializeEffect ************************
struct Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics
{
	struct ElementalGrappleEffect_eventInitializeEffect_Parms
	{
		ETransfigurationElement Element;
		FVector StartLocation;
		FVector EndLocation;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ElementalGrapple" },
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventInitializeEffect_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventInitializeEffect_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventInitializeEffect_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventInitializeEffect_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AElementalGrappleEffect, nullptr, "InitializeEffect", Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::ElementalGrappleEffect_eventInitializeEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::ElementalGrappleEffect_eventInitializeEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElementalGrappleEffect::execInitializeEffect)
{
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEffect(ETransfigurationElement(Z_Param_Element),Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class AElementalGrappleEffect Function InitializeEffect **************************

// ********** Begin Class AElementalGrappleEffect Function OnDamageVolumeOverlap *******************
struct Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics
{
	struct ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms
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
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms), &Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AElementalGrappleEffect, nullptr, "OnDamageVolumeOverlap", Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::ElementalGrappleEffect_eventOnDamageVolumeOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElementalGrappleEffect::execOnDamageVolumeOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamageVolumeOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AElementalGrappleEffect Function OnDamageVolumeOverlap *********************

// ********** Begin Class AElementalGrappleEffect **************************************************
void AElementalGrappleEffect::StaticRegisterNativesAElementalGrappleEffect()
{
	UClass* Class = AElementalGrappleEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageTick", &AElementalGrappleEffect::execApplyDamageTick },
		{ "ApplyEffectToEnemy", &AElementalGrappleEffect::execApplyEffectToEnemy },
		{ "InitializeEffect", &AElementalGrappleEffect::execInitializeEffect },
		{ "OnDamageVolumeOverlap", &AElementalGrappleEffect::execOnDamageVolumeOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AElementalGrappleEffect;
UClass* AElementalGrappleEffect::GetPrivateStaticClass()
{
	using TClass = AElementalGrappleEffect;
	if (!Z_Registration_Info_UClass_AElementalGrappleEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ElementalGrappleEffect"),
			Z_Registration_Info_UClass_AElementalGrappleEffect.InnerSingleton,
			StaticRegisterNativesAElementalGrappleEffect,
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
	return Z_Registration_Info_UClass_AElementalGrappleEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_AElementalGrappleEffect_NoRegister()
{
	return AElementalGrappleEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AElementalGrappleEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Grapple/ElementalGrappleEffect.h" },
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectParticle_MetaData[] = {
		{ "Category", "ElementalGrappleEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageVolume_MetaData[] = {
		{ "Category", "ElementalGrappleEffect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentElement_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDuration_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInterval_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Grapple/ElementalGrappleEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageVolume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentElement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentElement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AElementalGrappleEffect_ApplyDamageTick, "ApplyDamageTick" }, // 394716946
		{ &Z_Construct_UFunction_AElementalGrappleEffect_ApplyEffectToEnemy, "ApplyEffectToEnemy" }, // 1945772677
		{ &Z_Construct_UFunction_AElementalGrappleEffect_InitializeEffect, "InitializeEffect" }, // 1891895921
		{ &Z_Construct_UFunction_AElementalGrappleEffect_OnDamageVolumeOverlap, "OnDamageVolumeOverlap" }, // 2983482271
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElementalGrappleEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_EffectParticle = { "EffectParticle", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, EffectParticle), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectParticle_MetaData), NewProp_EffectParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageVolume = { "DamageVolume", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, DamageVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageVolume_MetaData), NewProp_DamageVolume_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_CurrentElement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_CurrentElement = { "CurrentElement", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, CurrentElement), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentElement_MetaData), NewProp_CurrentElement_MetaData) }; // 4121596056
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_EffectDuration = { "EffectDuration", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, EffectDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDuration_MetaData), NewProp_EffectDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageInterval = { "DamageInterval", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, DamageInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInterval_MetaData), NewProp_DamageInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageTimerHandle = { "DamageTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElementalGrappleEffect, DamageTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTimerHandle_MetaData), NewProp_DamageTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElementalGrappleEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_EffectParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_CurrentElement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_CurrentElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_EffectDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElementalGrappleEffect_Statics::NewProp_DamageTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElementalGrappleEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AElementalGrappleEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElementalGrappleEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AElementalGrappleEffect_Statics::ClassParams = {
	&AElementalGrappleEffect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AElementalGrappleEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AElementalGrappleEffect_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AElementalGrappleEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_AElementalGrappleEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AElementalGrappleEffect()
{
	if (!Z_Registration_Info_UClass_AElementalGrappleEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElementalGrappleEffect.OuterSingleton, Z_Construct_UClass_AElementalGrappleEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AElementalGrappleEffect.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AElementalGrappleEffect);
AElementalGrappleEffect::~AElementalGrappleEffect() {}
// ********** End Class AElementalGrappleEffect ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AElementalGrappleEffect, AElementalGrappleEffect::StaticClass, TEXT("AElementalGrappleEffect"), &Z_Registration_Info_UClass_AElementalGrappleEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElementalGrappleEffect), 1500750026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h__Script_Transfigure_164988406(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_ElementalGrappleEffect_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
