// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseEnemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy();
TRANSFIGURE_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_AEnemyObjectPool_NoRegister();
TRANSFIGURE_API UEnum* Z_Construct_UEnum_Transfigure_EEnemyState();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEnemyState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Transfigure_EEnemyState, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> TRANSFIGURE_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_Transfigure_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alerted.DisplayName", "Alerted" },
		{ "Alerted.Name", "EEnemyState::Alerted" },
		{ "BlueprintType", "true" },
		{ "Combat.DisplayName", "Combat" },
		{ "Combat.Name", "EEnemyState::Combat" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "EEnemyState::Dead" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EEnemyState::Idle" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
		{ "Patrolling.DisplayName", "Patrolling" },
		{ "Patrolling.Name", "EEnemyState::Patrolling" },
		{ "Stunned.DisplayName", "Stunned" },
		{ "Stunned.Name", "EEnemyState::Stunned" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyState::Idle", (int64)EEnemyState::Idle },
		{ "EEnemyState::Patrolling", (int64)EEnemyState::Patrolling },
		{ "EEnemyState::Alerted", (int64)EEnemyState::Alerted },
		{ "EEnemyState::Combat", (int64)EEnemyState::Combat },
		{ "EEnemyState::Stunned", (int64)EEnemyState::Stunned },
		{ "EEnemyState::Dead", (int64)EEnemyState::Dead },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Transfigure_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_Transfigure_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Transfigure_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Transfigure_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Transfigure_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_Transfigure_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// ********** End Enum EEnemyState *****************************************************************

// ********** Begin Class ABaseEnemy Function DetectGrappleLine ************************************
struct Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics
{
	struct BaseEnemy_eventDetectGrappleLine_Parms
	{
		FVector LineStart;
		FVector LineEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::NewProp_LineStart = { "LineStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventDetectGrappleLine_Parms, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineStart_MetaData), NewProp_LineStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::NewProp_LineEnd = { "LineEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventDetectGrappleLine_Parms, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineEnd_MetaData), NewProp_LineEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::NewProp_LineStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::NewProp_LineEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "DetectGrappleLine", Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::BaseEnemy_eventDetectGrappleLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::BaseEnemy_eventDetectGrappleLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execDetectGrappleLine)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectGrappleLine(Z_Param_Out_LineStart,Z_Param_Out_LineEnd);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function DetectGrappleLine **************************************

// ********** Begin Class ABaseEnemy Function Die **************************************************
struct Z_Construct_UFunction_ABaseEnemy_Die_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_Die_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "Die", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_Die_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_Die_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_Die()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_Die_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execDie)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Die();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function Die ****************************************************

// ********** Begin Class ABaseEnemy Function GetAlertnessLevel ************************************
struct Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics
{
	struct BaseEnemy_eventGetAlertnessLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventGetAlertnessLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetAlertnessLevel", Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::BaseEnemy_eventGetAlertnessLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::BaseEnemy_eventGetAlertnessLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execGetAlertnessLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAlertnessLevel();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function GetAlertnessLevel **************************************

// ********** Begin Class ABaseEnemy Function GetPodID *********************************************
struct Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics
{
	struct BaseEnemy_eventGetPodID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pod" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventGetPodID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "GetPodID", Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::BaseEnemy_eventGetPodID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::BaseEnemy_eventGetPodID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_GetPodID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_GetPodID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execGetPodID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPodID();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function GetPodID ***********************************************

// ********** Begin Class ABaseEnemy Function IsAlive **********************************************
struct Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics
{
	struct BaseEnemy_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseEnemy_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseEnemy_eventIsAlive_Parms), &Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "IsAlive", Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::BaseEnemy_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::BaseEnemy_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function IsAlive ************************************************

// ********** Begin Class ABaseEnemy Function IsElite **********************************************
struct Z_Construct_UFunction_ABaseEnemy_IsElite_Statics
{
	struct BaseEnemy_eventIsElite_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseEnemy_eventIsElite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseEnemy_eventIsElite_Parms), &Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "IsElite", Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::BaseEnemy_eventIsElite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::BaseEnemy_eventIsElite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_IsElite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_IsElite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execIsElite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsElite();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function IsElite ************************************************

// ********** Begin Class ABaseEnemy Function OnDamageEffects **************************************
struct BaseEnemy_eventOnDamageEffects_Parms
{
	FVector HitLocation;
};
static FName NAME_ABaseEnemy_OnDamageEffects = FName(TEXT("OnDamageEffects"));
void ABaseEnemy::OnDamageEffects(FVector HitLocation)
{
	BaseEnemy_eventOnDamageEffects_Parms Parms;
	Parms.HitLocation=HitLocation;
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnDamageEffects);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|VFX" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnDamageEffects_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::NewProp_HitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnDamageEffects", Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::PropPointers), sizeof(BaseEnemy_eventOnDamageEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseEnemy_eventOnDamageEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_OnDamageEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnDamageEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnDamageEffects ****************************************

// ********** Begin Class ABaseEnemy Function OnDeathEffects ***************************************
static FName NAME_ABaseEnemy_OnDeathEffects = FName(TEXT("OnDeathEffects"));
void ABaseEnemy::OnDeathEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnDeathEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABaseEnemy_OnDeathEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|VFX" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnDeathEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnDeathEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDeathEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnDeathEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_OnDeathEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnDeathEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnDeathEffects *****************************************

// ********** Begin Class ABaseEnemy Function OnDestructionDetected ********************************
struct BaseEnemy_eventOnDestructionDetected_Parms
{
	FVector DestructionLocation;
};
static FName NAME_ABaseEnemy_OnDestructionDetected = FName(TEXT("OnDestructionDetected"));
void ABaseEnemy::OnDestructionDetected(FVector DestructionLocation)
{
	BaseEnemy_eventOnDestructionDetected_Parms Parms;
	Parms.DestructionLocation=DestructionLocation;
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnDestructionDetected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::NewProp_DestructionLocation = { "DestructionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnDestructionDetected_Parms, DestructionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::NewProp_DestructionLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnDestructionDetected", Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::PropPointers), sizeof(BaseEnemy_eventOnDestructionDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseEnemy_eventOnDestructionDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnDestructionDetected **********************************

// ********** Begin Class ABaseEnemy Function OnGrappleDetected ************************************
struct BaseEnemy_eventOnGrappleDetected_Parms
{
	FVector LineLocation;
};
static FName NAME_ABaseEnemy_OnGrappleDetected = FName(TEXT("OnGrappleDetected"));
void ABaseEnemy::OnGrappleDetected(FVector const& LineLocation)
{
	BaseEnemy_eventOnGrappleDetected_Parms Parms;
	Parms.LineLocation=LineLocation;
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnGrappleDetected);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::NewProp_LineLocation = { "LineLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventOnGrappleDetected_Parms, LineLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineLocation_MetaData), NewProp_LineLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::NewProp_LineLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnGrappleDetected", Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::PropPointers), sizeof(BaseEnemy_eventOnGrappleDetected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BaseEnemy_eventOnGrappleDetected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnGrappleDetected **************************************

// ********** Begin Class ABaseEnemy Function OnReturnEffects **************************************
static FName NAME_ABaseEnemy_OnReturnEffects = FName(TEXT("OnReturnEffects"));
void ABaseEnemy::OnReturnEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnReturnEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABaseEnemy_OnReturnEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|VFX" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnReturnEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnReturnEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnReturnEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnReturnEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_OnReturnEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnReturnEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnReturnEffects ****************************************

// ********** Begin Class ABaseEnemy Function OnReturnToPool ***************************************
struct Z_Construct_UFunction_ABaseEnemy_OnReturnToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnReturnToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnReturnToPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnReturnToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnReturnToPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_OnReturnToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnReturnToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execOnReturnToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnToPool();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function OnReturnToPool *****************************************

// ********** Begin Class ABaseEnemy Function OnSpawnEffects ***************************************
static FName NAME_ABaseEnemy_OnSpawnEffects = FName(TEXT("OnSpawnEffects"));
void ABaseEnemy::OnSpawnEffects()
{
	UFunction* Func = FindFunctionChecked(NAME_ABaseEnemy_OnSpawnEffects);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|VFX" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnSpawnEffects", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ABaseEnemy Function OnSpawnEffects *****************************************

// ********** Begin Class ABaseEnemy Function OnSpawnFromPool **************************************
struct Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pool" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pool lifecycle\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pool lifecycle" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "OnSpawnFromPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execOnSpawnFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSpawnFromPool();
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function OnSpawnFromPool ****************************************

// ********** Begin Class ABaseEnemy Function ReactToDestruction ***********************************
struct Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics
{
	struct BaseEnemy_eventReactToDestruction_Parms
	{
		FVector DestructionLocation;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DestructionLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::NewProp_DestructionLocation = { "DestructionLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventReactToDestruction_Parms, DestructionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventReactToDestruction_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::NewProp_DestructionLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "ReactToDestruction", Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::BaseEnemy_eventReactToDestruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::BaseEnemy_eventReactToDestruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_ReactToDestruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_ReactToDestruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execReactToDestruction)
{
	P_GET_STRUCT(FVector,Z_Param_DestructionLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReactToDestruction(Z_Param_DestructionLocation,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function ReactToDestruction *************************************

// ********** Begin Class ABaseEnemy Function SetAlertnessLevel ************************************
struct Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics
{
	struct BaseEnemy_eventSetAlertnessLevel_Parms
	{
		float Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Awareness" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Awareness\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Awareness" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventSetAlertnessLevel_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "SetAlertnessLevel", Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::BaseEnemy_eventSetAlertnessLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::BaseEnemy_eventSetAlertnessLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execSetAlertnessLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlertnessLevel(Z_Param_Level);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function SetAlertnessLevel **************************************

// ********** Begin Class ABaseEnemy Function SetOwningPool ****************************************
struct Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics
{
	struct BaseEnemy_eventSetOwningPool_Parms
	{
		AEnemyObjectPool* Pool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pod" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::NewProp_Pool = { "Pool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventSetOwningPool_Parms, Pool), Z_Construct_UClass_AEnemyObjectPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::NewProp_Pool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "SetOwningPool", Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::BaseEnemy_eventSetOwningPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::BaseEnemy_eventSetOwningPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_SetOwningPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_SetOwningPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execSetOwningPool)
{
	P_GET_OBJECT(AEnemyObjectPool,Z_Param_Pool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningPool(Z_Param_Pool);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function SetOwningPool ******************************************

// ********** Begin Class ABaseEnemy Function SetPodID *********************************************
struct Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics
{
	struct BaseEnemy_eventSetPodID_Parms
	{
		int32 NewPodID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Pod" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pod system\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pod system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPodID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::NewProp_NewPodID = { "NewPodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventSetPodID_Parms, NewPodID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::NewProp_NewPodID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "SetPodID", Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::BaseEnemy_eventSetPodID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::BaseEnemy_eventSetPodID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_SetPodID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_SetPodID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execSetPodID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPodID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPodID(Z_Param_NewPodID);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function SetPodID ***********************************************

// ********** Begin Class ABaseEnemy Function TakePoolDamage ***************************************
struct Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics
{
	struct BaseEnemy_eventTakePoolDamage_Parms
	{
		float DamageAmount;
		FVector HitLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Enemy|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat\n" },
#endif
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventTakePoolDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseEnemy_eventTakePoolDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::NewProp_HitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "TakePoolDamage", Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::BaseEnemy_eventTakePoolDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::BaseEnemy_eventTakePoolDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseEnemy_TakePoolDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseEnemy_TakePoolDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseEnemy::execTakePoolDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakePoolDamage(Z_Param_DamageAmount,Z_Param_HitLocation);
	P_NATIVE_END;
}
// ********** End Class ABaseEnemy Function TakePoolDamage *****************************************

// ********** Begin Class ABaseEnemy ***************************************************************
void ABaseEnemy::StaticRegisterNativesABaseEnemy()
{
	UClass* Class = ABaseEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectGrappleLine", &ABaseEnemy::execDetectGrappleLine },
		{ "Die", &ABaseEnemy::execDie },
		{ "GetAlertnessLevel", &ABaseEnemy::execGetAlertnessLevel },
		{ "GetPodID", &ABaseEnemy::execGetPodID },
		{ "IsAlive", &ABaseEnemy::execIsAlive },
		{ "IsElite", &ABaseEnemy::execIsElite },
		{ "OnReturnToPool", &ABaseEnemy::execOnReturnToPool },
		{ "OnSpawnFromPool", &ABaseEnemy::execOnSpawnFromPool },
		{ "ReactToDestruction", &ABaseEnemy::execReactToDestruction },
		{ "SetAlertnessLevel", &ABaseEnemy::execSetAlertnessLevel },
		{ "SetOwningPool", &ABaseEnemy::execSetOwningPool },
		{ "SetPodID", &ABaseEnemy::execSetPodID },
		{ "TakePoolDamage", &ABaseEnemy::execTakePoolDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABaseEnemy;
UClass* ABaseEnemy::GetPrivateStaticClass()
{
	using TClass = ABaseEnemy;
	if (!Z_Registration_Info_UClass_ABaseEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseEnemy"),
			Z_Registration_Info_UClass_ABaseEnemy.InnerSingleton,
			StaticRegisterNativesABaseEnemy,
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
	return Z_Registration_Info_UClass_ABaseEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
{
	return ABaseEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABaseEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BaseEnemy.h" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Enemy|Config" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Enemy|Config" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AwarenessRange_MetaData[] = {
		{ "Category", "Enemy|Config" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsElite_MetaData[] = {
		{ "Category", "Enemy|Config" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "Enemy|State" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PodID_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPool_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlertnessLevel_MetaData[] = {
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
		{ "Category", "BaseEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy/BaseEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AwarenessRange;
	static void NewProp_bIsElite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsElite;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PodID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPool;
	static void NewProp_bIsAlive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlertnessLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_DetectGrappleLine, "DetectGrappleLine" }, // 870074210
		{ &Z_Construct_UFunction_ABaseEnemy_Die, "Die" }, // 2093484747
		{ &Z_Construct_UFunction_ABaseEnemy_GetAlertnessLevel, "GetAlertnessLevel" }, // 1532891361
		{ &Z_Construct_UFunction_ABaseEnemy_GetPodID, "GetPodID" }, // 1525464622
		{ &Z_Construct_UFunction_ABaseEnemy_IsAlive, "IsAlive" }, // 3025850351
		{ &Z_Construct_UFunction_ABaseEnemy_IsElite, "IsElite" }, // 3080071178
		{ &Z_Construct_UFunction_ABaseEnemy_OnDamageEffects, "OnDamageEffects" }, // 4060053988
		{ &Z_Construct_UFunction_ABaseEnemy_OnDeathEffects, "OnDeathEffects" }, // 701998149
		{ &Z_Construct_UFunction_ABaseEnemy_OnDestructionDetected, "OnDestructionDetected" }, // 492995491
		{ &Z_Construct_UFunction_ABaseEnemy_OnGrappleDetected, "OnGrappleDetected" }, // 1939528549
		{ &Z_Construct_UFunction_ABaseEnemy_OnReturnEffects, "OnReturnEffects" }, // 3321623882
		{ &Z_Construct_UFunction_ABaseEnemy_OnReturnToPool, "OnReturnToPool" }, // 2854645835
		{ &Z_Construct_UFunction_ABaseEnemy_OnSpawnEffects, "OnSpawnEffects" }, // 2473995423
		{ &Z_Construct_UFunction_ABaseEnemy_OnSpawnFromPool, "OnSpawnFromPool" }, // 1029665118
		{ &Z_Construct_UFunction_ABaseEnemy_ReactToDestruction, "ReactToDestruction" }, // 395991401
		{ &Z_Construct_UFunction_ABaseEnemy_SetAlertnessLevel, "SetAlertnessLevel" }, // 3603003682
		{ &Z_Construct_UFunction_ABaseEnemy_SetOwningPool, "SetOwningPool" }, // 1521543157
		{ &Z_Construct_UFunction_ABaseEnemy_SetPodID, "SetPodID" }, // 1353343983
		{ &Z_Construct_UFunction_ABaseEnemy_TakePoolDamage, "TakePoolDamage" }, // 3533927529
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AwarenessRange = { "AwarenessRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AwarenessRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AwarenessRange_MetaData), NewProp_AwarenessRange_MetaData) };
void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsElite_SetBit(void* Obj)
{
	((ABaseEnemy*)Obj)->bIsElite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsElite = { "bIsElite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsElite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsElite_MetaData), NewProp_bIsElite_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, CurrentState), Z_Construct_UEnum_Transfigure_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2894349906
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PodID = { "PodID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, PodID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PodID_MetaData), NewProp_PodID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OwningPool = { "OwningPool", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, OwningPool), Z_Construct_UClass_AEnemyObjectPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPool_MetaData), NewProp_OwningPool_MetaData) };
void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsAlive_SetBit(void* Obj)
{
	((ABaseEnemy*)Obj)->bIsAlive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAlive_MetaData), NewProp_bIsAlive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AlertnessLevel = { "AlertnessLevel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, AlertnessLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlertnessLevel_MetaData), NewProp_AlertnessLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseEnemy, HealthBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AwarenessRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsElite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_PodID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_OwningPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsAlive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_AlertnessLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_HealthBarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
	&ABaseEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseEnemy()
{
	if (!Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseEnemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
ABaseEnemy::~ABaseEnemy() {}
// ********** End Class ABaseEnemy *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894349906U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEnemy, ABaseEnemy::StaticClass, TEXT("ABaseEnemy"), &Z_Registration_Info_UClass_ABaseEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEnemy), 1856924971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_4903128(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Enemy_BaseEnemy_h__Script_Transfigure_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
