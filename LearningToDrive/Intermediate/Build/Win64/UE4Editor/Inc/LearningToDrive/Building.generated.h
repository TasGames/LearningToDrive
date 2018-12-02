// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef LEARNINGTODRIVE_Building_generated_h
#error "Building.generated.h already included, missing '#pragma once' in Building.h"
#endif
#define LEARNINGTODRIVE_Building_generated_h

#define LearningToDrive_Source_LearningToDrive_Building_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LearningToDrive_Source_LearningToDrive_Building_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define LearningToDrive_Source_LearningToDrive_Building_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuilding(); \
	friend struct Z_Construct_UClass_ABuilding_Statics; \
public: \
	DECLARE_CLASS(ABuilding, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(ABuilding)


#define LearningToDrive_Source_LearningToDrive_Building_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABuilding(); \
	friend struct Z_Construct_UClass_ABuilding_Statics; \
public: \
	DECLARE_CLASS(ABuilding, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(ABuilding)


#define LearningToDrive_Source_LearningToDrive_Building_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuilding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuilding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilding(ABuilding&&); \
	NO_API ABuilding(const ABuilding&); \
public:


#define LearningToDrive_Source_LearningToDrive_Building_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuilding(ABuilding&&); \
	NO_API ABuilding(const ABuilding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuilding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuilding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuilding)


#define LearningToDrive_Source_LearningToDrive_Building_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SMComponent() { return STRUCT_OFFSET(ABuilding, SMComponent); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(ABuilding, BoxComponent); }


#define LearningToDrive_Source_LearningToDrive_Building_h_9_PROLOG
#define LearningToDrive_Source_LearningToDrive_Building_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_Building_h_12_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_Building_h_12_RPC_WRAPPERS \
	LearningToDrive_Source_LearningToDrive_Building_h_12_INCLASS \
	LearningToDrive_Source_LearningToDrive_Building_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearningToDrive_Source_LearningToDrive_Building_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_Building_h_12_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_Building_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_Building_h_12_INCLASS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_Building_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearningToDrive_Source_LearningToDrive_Building_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
