// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TransfigurationEffectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTransfigurationEffectBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationDefinition_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase();
TRANSFIGURE_API UClass* Z_Construct_UClass_UTransfigurationEffectBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTransfigurationEffectBase Function GetScaledCooldown ********************
struct Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics
{
	struct TransfigurationEffectBase_eventGetScaledCooldown_Parms
	{
		UTransfigurationDefinition* SpellData;
		AActor* Instigator;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transfiguration|Effect" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationEffectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_SpellData = { "SpellData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledCooldown_Parms, SpellData), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledCooldown_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledCooldown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_SpellData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationEffectBase, nullptr, "GetScaledCooldown", Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::TransfigurationEffectBase_eventGetScaledCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::TransfigurationEffectBase_eventGetScaledCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationEffectBase::execGetScaledCooldown)
{
	P_GET_OBJECT(UTransfigurationDefinition,Z_Param_SpellData);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledCooldown(Z_Param_SpellData,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationEffectBase Function GetScaledCooldown **********************

// ********** Begin Class UTransfigurationEffectBase Function GetScaledDamage **********************
struct Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics
{
	struct TransfigurationEffectBase_eventGetScaledDamage_Parms
	{
		UTransfigurationDefinition* SpellData;
		AActor* Instigator;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transfiguration|Effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Momentum conservation helpers\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Momentum conservation helpers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_SpellData = { "SpellData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledDamage_Parms, SpellData), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledDamage_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventGetScaledDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_SpellData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationEffectBase, nullptr, "GetScaledDamage", Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::TransfigurationEffectBase_eventGetScaledDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::TransfigurationEffectBase_eventGetScaledDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationEffectBase::execGetScaledDamage)
{
	P_GET_OBJECT(UTransfigurationDefinition,Z_Param_SpellData);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledDamage(Z_Param_SpellData,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationEffectBase Function GetScaledDamage ************************

// ********** Begin Class UTransfigurationEffectBase Function QueueEnvironmentalDestruction ********
struct Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics
{
	struct TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms
	{
		FVector Origin;
		AActor* Instigator;
		UTransfigurationDefinition* SpellData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spell|Destruction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Destruction integration\n" },
#endif
		{ "ModuleRelativePath", "Transfiguration/TransfigurationEffectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destruction integration" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpellData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_SpellData = { "SpellData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms, SpellData), Z_Construct_UClass_UTransfigurationDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::NewProp_SpellData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTransfigurationEffectBase, nullptr, "QueueEnvironmentalDestruction", Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::TransfigurationEffectBase_eventQueueEnvironmentalDestruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTransfigurationEffectBase::execQueueEnvironmentalDestruction)
{
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UTransfigurationDefinition,Z_Param_SpellData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueEnvironmentalDestruction(Z_Param_Origin,Z_Param_Instigator,Z_Param_SpellData);
	P_NATIVE_END;
}
// ********** End Class UTransfigurationEffectBase Function QueueEnvironmentalDestruction **********

// ********** Begin Class UTransfigurationEffectBase ***********************************************
void UTransfigurationEffectBase::StaticRegisterNativesUTransfigurationEffectBase()
{
	UClass* Class = UTransfigurationEffectBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetScaledCooldown", &UTransfigurationEffectBase::execGetScaledCooldown },
		{ "GetScaledDamage", &UTransfigurationEffectBase::execGetScaledDamage },
		{ "QueueEnvironmentalDestruction", &UTransfigurationEffectBase::execQueueEnvironmentalDestruction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTransfigurationEffectBase;
UClass* UTransfigurationEffectBase::GetPrivateStaticClass()
{
	using TClass = UTransfigurationEffectBase;
	if (!Z_Registration_Info_UClass_UTransfigurationEffectBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TransfigurationEffectBase"),
			Z_Registration_Info_UClass_UTransfigurationEffectBase.InnerSingleton,
			StaticRegisterNativesUTransfigurationEffectBase,
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
	return Z_Registration_Info_UClass_UTransfigurationEffectBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UTransfigurationEffectBase_NoRegister()
{
	return UTransfigurationEffectBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTransfigurationEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Transfiguration/TransfigurationEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Transfiguration/TransfigurationEffectBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledCooldown, "GetScaledCooldown" }, // 3498666000
		{ &Z_Construct_UFunction_UTransfigurationEffectBase_GetScaledDamage, "GetScaledDamage" }, // 2994657180
		{ &Z_Construct_UFunction_UTransfigurationEffectBase_QueueEnvironmentalDestruction, "QueueEnvironmentalDestruction" }, // 2259697371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransfigurationEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTransfigurationEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransfigurationEffectBase_Statics::ClassParams = {
	&UTransfigurationEffectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransfigurationEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransfigurationEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransfigurationEffectBase()
{
	if (!Z_Registration_Info_UClass_UTransfigurationEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransfigurationEffectBase.OuterSingleton, Z_Construct_UClass_UTransfigurationEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransfigurationEffectBase.OuterSingleton;
}
UTransfigurationEffectBase::UTransfigurationEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransfigurationEffectBase);
UTransfigurationEffectBase::~UTransfigurationEffectBase() {}
// ********** End Class UTransfigurationEffectBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransfigurationEffectBase, UTransfigurationEffectBase::StaticClass, TEXT("UTransfigurationEffectBase"), &Z_Registration_Info_UClass_UTransfigurationEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransfigurationEffectBase), 166633398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h__Script_Transfigure_1725131005(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationEffectBase_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
