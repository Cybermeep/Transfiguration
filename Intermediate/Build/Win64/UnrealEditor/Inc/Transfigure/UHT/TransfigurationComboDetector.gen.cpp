// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationComboDetector.h"
#include "TransfigurationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationComboDetector() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationComboDetector();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationComboDetector_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FComboChainRecipe();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FSigilComboRecipe();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnComboDetected ******************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnComboDetected_Parms
	{
		FName ComboSpellID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComboSpellID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::NewProp_ComboSpellID = { "ComboSpellID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnComboDetected_Parms, ComboSpellID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::NewProp_ComboSpellID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnComboDetected__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::_Script_Transfigure_eventOnComboDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::_Script_Transfigure_eventOnComboDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnComboDetected_DelegateWrapper(const FMulticastScriptDelegate& OnComboDetected, FName ComboSpellID)
{
	struct _Script_Transfigure_eventOnComboDetected_Parms
	{
		FName ComboSpellID;
	};
	_Script_Transfigure_eventOnComboDetected_Parms Parms;
	Parms.ComboSpellID=ComboSpellID;
	OnComboDetected.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnComboDetected ********************************************************

// ********** Begin Delegate FOnChainProgress ******************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnChainProgress_Parms
	{
		int32 ChainLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChainLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnChainProgress_Parms, ChainLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::NewProp_ChainLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnChainProgress__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::_Script_Transfigure_eventOnChainProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::_Script_Transfigure_eventOnChainProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnChainProgress_DelegateWrapper(const FMulticastScriptDelegate& OnChainProgress, int32 ChainLength)
{
	struct _Script_Transfigure_eventOnChainProgress_Parms
	{
		int32 ChainLength;
	};
	_Script_Transfigure_eventOnChainProgress_Parms Parms;
	Parms.ChainLength=ChainLength;
	OnChainProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnChainProgress ********************************************************

// ********** Begin Class UTransfigurationComboDetector Function AddToComboChain *******************
struct Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics
{
	struct TransfigurationComboDetector_eventAddToComboChain_Parms
	{
		ETransfigurationElement Element;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo|Chains" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationComboDetector_eventAddToComboChain_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationComboDetector, nullptr, "AddToComboChain", Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::TransfigurationComboDetector_eventAddToComboChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::TransfigurationComboDetector_eventAddToComboChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationComboDetector::execAddToComboChain)
{
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToComboChain(ETransfigurationElement(Z_Param_Element));
	P_NATIVE_END;
}
// ********** End Class UTransfigurationComboDetector Function AddToComboChain *********************

// ********** Begin Class UTransfigurationComboDetector Function ResetComboChain *******************
struct Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo|Chains" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationComboDetector, nullptr, "ResetComboChain", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationComboDetector::execResetComboChain)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetComboChain();
	P_NATIVE_END;
}
// ********** End Class UTransfigurationComboDetector Function ResetComboChain *********************

// ********** Begin Class UTransfigurationComboDetector Function StartComboChain *******************
struct Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics
{
	struct TransfigurationComboDetector_eventStartComboChain_Parms
	{
		FName ChainName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo|Chains" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationComboDetector_eventStartComboChain_Parms, ChainName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::NewProp_ChainName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationComboDetector, nullptr, "StartComboChain", Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::TransfigurationComboDetector_eventStartComboChain_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::TransfigurationComboDetector_eventStartComboChain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationComboDetector::execStartComboChain)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartComboChain(Z_Param_ChainName);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationComboDetector Function StartComboChain *********************

// ********** Begin Class UTransfigurationComboDetector ********************************************
void UTransfigurationComboDetector::StaticRegisterNativesUTransfigurationComboDetector()
{
	UClass* Class = UTransfigurationComboDetector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToComboChain", &UTransfigurationComboDetector::execAddToComboChain },
		{ "ResetComboChain", &UTransfigurationComboDetector::execResetComboChain },
		{ "StartComboChain", &UTransfigurationComboDetector::execStartComboChain },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationComboDetector;
UClass* UTransfigurationComboDetector::GetPrivateStaticClass()
{
	using TClass = UTransfigurationComboDetector;
	if (!Z_Registration_Info_UClass_UTransfigurationComboDetector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationComboDetector"),
			Z_Registration_Info_UClass_UTransfigurationComboDetector.InnerSingleton,
			StaticRegisterNativesUTransfigurationComboDetector,
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
	return Z_Registration_Info_UClass_UTransfigurationComboDetector.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationComboDetector_NoRegister()
{
	return UTransfigurationComboDetector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationComboDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Transfiguration/TransfigurationComboDetector.h" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboRecipes_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboProximityRadius_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboChainRecipes_MetaData[] = {
		{ "Category", "Combo|Chains" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combo chain detection\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combo chain detection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChainBreakTime_MetaData[] = {
		{ "Category", "Combo|Chains" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComboDetected_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnChainProgress_MetaData[] = {
		{ "ModuleRelativePath", "Transfiguration/TransfigurationComboDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboRecipes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboRecipes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboProximityRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboChainRecipes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboChainRecipes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxChainBreakTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComboDetected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChainProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransfigurationComboDetector_AddToComboChain, "AddToComboChain" }, // 1519038545
		{ &Z_Construct_UFunction_UTransfigurationComboDetector_ResetComboChain, "ResetComboChain" }, // 797472828
		{ &Z_Construct_UFunction_UTransfigurationComboDetector_StartComboChain, "StartComboChain" }, // 2721811714
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationComboDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboRecipes_Inner = { "ComboRecipes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSigilComboRecipe, METADATA_PARAMS(0, nullptr) }; // 2515259468
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboRecipes = { "ComboRecipes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, ComboRecipes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboRecipes_MetaData), NewProp_ComboRecipes_MetaData) }; // 2515259468
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboProximityRadius = { "ComboProximityRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, ComboProximityRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboProximityRadius_MetaData), NewProp_ComboProximityRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboChainRecipes_Inner = { "ComboChainRecipes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboChainRecipe, METADATA_PARAMS(0, nullptr) }; // 2351161643
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboChainRecipes = { "ComboChainRecipes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, ComboChainRecipes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboChainRecipes_MetaData), NewProp_ComboChainRecipes_MetaData) }; // 2351161643
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_MaxChainBreakTime = { "MaxChainBreakTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, MaxChainBreakTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChainBreakTime_MetaData), NewProp_MaxChainBreakTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_OnComboDetected = { "OnComboDetected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, OnComboDetected), Z_Construct_UDelegateFunction_Transfigure_OnComboDetected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComboDetected_MetaData), NewProp_OnComboDetected_MetaData) }; // 3290969697
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_OnChainProgress = { "OnChainProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransfigurationComboDetector, OnChainProgress), Z_Construct_UDelegateFunction_Transfigure_OnChainProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnChainProgress_MetaData), NewProp_OnChainProgress_MetaData) }; // 3439010613
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransfigurationComboDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboRecipes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboRecipes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboProximityRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboChainRecipes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_ComboChainRecipes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_MaxChainBreakTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_OnComboDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransfigurationComboDetector_Statics::NewProp_OnChainProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationComboDetector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransfigurationComboDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationComboDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationComboDetector_Statics::ClassParams = {
	&UTransfigurationComboDetector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTransfigurationComboDetector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationComboDetector_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationComboDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationComboDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationComboDetector()
{
	if (!Z_Registration_Info_UClass_UTransfigurationComboDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationComboDetector.OuterSingleton, Z_Construct_UClass_UTransfigurationComboDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationComboDetector.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationComboDetector);
UTransfigurationComboDetector::~UTransfigurationComboDetector() {}
// ********** End Class UTransfigurationComboDetector **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationComboDetector, UTransfigurationComboDetector::StaticClass, TEXT("UTransfigurationComboDetector"), &Z_Registration_Info_UClass_UTransfigurationComboDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationComboDetector), 767546225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h__Script_Transfigure_51133446(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationComboDetector_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
