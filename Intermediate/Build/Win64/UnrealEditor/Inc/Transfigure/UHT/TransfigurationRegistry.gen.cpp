// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationRegistry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationRegistry() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationDefinition_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationRegistry();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationRegistry_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTransfigurationRegistry Function GetSpell *******************************
struct Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics
{
	struct TransfigurationRegistry_eventGetSpell_Parms
	{
		FName SpellID;
		UTransfigurationDefinition* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TransfigurationRegistry" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::NewProp_SpellID = { "SpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationRegistry_eventGetSpell_Parms, SpellID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationRegistry_eventGetSpell_Parms, ReturnValue), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::NewProp_SpellID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationRegistry, nullptr, "GetSpell", Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::TransfigurationRegistry_eventGetSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::TransfigurationRegistry_eventGetSpell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationRegistry_GetSpell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationRegistry_GetSpell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationRegistry::execGetSpell)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpellID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTransfigurationDefinition**)Z_Param__Result=P_THIS->GetSpell(Z_Param_SpellID);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationRegistry Function GetSpell *********************************

// ********** Begin Class UTransfigurationRegistry Function GetSpellsByElement *********************
struct Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics
{
	struct TransfigurationRegistry_eventGetSpellsByElement_Parms
	{
		ETransfigurationElement Element;
		TArray<UTransfigurationDefinition*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TransfigurationRegistry" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationRegistry_eventGetSpellsByElement_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationRegistry_eventGetSpellsByElement_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationRegistry, nullptr, "GetSpellsByElement", Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::TransfigurationRegistry_eventGetSpellsByElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::TransfigurationRegistry_eventGetSpellsByElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationRegistry::execGetSpellsByElement)
{
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTransfigurationDefinition*>*)Z_Param__Result=P_THIS->GetSpellsByElement(ETransfigurationElement(Z_Param_Element));
	P_NATIVE_END;
}
// ********** End Class UTransfigurationRegistry Function GetSpellsByElement ***********************

// ********** Begin Class UTransfigurationRegistry *************************************************
void UTransfigurationRegistry::StaticRegisterNativesUTransfigurationRegistry()
{
	UClass* Class = UTransfigurationRegistry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSpell", &UTransfigurationRegistry::execGetSpell },
		{ "GetSpellsByElement", &UTransfigurationRegistry::execGetSpellsByElement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationRegistry;
UClass* UTransfigurationRegistry::GetPrivateStaticClass()
{
	using TClass = UTransfigurationRegistry;
	if (!Z_Registration_Info_UClass_UTransfigurationRegistry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationRegistry"),
			Z_Registration_Info_UClass_UTransfigurationRegistry.InnerSingleton,
			StaticRegisterNativesUTransfigurationRegistry,
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
	return Z_Registration_Info_UClass_UTransfigurationRegistry.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationRegistry_NoRegister()
{
	return UTransfigurationRegistry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Transfiguration/TransfigurationRegistry.h" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationRegistry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellTable_MetaData[] = {
		{ "Category", "TransfigurationRegistry" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationRegistry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellTable_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpellTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpellTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransfigurationRegistry_GetSpell, "GetSpell" }, // 400817818
		{ &Z_Construct_UFunction_UTransfigurationRegistry_GetSpellsByElement, "GetSpellsByElement" }, // 4048711963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable_ValueProp = { "SpellTable", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable_Key_KeyProp = { "SpellTable_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable = { "SpellTable", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationRegistry, SpellTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellTable_MetaData), NewProp_SpellTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransfigurationRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationRegistry_Statics::NewProp_SpellTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationRegistry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransfigurationRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationRegistry_Statics::ClassParams = {
	&UTransfigurationRegistry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTransfigurationRegistry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationRegistry_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationRegistry()
{
	if (!Z_Registration_Info_UClass_UTransfigurationRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationRegistry.OuterSingleton, Z_Construct_UClass_UTransfigurationRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationRegistry.OuterSingleton;
}
UTransfigurationRegistry::UTransfigurationRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationRegistry);
UTransfigurationRegistry::~UTransfigurationRegistry() {}
// ********** End Class UTransfigurationRegistry ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationRegistry, UTransfigurationRegistry::StaticClass, TEXT("UTransfigurationRegistry"), &Z_Registration_Info_UClass_UTransfigurationRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationRegistry), 3332776682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h__Script_Transfigure_1232776131(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationRegistry_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
