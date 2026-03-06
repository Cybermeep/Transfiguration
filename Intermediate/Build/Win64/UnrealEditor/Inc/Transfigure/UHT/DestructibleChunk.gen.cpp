// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestructibleChunk.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDestructibleChunk() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleChunk();
TRANSFIGURE_API UClass* Z_Construct_UClass_ADestructibleChunk_NoRegister();
TRANSFIGURE_API UScriptStruct* Z_Construct_UScriptStruct_FChunkCollisionData();
UPackage* Z_Construct_UPackage__Script_Transfigure();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FChunkCollisionData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChunkCollisionData;
class UScriptStruct* FChunkCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChunkCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChunkCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChunkCollisionData, (UObject*)Z_Construct_UPackage__Script_Transfigure(), TEXT("ChunkCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_FChunkCollisionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FChunkCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UVs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChunkCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkCollisionData, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkCollisionData, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkCollisionData, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChunkCollisionData, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVs_MetaData), NewProp_UVs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChunkCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_UVs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewProp_UVs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChunkCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
	nullptr,
	&NewStructOps,
	"ChunkCollisionData",
	Z_Construct_UScriptStruct_FChunkCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkCollisionData_Statics::PropPointers),
	sizeof(FChunkCollisionData),
	alignof(FChunkCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChunkCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChunkCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChunkCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_FChunkCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChunkCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FChunkCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FChunkCollisionData.InnerSingleton;
}
// ********** End ScriptStruct FChunkCollisionData *************************************************

// ********** Begin Class ADestructibleChunk Function ApplyDamage **********************************
struct Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics
{
	struct DestructibleChunk_eventApplyDamage_Parms
	{
		FVector HitLocation;
		float DamageRadius;
		float DamageForce;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageForce;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventApplyDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_DamageRadius = { "DamageRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventApplyDamage_Parms, DamageRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_DamageForce = { "DamageForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventApplyDamage_Parms, DamageForce), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DestructibleChunk_eventApplyDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DestructibleChunk_eventApplyDamage_Parms), &Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_DamageRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_DamageForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "ApplyDamage", Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::DestructibleChunk_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::DestructibleChunk_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleChunk_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execApplyDamage)
{
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyDamage(Z_Param_HitLocation,Z_Param_DamageRadius,Z_Param_DamageForce);
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function ApplyDamage ************************************

// ********** Begin Class ADestructibleChunk Function ApplyPhysics *********************************
struct Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics
{
	struct DestructibleChunk_eventApplyPhysics_Parms
	{
		FVector Force;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventApplyPhysics_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventApplyPhysics_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "ApplyPhysics", Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::DestructibleChunk_eventApplyPhysics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::DestructibleChunk_eventApplyPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execApplyPhysics)
{
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyPhysics(Z_Param_Force,Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function ApplyPhysics ***********************************

// ********** Begin Class ADestructibleChunk Function GetCollisionData *****************************
struct Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics
{
	struct DestructibleChunk_eventGetCollisionData_Parms
	{
		FChunkCollisionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventGetCollisionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FChunkCollisionData, METADATA_PARAMS(0, nullptr) }; // 3331794855
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "GetCollisionData", Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::DestructibleChunk_eventGetCollisionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::DestructibleChunk_eventGetCollisionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleChunk_GetCollisionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_GetCollisionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execGetCollisionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FChunkCollisionData*)Z_Param__Result=P_THIS->GetCollisionData();
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function GetCollisionData *******************************

// ********** Begin Class ADestructibleChunk Function InitializeFromMesh ***************************
struct Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics
{
	struct DestructibleChunk_eventInitializeFromMesh_Parms
	{
		UProceduralMeshComponent* SourceMesh;
		int32 SectionIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventInitializeFromMesh_Parms, SourceMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DestructibleChunk_eventInitializeFromMesh_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::NewProp_SectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "InitializeFromMesh", Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::DestructibleChunk_eventInitializeFromMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::DestructibleChunk_eventInitializeFromMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execInitializeFromMesh)
{
	P_GET_OBJECT(UProceduralMeshComponent,Z_Param_SourceMesh);
	P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromMesh(Z_Param_SourceMesh,Z_Param_SectionIndex);
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function InitializeFromMesh *****************************

// ********** Begin Class ADestructibleChunk Function IsValid **************************************
struct Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics
{
	struct DestructibleChunk_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Destruction" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DestructibleChunk_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DestructibleChunk_eventIsValid_Parms), &Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "IsValid", Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::DestructibleChunk_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::DestructibleChunk_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADestructibleChunk_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function IsValid ****************************************

// ********** Begin Class ADestructibleChunk Function OnPhysicsSleep *******************************
struct Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADestructibleChunk, nullptr, "OnPhysicsSleep", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADestructibleChunk::execOnPhysicsSleep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhysicsSleep();
	P_NATIVE_END;
}
// ********** End Class ADestructibleChunk Function OnPhysicsSleep *********************************

// ********** Begin Class ADestructibleChunk *******************************************************
void ADestructibleChunk::StaticRegisterNativesADestructibleChunk()
{
	UClass* Class = ADestructibleChunk::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &ADestructibleChunk::execApplyDamage },
		{ "ApplyPhysics", &ADestructibleChunk::execApplyPhysics },
		{ "GetCollisionData", &ADestructibleChunk::execGetCollisionData },
		{ "InitializeFromMesh", &ADestructibleChunk::execInitializeFromMesh },
		{ "IsValid", &ADestructibleChunk::execIsValid },
		{ "OnPhysicsSleep", &ADestructibleChunk::execOnPhysicsSleep },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADestructibleChunk;
UClass* ADestructibleChunk::GetPrivateStaticClass()
{
	using TClass = ADestructibleChunk;
	if (!Z_Registration_Info_UClass_ADestructibleChunk.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DestructibleChunk"),
			Z_Registration_Info_UClass_ADestructibleChunk.InnerSingleton,
			StaticRegisterNativesADestructibleChunk,
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
	return Z_Registration_Info_UClass_ADestructibleChunk.InnerSingleton;
}
UClass* Z_Construct_UClass_ADestructibleChunk_NoRegister()
{
	return ADestructibleChunk::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADestructibleChunk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Destruction/DestructibleChunk.h" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "DestructibleChunk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionData_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRotation_MetaData[] = {
		{ "ModuleRelativePath", "Destruction/DestructibleChunk.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionData;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADestructibleChunk_ApplyDamage, "ApplyDamage" }, // 4173183137
		{ &Z_Construct_UFunction_ADestructibleChunk_ApplyPhysics, "ApplyPhysics" }, // 2993737377
		{ &Z_Construct_UFunction_ADestructibleChunk_GetCollisionData, "GetCollisionData" }, // 670064280
		{ &Z_Construct_UFunction_ADestructibleChunk_InitializeFromMesh, "InitializeFromMesh" }, // 3697678396
		{ &Z_Construct_UFunction_ADestructibleChunk_IsValid, "IsValid" }, // 2601822006
		{ &Z_Construct_UFunction_ADestructibleChunk_OnPhysicsSleep, "OnPhysicsSleep" }, // 3947418191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructibleChunk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleChunk, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMesh_MetaData), NewProp_ProceduralMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_CollisionData = { "CollisionData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleChunk, CollisionData), Z_Construct_UScriptStruct_FChunkCollisionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionData_MetaData), NewProp_CollisionData_MetaData) }; // 3331794855
void Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((ADestructibleChunk*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADestructibleChunk), &Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleChunk, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mass_MetaData), NewProp_Mass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleChunk, InitialPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPosition_MetaData), NewProp_InitialPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_InitialRotation = { "InitialRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADestructibleChunk, InitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRotation_MetaData), NewProp_InitialRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructibleChunk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_ProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_CollisionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_Mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_InitialPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructibleChunk_Statics::NewProp_InitialRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleChunk_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADestructibleChunk_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Transfigure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleChunk_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestructibleChunk_Statics::ClassParams = {
	&ADestructibleChunk::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADestructibleChunk_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleChunk_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructibleChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestructibleChunk_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestructibleChunk()
{
	if (!Z_Registration_Info_UClass_ADestructibleChunk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestructibleChunk.OuterSingleton, Z_Construct_UClass_ADestructibleChunk_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestructibleChunk.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructibleChunk);
ADestructibleChunk::~ADestructibleChunk() {}
// ********** End Class ADestructibleChunk *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChunkCollisionData::StaticStruct, Z_Construct_UScriptStruct_FChunkCollisionData_Statics::NewStructOps, TEXT("ChunkCollisionData"), &Z_Registration_Info_UScriptStruct_FChunkCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChunkCollisionData), 3331794855U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestructibleChunk, ADestructibleChunk::StaticClass, TEXT("ADestructibleChunk"), &Z_Registration_Info_UClass_ADestructibleChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestructibleChunk), 2981312041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_1205718163(TEXT("/Script/Transfigure"),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Destruction_DestructibleChunk_h__Script_Transfigure_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
