// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponComponent.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_ATMCharacter_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_UWeaponComponent();
TRANSFIGURE_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_ETransfigurationElement();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature();
TRANSFIGURE_API UFunction* Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponHitInfo();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponHitInfo ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponHitInfo;
class UScriptStruct* FWeaponHitInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponHitInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponHitInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponHitInfo, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("WeaponHitInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponHitInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponHitInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitActor_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasHeadshot_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasKill_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageDealt_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitActor;
	static void NewProp_bWasHeadshot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasHeadshot;
	static void NewProp_bWasKill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageDealt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponHitInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponHitInfo, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponHitInfo, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitActor_MetaData), NewProp_HitActor_MetaData) };
void Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasHeadshot_SetBit(void* Obj)
{
	((FWeaponHitInfo*)Obj)->bWasHeadshot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasHeadshot = { "bWasHeadshot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponHitInfo), &Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasHeadshot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasHeadshot_MetaData), NewProp_bWasHeadshot_MetaData) };
void Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasKill_SetBit(void* Obj)
{
	((FWeaponHitInfo*)Obj)->bWasKill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasKill = { "bWasKill", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponHitInfo), &Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasKill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasKill_MetaData), NewProp_bWasKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_DamageDealt = { "DamageDealt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponHitInfo, DamageDealt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageDealt_MetaData), NewProp_DamageDealt_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_HitActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasHeadshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_bWasKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewProp_DamageDealt,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"WeaponHitInfo",
	Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::PropPointers),
	sizeof(FWeaponHitInfo),
	alignof(FWeaponHitInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponHitInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponHitInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponHitInfo.InnerSingleton, Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponHitInfo.InnerSingleton;
}
// ********** End ScriptStruct FWeaponHitInfo ******************************************************

// ********** Begin Delegate FOnWeaponHit **********************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnWeaponHit_Parms
	{
		FWeaponHitInfo HitInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnWeaponHit_Parms, HitInfo), Z_Construct_UScriptStruct_FWeaponHitInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 3723713861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::NewProp_HitInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnWeaponHit__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::_Script_Transfigure_eventOnWeaponHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::_Script_Transfigure_eventOnWeaponHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponHit_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponHit, FWeaponHitInfo const& HitInfo)
{
	struct _Script_Transfigure_eventOnWeaponHit_Parms
	{
		FWeaponHitInfo HitInfo;
	};
	_Script_Transfigure_eventOnWeaponHit_Parms Parms;
	Parms.HitInfo=HitInfo;
	OnWeaponHit.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnWeaponHit ************************************************************

// ********** Begin Delegate FOnWeaponKill *********************************************************
struct Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics
{
	struct _Script_Transfigure_eventOnWeaponKill_Parms
	{
		AActor* KilledEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::NewProp_KilledEnemy = { "KilledEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Transfigure_eventOnWeaponKill_Parms, KilledEnemy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::NewProp_KilledEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_Transfigure, nullptr, "OnWeaponKill__DelegateSignature", Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::_Script_Transfigure_eventOnWeaponKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::_Script_Transfigure_eventOnWeaponKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponKill_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponKill, AActor* KilledEnemy)
{
	struct _Script_Transfigure_eventOnWeaponKill_Parms
	{
		AActor* KilledEnemy;
	};
	_Script_Transfigure_eventOnWeaponKill_Parms Parms;
	Parms.KilledEnemy=KilledEnemy;
	OnWeaponKill.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnWeaponKill ***********************************************************

// ********** Begin Class UWeaponComponent Function ApplyElementalDamage ***************************
struct Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics
{
	struct WeaponComponent_eventApplyElementalDamage_Parms
	{
		AActor* Target;
		FHitResult Hit;
		float InBaseDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InBaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventApplyElementalDamage_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventApplyElementalDamage_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_InBaseDamage = { "InBaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventApplyElementalDamage_Parms, InBaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::NewProp_InBaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ApplyElementalDamage", Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::WeaponComponent_eventApplyElementalDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::WeaponComponent_eventApplyElementalDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execApplyElementalDamage)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InBaseDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyElementalDamage(Z_Param_Target,Z_Param_Out_Hit,Z_Param_InBaseDamage);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function ApplyElementalDamage *****************************

// ********** Begin Class UWeaponComponent Function ClearInfusion **********************************
struct Z_Construct_UFunction_UWeaponComponent_ClearInfusion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ClearInfusion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ClearInfusion", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ClearInfusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_ClearInfusion_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_ClearInfusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ClearInfusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execClearInfusion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearInfusion();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function ClearInfusion ************************************

// ********** Begin Class UWeaponComponent Function GetCurrentInfusion *****************************
struct Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics
{
	struct WeaponComponent_eventGetCurrentInfusion_Parms
	{
		ETransfigurationElement ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventGetCurrentInfusion_Parms, ReturnValue), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "GetCurrentInfusion", Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::WeaponComponent_eventGetCurrentInfusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::WeaponComponent_eventGetCurrentInfusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execGetCurrentInfusion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETransfigurationElement*)Z_Param__Result=P_THIS->GetCurrentInfusion();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function GetCurrentInfusion *******************************

// ********** Begin Class UWeaponComponent Function InfuseWeaponWithElement ************************
struct Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics
{
	struct WeaponComponent_eventInfuseWeaponWithElement_Parms
	{
		ETransfigurationElement Element;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Element_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Element;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::NewProp_Element_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventInfuseWeaponWithElement_Parms, Element), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::NewProp_Element_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::NewProp_Element,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "InfuseWeaponWithElement", Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::WeaponComponent_eventInfuseWeaponWithElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::WeaponComponent_eventInfuseWeaponWithElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execInfuseWeaponWithElement)
{
	P_GET_ENUM(ETransfigurationElement,Z_Param_Element);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InfuseWeaponWithElement(ETransfigurationElement(Z_Param_Element));
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function InfuseWeaponWithElement **************************

// ********** Begin Class UWeaponComponent Function IsWeaponInfused ********************************
struct Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics
{
	struct WeaponComponent_eventIsWeaponInfused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponComponent_eventIsWeaponInfused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventIsWeaponInfused_Parms), &Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "IsWeaponInfused", Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::WeaponComponent_eventIsWeaponInfused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::WeaponComponent_eventIsWeaponInfused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execIsWeaponInfused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponInfused();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function IsWeaponInfused **********************************

// ********** Begin Class UWeaponComponent Function OnInfusionExpired ******************************
struct Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "OnInfusionExpired", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execOnInfusionExpired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInfusionExpired();
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function OnInfusionExpired ********************************

// ********** Begin Class UWeaponComponent Function OnMeleeKill ************************************
struct Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics
{
	struct WeaponComponent_eventOnMeleeKill_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventOnMeleeKill_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "OnMeleeKill", Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::WeaponComponent_eventOnMeleeKill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::WeaponComponent_eventOnMeleeKill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_OnMeleeKill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_OnMeleeKill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execOnMeleeKill)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeleeKill(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function OnMeleeKill **************************************

// ********** Begin Class UWeaponComponent Function ProcessHit *************************************
struct Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics
{
	struct WeaponComponent_eventProcessHit_Parms
	{
		FHitResult Hit;
		bool bWasHeadshot;
		bool bWasKill;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x94\x80\xe2\x94\x80 BUG 4 FIX: Renamed from OnWeaponHit to ProcessHit \xe2\x94\x80\xe2\x94\x80\n// Previously this UFUNCTION had the same name as the delegate property above,\n// causing a compile error. Call ProcessHit() from your weapon fire logic.\n" },
#endif
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x94\x80\xe2\x94\x80 BUG 4 FIX: Renamed from OnWeaponHit to ProcessHit \xe2\x94\x80\xe2\x94\x80\nPreviously this UFUNCTION had the same name as the delegate property above,\ncausing a compile error. Call ProcessHit() from your weapon fire logic." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static void NewProp_bWasHeadshot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasHeadshot;
	static void NewProp_bWasKill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasKill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventProcessHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasHeadshot_SetBit(void* Obj)
{
	((WeaponComponent_eventProcessHit_Parms*)Obj)->bWasHeadshot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasHeadshot = { "bWasHeadshot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventProcessHit_Parms), &Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasHeadshot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasKill_SetBit(void* Obj)
{
	((WeaponComponent_eventProcessHit_Parms*)Obj)->bWasKill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasKill = { "bWasKill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponComponent_eventProcessHit_Parms), &Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasKill_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasHeadshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::NewProp_bWasKill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "ProcessHit", Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::WeaponComponent_eventProcessHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::WeaponComponent_eventProcessHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_ProcessHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_ProcessHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execProcessHit)
{
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_GET_UBOOL(Z_Param_bWasHeadshot);
	P_GET_UBOOL(Z_Param_bWasKill);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessHit(Z_Param_Hit,Z_Param_bWasHeadshot,Z_Param_bWasKill);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function ProcessHit ***************************************

// ********** Begin Class UWeaponComponent Function UpdateInfusion *********************************
struct Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics
{
	struct WeaponComponent_eventUpdateInfusion_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponComponent_eventUpdateInfusion_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponComponent, nullptr, "UpdateInfusion", Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::WeaponComponent_eventUpdateInfusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::WeaponComponent_eventUpdateInfusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponComponent_UpdateInfusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponComponent_UpdateInfusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponComponent::execUpdateInfusion)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInfusion(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UWeaponComponent Function UpdateInfusion ***********************************

// ********** Begin Class UWeaponComponent *********************************************************
void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
{
	UClass* Class = UWeaponComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyElementalDamage", &UWeaponComponent::execApplyElementalDamage },
		{ "ClearInfusion", &UWeaponComponent::execClearInfusion },
		{ "GetCurrentInfusion", &UWeaponComponent::execGetCurrentInfusion },
		{ "InfuseWeaponWithElement", &UWeaponComponent::execInfuseWeaponWithElement },
		{ "IsWeaponInfused", &UWeaponComponent::execIsWeaponInfused },
		{ "OnInfusionExpired", &UWeaponComponent::execOnInfusionExpired },
		{ "OnMeleeKill", &UWeaponComponent::execOnMeleeKill },
		{ "ProcessHit", &UWeaponComponent::execProcessHit },
		{ "UpdateInfusion", &UWeaponComponent::execUpdateInfusion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponComponent;
UClass* UWeaponComponent::GetPrivateStaticClass()
{
	using TClass = UWeaponComponent;
	if (!Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponComponent"),
			Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton,
			StaticRegisterNativesUWeaponComponent,
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
	return Z_Registration_Info_UClass_UWeaponComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
{
	return UWeaponComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/WeaponComponent.h" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPerHit_MetaData[] = {
		{ "Category", "Weapon|Mana" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mana rewards\n" },
#endif
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mana rewards" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPerKill_MetaData[] = {
		{ "Category", "Weapon|Mana" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPerHeadshot_MetaData[] = {
		{ "Category", "Weapon|Mana" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaPerMelee_MetaData[] = {
		{ "Category", "Weapon|Mana" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableElementalInfusion_MetaData[] = {
		{ "Category", "Weapon|Elemental" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Elemental infusion\n" },
#endif
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Elemental infusion" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalInfusionDuration_MetaData[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalDamageMultipliers_MetaData[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementalDamageTypes_MetaData[] = {
		{ "Category", "Weapon|Elemental" },
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponHit_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates (BlueprintAssignable properties)\n" },
#endif
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates (BlueprintAssignable properties)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponKill_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInfused_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInfusion_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfusionTimeRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfusionTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Combat/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPerHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPerKill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPerHeadshot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaPerMelee;
	static void NewProp_bEnableElementalInfusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableElementalInfusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementalInfusionDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElementalDamageMultipliers_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalDamageMultipliers_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalDamageMultipliers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElementalDamageMultipliers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ElementalDamageTypes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ElementalDamageTypes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementalDamageTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ElementalDamageTypes;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponHit;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponKill;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static void NewProp_bIsInfused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInfused;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInfusion_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInfusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InfusionTimeRemaining;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InfusionTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponComponent_ApplyElementalDamage, "ApplyElementalDamage" }, // 882948194
		{ &Z_Construct_UFunction_UWeaponComponent_ClearInfusion, "ClearInfusion" }, // 1292256290
		{ &Z_Construct_UFunction_UWeaponComponent_GetCurrentInfusion, "GetCurrentInfusion" }, // 3997847376
		{ &Z_Construct_UFunction_UWeaponComponent_InfuseWeaponWithElement, "InfuseWeaponWithElement" }, // 2162897944
		{ &Z_Construct_UFunction_UWeaponComponent_IsWeaponInfused, "IsWeaponInfused" }, // 2631021955
		{ &Z_Construct_UFunction_UWeaponComponent_OnInfusionExpired, "OnInfusionExpired" }, // 2402743961
		{ &Z_Construct_UFunction_UWeaponComponent_OnMeleeKill, "OnMeleeKill" }, // 2835759033
		{ &Z_Construct_UFunction_UWeaponComponent_ProcessHit, "ProcessHit" }, // 2819979983
		{ &Z_Construct_UFunction_UWeaponComponent_UpdateInfusion, "UpdateInfusion" }, // 1797995187
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerHit = { "ManaPerHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ManaPerHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPerHit_MetaData), NewProp_ManaPerHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerKill = { "ManaPerKill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ManaPerKill), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPerKill_MetaData), NewProp_ManaPerKill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerHeadshot = { "ManaPerHeadshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ManaPerHeadshot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPerHeadshot_MetaData), NewProp_ManaPerHeadshot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerMelee = { "ManaPerMelee", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ManaPerMelee), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaPerMelee_MetaData), NewProp_ManaPerMelee_MetaData) };
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bEnableElementalInfusion_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bEnableElementalInfusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bEnableElementalInfusion = { "bEnableElementalInfusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bEnableElementalInfusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableElementalInfusion_MetaData), NewProp_bEnableElementalInfusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalInfusionDuration = { "ElementalInfusionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ElementalInfusionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalInfusionDuration_MetaData), NewProp_ElementalInfusionDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_ValueProp = { "ElementalDamageMultipliers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_Key_KeyProp = { "ElementalDamageMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers = { "ElementalDamageMultipliers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ElementalDamageMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalDamageMultipliers_MetaData), NewProp_ElementalDamageMultipliers_MetaData) }; // 4121596056
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_ValueProp = { "ElementalDamageTypes", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_Key_KeyProp = { "ElementalDamageTypes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(0, nullptr) }; // 4121596056
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes = { "ElementalDamageTypes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, ElementalDamageTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementalDamageTypes_MetaData), NewProp_ElementalDamageTypes_MetaData) }; // 4121596056
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnWeaponHit = { "OnWeaponHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, OnWeaponHit), Z_Construct_UDelegateFunction_Transfigure_OnWeaponHit__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponHit_MetaData), NewProp_OnWeaponHit_MetaData) }; // 162033544
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnWeaponKill = { "OnWeaponKill", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, OnWeaponKill), Z_Construct_UDelegateFunction_Transfigure_OnWeaponKill__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponKill_MetaData), NewProp_OnWeaponKill_MetaData) }; // 428698163
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, OwnerCharacter), Z_Construct_UClass_ATMCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
void Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsInfused_SetBit(void* Obj)
{
	((UWeaponComponent*)Obj)->bIsInfused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsInfused = { "bIsInfused", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponent), &Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsInfused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInfused_MetaData), NewProp_bIsInfused_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentInfusion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentInfusion = { "CurrentInfusion", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, CurrentInfusion), Z_Construct_UEnum_Transfigure_ETransfigurationElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInfusion_MetaData), NewProp_CurrentInfusion_MetaData) }; // 4121596056
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InfusionTimeRemaining = { "InfusionTimeRemaining", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, InfusionTimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfusionTimeRemaining_MetaData), NewProp_InfusionTimeRemaining_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InfusionTimerHandle = { "InfusionTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponent, InfusionTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfusionTimerHandle_MetaData), NewProp_InfusionTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerHeadshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ManaPerMelee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bEnableElementalInfusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalInfusionDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageMultipliers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_ElementalDamageTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnWeaponHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OnWeaponKill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_bIsInfused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentInfusion_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_CurrentInfusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InfusionTimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponent_Statics::NewProp_InfusionTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
	&UWeaponComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponent()
{
	if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
UWeaponComponent::~UWeaponComponent() {}
// ********** End Class UWeaponComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponHitInfo::StaticStruct, Z_Construct_UScriptStruct_FWeaponHitInfo_Statics::NewStructOps, TEXT("WeaponHitInfo"), &Z_Registration_Info_UScriptStruct_FWeaponHitInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponHitInfo), 3723713861U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 2316592280U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_1275500475(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Combat_WeaponComponent_h__Script_Transfigure_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
