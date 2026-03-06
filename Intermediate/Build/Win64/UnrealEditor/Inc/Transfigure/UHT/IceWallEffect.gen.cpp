// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Effects/IceWallEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIceWallEffect() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UIceWallEffect();
TRANSFIGURE_API UClass* Z_Construct_UClass_UIceWallEffect_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIceWallEffect ***********************************************************
void UIceWallEffect::StaticRegisterNativesUIceWallEffect()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIceWallEffect;
UClass* UIceWallEffect::GetPrivateStaticClass()
{
	using TClass = UIceWallEffect;
	if (!Z_Registration_Info_UClass_UIceWallEffect.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IceWallEffect"),
			Z_Registration_Info_UClass_UIceWallEffect.InnerSingleton,
			StaticRegisterNativesUIceWallEffect,
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
	return Z_Registration_Info_UClass_UIceWallEffect.InnerSingleton;
}
UClass* Z_Construct_UClass_UIceWallEffect_NoRegister()
{
	return UIceWallEffect::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIceWallEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/Effects/IceWallEffect.h" },
		{ "ModuleRelativePath", "Transfiguration/Effects/IceWallEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IceWallClass_MetaData[] = {
		{ "Category", "Ice|Wall" },
		{ "ModuleRelativePath", "Transfiguration/Effects/IceWallEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IceTrailClass_MetaData[] = {
		{ "Category", "Ice|Wall" },
		{ "ModuleRelativePath", "Transfiguration/Effects/IceWallEffect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_IceWallClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IceTrailClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIceWallEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIceWallEffect_Statics::NewProp_IceWallClass = { "IceWallClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIceWallEffect, IceWallClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IceWallClass_MetaData), NewProp_IceWallClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIceWallEffect_Statics::NewProp_IceTrailClass = { "IceTrailClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIceWallEffect, IceTrailClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IceTrailClass_MetaData), NewProp_IceTrailClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIceWallEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWallEffect_Statics::NewProp_IceWallClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIceWallEffect_Statics::NewProp_IceTrailClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIceWallEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIceWallEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTransfigurationEffectBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIceWallEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIceWallEffect_Statics::ClassParams = {
	&UIceWallEffect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIceWallEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIceWallEffect_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIceWallEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UIceWallEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIceWallEffect()
{
	if (!Z_Registration_Info_UClass_UIceWallEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIceWallEffect.OuterSingleton, Z_Construct_UClass_UIceWallEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIceWallEffect.OuterSingleton;
}
UIceWallEffect::UIceWallEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIceWallEffect);
UIceWallEffect::~UIceWallEffect() {}
// ********** End Class UIceWallEffect *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_IceWallEffect_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIceWallEffect, UIceWallEffect::StaticClass, TEXT("UIceWallEffect"), &Z_Registration_Info_UClass_UIceWallEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIceWallEffect), 2467096398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_IceWallEffect_h__Script_Transfigure_1525154499(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_IceWallEffect_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_Effects_IceWallEffect_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
