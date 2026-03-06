// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationGameInstance();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationGameInstance_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationRegistry_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTransfigurationGameInstance Function GetSpellRegistry *******************
struct Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics
{
	struct TransfigurationGameInstance_eventGetSpellRegistry_Parms
	{
		UTransfigurationRegistry* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transfiguration" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationGameInstance_eventGetSpellRegistry_Parms, ReturnValue), Z_Construct_UClass_UTransfigurationRegistry_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationGameInstance, nullptr, "GetSpellRegistry", Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::TransfigurationGameInstance_eventGetSpellRegistry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::TransfigurationGameInstance_eventGetSpellRegistry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationGameInstance::execGetSpellRegistry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransfigurationRegistry**)Z_Param__Result=P_THIS->GetSpellRegistry();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationGameInstance Function GetSpellRegistry *********************

// ********** Begin Class UTransfigurationGameInstance *********************************************
void UTransfigurationGameInstance::StaticRegisterNativesUTransfigurationGameInstance()
{
	UClass* Class = UTransfigurationGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpellRegistry", &UTransfigurationGameInstance::execGetSpellRegistry },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationGameInstance;
UClass* UTransfigurationGameInstance::GetPrivateStaticClass()
{
	using TClass = UTransfigurationGameInstance;
	if (!Z_Registration_Info_UClass_UTransfigurationGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationGameInstance"),
			Z_Registration_Info_UClass_UTransfigurationGameInstance.InnerSingleton,
			StaticRegisterNativesUTransfigurationGameInstance,
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
	return Z_Registration_Info_UClass_UTransfigurationGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationGameInstance_NoRegister()
{
	return UTransfigurationGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Transfiguration/TransfigurationGameInstance.h" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellRegistry_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellRegistry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransfigurationGameInstance_GetSpellRegistry, "GetSpellRegistry" }, // 2327655465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationGameInstance_Statics::NewProp_SpellRegistry = { "SpellRegistry", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationGameInstance, SpellRegistry), Z_Construct_UClass_UTransfigurationRegistry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellRegistry_MetaData), NewProp_SpellRegistry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransfigurationGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationGameInstance_Statics::NewProp_SpellRegistry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransfigurationGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationGameInstance_Statics::ClassParams = {
	&UTransfigurationGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTransfigurationGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationGameInstance()
{
	if (!Z_Registration_Info_UClass_UTransfigurationGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationGameInstance.OuterSingleton, Z_Construct_UClass_UTransfigurationGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationGameInstance.OuterSingleton;
}
UTransfigurationGameInstance::UTransfigurationGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationGameInstance);
UTransfigurationGameInstance::~UTransfigurationGameInstance() {}
// ********** End Class UTransfigurationGameInstance ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationGameInstance, UTransfigurationGameInstance::StaticClass, TEXT("UTransfigurationGameInstance"), &Z_Registration_Info_UClass_UTransfigurationGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationGameInstance), 773003485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h__Script_Transfigure_1070087951(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationGameInstance_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
