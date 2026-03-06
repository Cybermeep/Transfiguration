// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleSurface.h"
#include "Engine/TimerHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDestructibleSurface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleSurface();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleSurface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADestructibleSurface Function ApplyDamageVisuals *************************
struct Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "ApplyDamageVisuals", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execApplyDamageVisuals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamageVisuals();
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function ApplyDamageVisuals ***************************

// ********** Begin Class ADestructibleSurface Function CanPlaceSigilAtLocation ********************
struct Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics
{
	struct DestructibleSurface_eventCanPlaceSigilAtLocation_Parms
	{
		FVector Location;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventCanPlaceSigilAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DestructibleSurface_eventCanPlaceSigilAtLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DestructibleSurface_eventCanPlaceSigilAtLocation_Parms), &Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "CanPlaceSigilAtLocation", Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::DestructibleSurface_eventCanPlaceSigilAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::DestructibleSurface_eventCanPlaceSigilAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execCanPlaceSigilAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanPlaceSigilAtLocation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function CanPlaceSigilAtLocation **********************

// ********** Begin Class ADestructibleSurface Function CleanupOldDamageZones **********************
struct Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "CleanupOldDamageZones", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execCleanupOldDamageZones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupOldDamageZones();
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function CleanupOldDamageZones ************************

// ********** Begin Class ADestructibleSurface Function CompleteRepair *****************************
struct Z_Construct_UFunction_ADestructibleSurface_CompleteRepair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_CompleteRepair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "CompleteRepair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_CompleteRepair_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_CompleteRepair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructibleSurface_CompleteRepair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_CompleteRepair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execCompleteRepair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteRepair();
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function CompleteRepair *******************************

// ********** Begin Class ADestructibleSurface Function GetSurfaceIntegrity ************************
struct Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics
{
	struct DestructibleSurface_eventGetSurfaceIntegrity_Parms
	{
		FVector Location;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventGetSurfaceIntegrity_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventGetSurfaceIntegrity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "GetSurfaceIntegrity", Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::DestructibleSurface_eventGetSurfaceIntegrity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::DestructibleSurface_eventGetSurfaceIntegrity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execGetSurfaceIntegrity)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSurfaceIntegrity(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function GetSurfaceIntegrity **************************

// ********** Begin Class ADestructibleSurface Function RegisterDestruction ************************
struct Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics
{
	struct DestructibleSurface_eventRegisterDestruction_Parms
	{
		FVector Location;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventRegisterDestruction_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventRegisterDestruction_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "RegisterDestruction", Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::DestructibleSurface_eventRegisterDestruction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::DestructibleSurface_eventRegisterDestruction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execRegisterDestruction)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterDestruction(Z_Param_Location,Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function RegisterDestruction **************************

// ********** Begin Class ADestructibleSurface Function RepairSurface ******************************
struct Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics
{
	struct DestructibleSurface_eventRepairSurface_Parms
	{
		float RepairAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "CPP_Default_RepairAmount", "1.000000" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::NewProp_RepairAmount = { "RepairAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleSurface_eventRepairSurface_Parms, RepairAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::NewProp_RepairAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "RepairSurface", Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::DestructibleSurface_eventRepairSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::DestructibleSurface_eventRepairSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleSurface_RepairSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_RepairSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execRepairSurface)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_RepairAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RepairSurface(Z_Param_RepairAmount);
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function RepairSurface ********************************

// ********** Begin Class ADestructibleSurface Function StartRepair ********************************
struct Z_Construct_UFunction_ADestructibleSurface_StartRepair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleSurface_StartRepair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleSurface, nullptr, "StartRepair", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleSurface_StartRepair_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleSurface_StartRepair_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructibleSurface_StartRepair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleSurface_StartRepair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleSurface::execStartRepair)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRepair();
	P_NATIVE_END;
}
// ********** End Class ADestructibleSurface Function StartRepair **********************************

// ********** Begin Class ADestructibleSurface *****************************************************
void ADestructibleSurface::StaticRegisterNativesADestructibleSurface()
{
	UClass* Class = ADestructibleSurface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamageVisuals", &ADestructibleSurface::execApplyDamageVisuals },
		{ "CanPlaceSigilAtLocation", &ADestructibleSurface::execCanPlaceSigilAtLocation },
		{ "CleanupOldDamageZones", &ADestructibleSurface::execCleanupOldDamageZones },
		{ "CompleteRepair", &ADestructibleSurface::execCompleteRepair },
		{ "GetSurfaceIntegrity", &ADestructibleSurface::execGetSurfaceIntegrity },
		{ "RegisterDestruction", &ADestructibleSurface::execRegisterDestruction },
		{ "RepairSurface", &ADestructibleSurface::execRepairSurface },
		{ "StartRepair", &ADestructibleSurface::execStartRepair },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADestructibleSurface;
UClass* ADestructibleSurface::GetPrivateStaticClass()
{
	using TClass = ADestructibleSurface;
	if (!Z_Registration_Info_UClass_ADestructibleSurface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DestructibleSurface"),
			Z_Registration_Info_UClass_ADestructibleSurface.InnerSingleton,
			StaticRegisterNativesADestructibleSurface,
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
	return Z_Registration_Info_UClass_ADestructibleSurface.InnerSingleton;
}
UClass* Z_Construct_UClass_ADestructibleSurface_NoRegister()
{
	return ADestructibleSurface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADestructibleSurface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Destruction/DestructibleSurface.h" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDamagePerLocation_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenerationTime_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairCooldown_MetaData[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedMaterial_MetaData[] = {
		{ "Category", "Destruction|Visuals" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructionEffect_MetaData[] = {
		{ "Category", "Destruction|Visuals" },
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// removed UPROPERTY()\n" },
#endif
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "removed UPROPERTY()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepairTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleSurface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDamagePerLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RegenerationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RepairCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestructionEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RepairTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADestructibleSurface_ApplyDamageVisuals, "ApplyDamageVisuals" }, // 538980997
		{ &Z_Construct_UFunction_ADestructibleSurface_CanPlaceSigilAtLocation, "CanPlaceSigilAtLocation" }, // 3608700209
		{ &Z_Construct_UFunction_ADestructibleSurface_CleanupOldDamageZones, "CleanupOldDamageZones" }, // 785228461
		{ &Z_Construct_UFunction_ADestructibleSurface_CompleteRepair, "CompleteRepair" }, // 2102055451
		{ &Z_Construct_UFunction_ADestructibleSurface_GetSurfaceIntegrity, "GetSurfaceIntegrity" }, // 2113144530
		{ &Z_Construct_UFunction_ADestructibleSurface_RegisterDestruction, "RegisterDestruction" }, // 1874046162
		{ &Z_Construct_UFunction_ADestructibleSurface_RepairSurface, "RepairSurface" }, // 1864874639
		{ &Z_Construct_UFunction_ADestructibleSurface_StartRepair, "StartRepair" }, // 3812389615
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructibleSurface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaxDamagePerLocation = { "MaxDamagePerLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, MaxDamagePerLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDamagePerLocation_MetaData), NewProp_MaxDamagePerLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RegenerationTime = { "RegenerationTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, RegenerationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenerationTime_MetaData), NewProp_RegenerationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RepairCooldown = { "RepairCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, RepairCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairCooldown_MetaData), NewProp_RepairCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_DamagedMaterial = { "DamagedMaterial", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, DamagedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedMaterial_MetaData), NewProp_DamagedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_DestructionEffect = { "DestructionEffect", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, DestructionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructionEffect_MetaData), NewProp_DestructionEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RepairTimerHandle = { "RepairTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleSurface, RepairTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepairTimerHandle_MetaData), NewProp_RepairTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructibleSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaxDamagePerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RegenerationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RepairCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_DamagedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_DestructionEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaterialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleSurface_Statics::NewProp_RepairTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleSurface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADestructibleSurface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleSurface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestructibleSurface_Statics::ClassParams = {
	&ADestructibleSurface::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADestructibleSurface_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleSurface_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleSurface_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestructibleSurface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestructibleSurface()
{
	if (!Z_Registration_Info_UClass_ADestructibleSurface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestructibleSurface.OuterSingleton, Z_Construct_UClass_ADestructibleSurface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestructibleSurface.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructibleSurface);
ADestructibleSurface::~ADestructibleSurface() {}
// ********** End Class ADestructibleSurface *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h__Script_Transfigure_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestructibleSurface, ADestructibleSurface::StaticClass, TEXT("ADestructibleSurface"), &Z_Registration_Info_UClass_ADestructibleSurface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestructibleSurface), 703165343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h__Script_Transfigure_1058678337(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleSurface_h__Script_Transfigure_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
