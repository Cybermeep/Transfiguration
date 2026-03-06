// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transfiguration/TransfigurationTypes.h"

#ifdef TRANSFIGURE_TransfigurationTypes_generated_h
#error "TransfigurationTypes.generated.h already included, missing '#pragma once' in TransfigurationTypes.h"
#endif
#define TRANSFIGURE_TransfigurationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSigilComboRecipe *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSigilComboRecipe_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FSigilComboRecipe;
// ********** End ScriptStruct FSigilComboRecipe ***************************************************

// ********** Begin ScriptStruct FComboChainRecipe *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboChainRecipe_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FComboChainRecipe;
// ********** End ScriptStruct FComboChainRecipe ***************************************************

// ********** Begin ScriptStruct FActiveComboChain *************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveComboChain_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FActiveComboChain;
// ********** End ScriptStruct FActiveComboChain ***************************************************

// ********** Begin ScriptStruct FPortalPair *******************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPortalPair_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FPortalPair;
// ********** End ScriptStruct FPortalPair *********************************************************

// ********** Begin ScriptStruct FEnemySpawnPoint **************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemySpawnPoint_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FEnemySpawnPoint;
// ********** End ScriptStruct FEnemySpawnPoint ****************************************************

// ********** Begin ScriptStruct FGrappleLineData **************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrappleLineData_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FGrappleLineData;
// ********** End ScriptStruct FGrappleLineData ****************************************************

// ********** Begin ScriptStruct FCombatGrappleData ************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatGrappleData_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FCombatGrappleData;
// ********** End ScriptStruct FCombatGrappleData **************************************************

// ********** Begin ScriptStruct FEnemyPoolEntry ***************************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyPoolEntry_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FEnemyPoolEntry;
// ********** End ScriptStruct FEnemyPoolEntry *****************************************************

// ********** Begin ScriptStruct FDestructionRequest ***********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDestructionRequest_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FDestructionRequest;
// ********** End ScriptStruct FDestructionRequest *************************************************

// ********** Begin ScriptStruct FChunkGenerationTask **********************************************
#define FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChunkGenerationTask_Statics; \
	TRANSFIGURE_API static class UScriptStruct* StaticStruct();


struct FChunkGenerationTask;
// ********** End ScriptStruct FChunkGenerationTask ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lynette_Desktop_Unreal_Projects_Transfigure_Source_Transfigure_Transfiguration_TransfigurationTypes_h

// ********** Begin Enum ETransfigurationElement ***************************************************
#define FOREACH_ENUM_ETRANSFIGURATIONELEMENT(op) \
	op(ETransfigurationElement::Fire) \
	op(ETransfigurationElement::Ice) \
	op(ETransfigurationElement::Lightning) \
	op(ETransfigurationElement::Arcane) \
	op(ETransfigurationElement::Earth) \
	op(ETransfigurationElement::Void) 

enum class ETransfigurationElement : uint8;
template<> struct TIsUEnumClass<ETransfigurationElement> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<ETransfigurationElement>();
// ********** End Enum ETransfigurationElement *****************************************************

// ********** Begin Enum ESigilTriggerType *********************************************************
#define FOREACH_ENUM_ESIGILTRIGGERTYPE(op) \
	op(ESigilTriggerType::Manual) \
	op(ESigilTriggerType::ProximityEnemy) \
	op(ESigilTriggerType::ProximityAny) \
	op(ESigilTriggerType::TimedAuto) \
	op(ESigilTriggerType::Stepped) 

enum class ESigilTriggerType : uint8;
template<> struct TIsUEnumClass<ESigilTriggerType> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<ESigilTriggerType>();
// ********** End Enum ESigilTriggerType ***********************************************************

// ********** Begin Enum ECastingState *************************************************************
#define FOREACH_ENUM_ECASTINGSTATE(op) \
	op(ECastingState::Idle) \
	op(ECastingState::Drawing) \
	op(ECastingState::Placing) \
	op(ECastingState::Triggering) 

enum class ECastingState : uint8;
template<> struct TIsUEnumClass<ECastingState> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<ECastingState>();
// ********** End Enum ECastingState ***************************************************************

// ********** Begin Enum EBuffType *****************************************************************
#define FOREACH_ENUM_EBUFFTYPE(op) \
	op(EBuffType::Speed) \
	op(EBuffType::Damage) \
	op(EBuffType::Defense) \
	op(EBuffType::Jump) 

enum class EBuffType : uint8;
template<> struct TIsUEnumClass<EBuffType> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EBuffType>();
// ********** End Enum EBuffType *******************************************************************

// ********** Begin Enum EPortalType ***************************************************************
#define FOREACH_ENUM_EPORTALTYPE(op) \
	op(EPortalType::Static) \
	op(EPortalType::Mobile) \
	op(EPortalType::OneWay) \
	op(EPortalType::TwoWay) \
	op(EPortalType::Networked) 

enum class EPortalType : uint8;
template<> struct TIsUEnumClass<EPortalType> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EPortalType>();
// ********** End Enum EPortalType *****************************************************************

// ********** Begin Enum EPortalActivation *********************************************************
#define FOREACH_ENUM_EPORTALACTIVATION(op) \
	op(EPortalActivation::Immediate) \
	op(EPortalActivation::Delayed) \
	op(EPortalActivation::Conditional) \
	op(EPortalActivation::Charged) 

enum class EPortalActivation : uint8;
template<> struct TIsUEnumClass<EPortalActivation> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EPortalActivation>();
// ********** End Enum EPortalActivation ***********************************************************

// ********** Begin Enum EPodState *****************************************************************
#define FOREACH_ENUM_EPODSTATE(op) \
	op(EPodState::Inactive) \
	op(EPodState::Spawning) \
	op(EPodState::Active) \
	op(EPodState::Defeated) \
	op(EPodState::Reinforcing) 

enum class EPodState : uint8;
template<> struct TIsUEnumClass<EPodState> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EPodState>();
// ********** End Enum EPodState *******************************************************************

// ********** Begin Enum EGrappleType **************************************************************
#define FOREACH_ENUM_EGRAPPLETYPE(op) \
	op(EGrappleType::Swing) \
	op(EGrappleType::Combat) \
	op(EGrappleType::WebLine) \
	op(EGrappleType::ElementalTrail) 

enum class EGrappleType : uint8;
template<> struct TIsUEnumClass<EGrappleType> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleType>();
// ********** End Enum EGrappleType ****************************************************************

// ********** Begin Enum EGrappleState *************************************************************
#define FOREACH_ENUM_EGRAPPLESTATE(op) \
	op(EGrappleState::Inactive) \
	op(EGrappleState::Aiming) \
	op(EGrappleState::Swinging) \
	op(EGrappleState::CombatGrapple) \
	op(EGrappleState::WebBuilding) 

enum class EGrappleState : uint8;
template<> struct TIsUEnumClass<EGrappleState> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleState>();
// ********** End Enum EGrappleState ***************************************************************

// ********** Begin Enum EGrappleTier **************************************************************
#define FOREACH_ENUM_EGRAPPLETIER(op) \
	op(EGrappleTier::None) \
	op(EGrappleTier::Strand) \
	op(EGrappleTier::Thread) \
	op(EGrappleTier::Cord) \
	op(EGrappleTier::Rope) \
	op(EGrappleTier::Web) \
	op(EGrappleTier::Nexus) 

enum class EGrappleTier : uint8;
template<> struct TIsUEnumClass<EGrappleTier> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<EGrappleTier>();
// ********** End Enum EGrappleTier ****************************************************************

// ********** Begin Enum ECombatGrappleMove ********************************************************
#define FOREACH_ENUM_ECOMBATGRAPPLEMOVE(op) \
	op(ECombatGrappleMove::Kick) \
	op(ECombatGrappleMove::Slam) \
	op(ECombatGrappleMove::Toss) \
	op(ECombatGrappleMove::Evade) \
	op(ECombatGrappleMove::Pull) \
	op(ECombatGrappleMove::WebTrap) 

enum class ECombatGrappleMove : uint8;
template<> struct TIsUEnumClass<ECombatGrappleMove> { enum { Value = true }; };
template<> TRANSFIGURE_API UEnum* StaticEnum<ECombatGrappleMove>();
// ********** End Enum ECombatGrappleMove **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
