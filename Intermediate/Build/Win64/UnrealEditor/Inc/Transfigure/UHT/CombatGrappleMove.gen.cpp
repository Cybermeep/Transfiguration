// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatGrappleMove.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCombatGrappleMove() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UCombatGrappleMove();
TRANSFIGURE_API UClass* Z_Construct_UClass_UCombatGrappleMove_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ECombatGrappleMove();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCombatGrappleMove Function ApplyElementalDamage *************************
struct Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics
{
	struct CombatGrappleMove_eventApplyElementalDamage_Parms
	{
		ABaseEnemy* Target;
		ETransfigurationElement Element;
		float InDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyElementalDamage_Parms, Target), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyElementalDamage_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_InDamage = { "InDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyElementalDamage_Parms, InDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_Element,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::NewProp_InDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatGrappleMove, nullptr, "ApplyElementalDamage", Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::CombatGrappleMove_eventApplyElementalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::CombatGrappleMove_eventApplyElementalDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatGrappleMove::execApplyElementalDamage)
{
	P_GET_OBJECT(ABaseEnemy,Z_Param_Target);
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyElementalDamage(Z_Param_Target,ETransfigurationElement(Z_Param_Element),Z_Param_InDamage);
	P_NATIVE_END;
}
// ********** End Class UCombatGrappleMove Function ApplyElementalDamage ***************************

// ********** Begin Class UCombatGrappleMove Function ApplyMomentumDamage **************************
struct Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics
{
	struct CombatGrappleMove_eventApplyMomentumDamage_Parms
	{
		ATMCharacter* Instigator;
		ABaseEnemy* Target;
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyMomentumDamage_Parms, Instigator), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyMomentumDamage_Parms, Target), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventApplyMomentumDamage_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatGrappleMove, nullptr, "ApplyMomentumDamage", Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::CombatGrappleMove_eventApplyMomentumDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::CombatGrappleMove_eventApplyMomentumDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatGrappleMove::execApplyMomentumDamage)
{
	P_GET_OBJECT(ATMCharacter,Z_Param_Instigator);
	P_GET_OBJECT(ABaseEnemy,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMomentumDamage(Z_Param_Instigator,Z_Param_Target,Z_Param_Speed);
	P_NATIVE_END;
}
// ********** End Class UCombatGrappleMove Function ApplyMomentumDamage ****************************

// ********** Begin Class UCombatGrappleMove Function ExecuteMove **********************************
struct Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics
{
	struct CombatGrappleMove_eventExecuteMove_Parms
	{
		ATMCharacter* Instigator;
		ABaseEnemy* Target;
		ETransfigurationElement Element;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CombatGrapple" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventExecuteMove_Parms, Instigator), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventExecuteMove_Parms, Target), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventExecuteMove_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatGrappleMove, nullptr, "ExecuteMove", Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::CombatGrappleMove_eventExecuteMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::CombatGrappleMove_eventExecuteMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatGrappleMove::execExecuteMove)
{
	P_GET_OBJECT(ATMCharacter,Z_Param_Instigator);
	P_GET_OBJECT(ABaseEnemy,Z_Param_Target);
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteMove(Z_Param_Instigator,Z_Param_Target,ETransfigurationElement(Z_Param_Element));
	P_NATIVE_END;
}
// ********** End Class UCombatGrappleMove Function ExecuteMove ************************************

// ********** Begin Class UCombatGrappleMove Function OnMoveExecuted *******************************
struct CombatGrappleMove_eventOnMoveExecuted_Parms
{
	ATMCharacter* Instigator;
	ABaseEnemy* Target;
	FVector ImpactPoint;
};
static FName NAME_UCombatGrappleMove_OnMoveExecuted = FName(TEXT("OnMoveExecuted"));
void UCombatGrappleMove::OnMoveExecuted(ATMCharacter* Instigator, ABaseEnemy* Target, FVector ImpactPoint)
{
	CombatGrappleMove_eventOnMoveExecuted_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.Target=Target;
	Parms.ImpactPoint=ImpactPoint;
	UFunction* Func = FindFunctionChecked(NAME_UCombatGrappleMove_OnMoveExecuted);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CombatGrapple|VFX" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventOnMoveExecuted_Parms, Instigator), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventOnMoveExecuted_Parms, Target), Z_Construct_UClass_ABaseEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatGrappleMove_eventOnMoveExecuted_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::NewProp_ImpactPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCombatGrappleMove, nullptr, "OnMoveExecuted", Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::PropPointers), sizeof(CombatGrappleMove_eventOnMoveExecuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CombatGrappleMove_eventOnMoveExecuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCombatGrappleMove Function OnMoveExecuted *********************************

// ********** Begin Class UCombatGrappleMove *******************************************************
void UCombatGrappleMove::StaticRegisterNativesUCombatGrappleMove()
{
	UClass* Class = UCombatGrappleMove::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyElementalDamage", &UCombatGrappleMove::execApplyElementalDamage },
		{ "ApplyMomentumDamage", &UCombatGrappleMove::execApplyMomentumDamage },
		{ "ExecuteMove", &UCombatGrappleMove::execExecuteMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCombatGrappleMove;
UClass* UCombatGrappleMove::GetPrivateStaticClass()
{
	using TClass = UCombatGrappleMove;
	if (!Z_Registration_Info_UClass_UCombatGrappleMove.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CombatGrappleMove"),
			Z_Registration_Info_UClass_UCombatGrappleMove.InnerSingleton,
			StaticRegisterNativesUCombatGrappleMove,
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
	return Z_Registration_Info_UClass_UCombatGrappleMove.InnerSingleton;
}
UClass* Z_Construct_UClass_UCombatGrappleMove_NoRegister()
{
	return UCombatGrappleMove::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCombatGrappleMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Grapple/CombatGrappleMove.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveType_MetaData[] = {
		{ "Category", "CombatGrapple" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "CombatGrapple" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MomentumMultiplier_MetaData[] = {
		{ "Category", "CombatGrapple" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "CombatGrapple" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalDamageBonus_MetaData[] = {
		{ "Category", "CombatGrapple|Elemental" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalEffectNames_MetaData[] = {
		{ "Category", "CombatGrapple|Elemental" },
		{ "ModuleRelativePath", "Grapple/CombatGrappleMove.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MoveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MoveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MomentumMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementalDamageBonus_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalDamageBonus_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalDamageBonus_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElementalDamageBonus;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ElementalEffectNames_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalEffectNames_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalEffectNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElementalEffectNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatGrappleMove_ApplyElementalDamage, "ApplyElementalDamage" }, // 3893109342
		{ &Z_Construct_UFunction_UCombatGrappleMove_ApplyMomentumDamage, "ApplyMomentumDamage" }, // 1197634429
		{ &Z_Construct_UFunction_UCombatGrappleMove_ExecuteMove, "ExecuteMove" }, // 3865687567
		{ &Z_Construct_UFunction_UCombatGrappleMove_OnMoveExecuted, "OnMoveExecuted" }, // 1944035416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatGrappleMove>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MoveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MoveType = { "MoveType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, MoveType), Z_Construct_UEnum_Transfigure_ECombatGrappleMove, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveType_MetaData), NewProp_MoveType_MetaData) }; // 3197916696
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MomentumMultiplier = { "MomentumMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, MomentumMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MomentumMultiplier_MetaData), NewProp_MomentumMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_ValueProp = { "ElementalDamageBonus", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_Key_KeyProp = { "ElementalDamageBonus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus = { "ElementalDamageBonus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, ElementalDamageBonus), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalDamageBonus_MetaData), NewProp_ElementalDamageBonus_MetaData) }; // 4121596056
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_ValueProp = { "ElementalEffectNames", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_Key_KeyProp = { "ElementalEffectNames_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames = { "ElementalEffectNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatGrappleMove, ElementalEffectNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalEffectNames_MetaData), NewProp_ElementalEffectNames_MetaData) }; // 4121596056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatGrappleMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MoveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MoveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_MomentumMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalDamageBonus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatGrappleMove_Statics::NewProp_ElementalEffectNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatGrappleMove_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatGrappleMove_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatGrappleMove_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatGrappleMove_Statics::ClassParams = {
	&UCombatGrappleMove::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatGrappleMove_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatGrappleMove_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatGrappleMove_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatGrappleMove_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatGrappleMove()
{
	if (!Z_Registration_Info_UClass_UCombatGrappleMove.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatGrappleMove.OuterSingleton, Z_Construct_UClass_UCombatGrappleMove_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatGrappleMove.OuterSingleton;
}
UCombatGrappleMove::UCombatGrappleMove(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatGrappleMove);
UCombatGrappleMove::~UCombatGrappleMove() {}
// ********** End Class UCombatGrappleMove *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatGrappleMove, UCombatGrappleMove::StaticClass, TEXT("UCombatGrappleMove"), &Z_Registration_Info_UClass_UCombatGrappleMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatGrappleMove), 3059637264U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h__Script_Transfigure_2717020149(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Grapple_CombatGrappleMove_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
