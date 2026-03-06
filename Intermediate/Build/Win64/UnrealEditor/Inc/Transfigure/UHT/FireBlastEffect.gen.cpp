// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/FireBlastEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFireBlastEffect() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UFireBlastEffect();
TRANSFIGURE_API UClass* Z_Construct_UClass_UFireBlastEffect_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFireBlastEffect Function SpawnFireTrail *********************************
struct Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics
{
	struct FireBlastEffect_eventSpawnFireTrail_Parms
	{
		AActor* Instigator;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fire|Movement" },
		{ "ModuleRelativePath", "Transfiguration/Effects/FireBlastEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireBlastEffect_eventSpawnFireTrail_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FireBlastEffect_eventSpawnFireTrail_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFireBlastEffect, nullptr, "SpawnFireTrail", Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::FireBlastEffect_eventSpawnFireTrail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::FireBlastEffect_eventSpawnFireTrail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFireBlastEffect::execSpawnFireTrail)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnFireTrail(Z_Param_Instigator,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class UFireBlastEffect Function SpawnFireTrail ***********************************

// ********** Begin Class UFireBlastEffect *********************************************************
void UFireBlastEffect::StaticRegisterNativesUFireBlastEffect()
{
	UClass* Class = UFireBlastEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnFireTrail", &UFireBlastEffect::execSpawnFireTrail },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFireBlastEffect;
UClass* UFireBlastEffect::GetPrivateStaticClass()
{
	using TClass = UFireBlastEffect;
	if (!Z_Registration_Info_UClass_UFireBlastEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FireBlastEffect"),
			Z_Registration_Info_UClass_UFireBlastEffect.InnerSingleton,
			StaticRegisterNativesUFireBlastEffect,
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
	return Z_Registration_Info_UClass_UFireBlastEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_UFireBlastEffect_NoRegister()
{
	return UFireBlastEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFireBlastEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/Effects/FireBlastEffect.h" },
		{ "ModuleRelativePath", "Transfiguration/Effects/FireBlastEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTrailClass_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/Effects/FireBlastEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTrailDamage_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/Effects/FireBlastEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireTrailDuration_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/Effects/FireBlastEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FireTrailClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireTrailDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireTrailDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFireBlastEffect_SpawnFireTrail, "SpawnFireTrail" }, // 3200015430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFireBlastEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailClass = { "FireTrailClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireBlastEffect, FireTrailClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTrailClass_MetaData), NewProp_FireTrailClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailDamage = { "FireTrailDamage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireBlastEffect, FireTrailDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTrailDamage_MetaData), NewProp_FireTrailDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailDuration = { "FireTrailDuration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFireBlastEffect, FireTrailDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireTrailDuration_MetaData), NewProp_FireTrailDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFireBlastEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFireBlastEffect_Statics::NewProp_FireTrailDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBlastEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFireBlastEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTransfigurationEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBlastEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFireBlastEffect_Statics::ClassParams = {
	&UFireBlastEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFireBlastEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFireBlastEffect_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFireBlastEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UFireBlastEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFireBlastEffect()
{
	if (!Z_Registration_Info_UClass_UFireBlastEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFireBlastEffect.OuterSingleton, Z_Construct_UClass_UFireBlastEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFireBlastEffect.OuterSingleton;
}
UFireBlastEffect::UFireBlastEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFireBlastEffect);
UFireBlastEffect::~UFireBlastEffect() {}
// ********** End Class UFireBlastEffect ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_FireBlastEffect_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFireBlastEffect, UFireBlastEffect::StaticClass, TEXT("UFireBlastEffect"), &Z_Registration_Info_UClass_UFireBlastEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFireBlastEffect), 1340873269U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_FireBlastEffect_h__Script_Transfigure_2564552133(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_FireBlastEffect_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_FireBlastEffect_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
