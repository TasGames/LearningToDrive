// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGTODRIVE_SpawnPassengers_generated_h
#error "SpawnPassengers.generated.h already included, missing '#pragma once' in SpawnPassengers.h"
#endif
#define LEARNINGTODRIVE_SpawnPassengers_generated_h

#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_RPC_WRAPPERS
#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnPassengers(); \
	friend struct Z_Construct_UClass_ASpawnPassengers_Statics; \
public: \
	DECLARE_CLASS(ASpawnPassengers, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPassengers)


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_INCLASS \
private: \
	static void StaticRegisterNativesASpawnPassengers(); \
	friend struct Z_Construct_UClass_ASpawnPassengers_Statics; \
public: \
	DECLARE_CLASS(ASpawnPassengers, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(ASpawnPassengers)


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnPassengers(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnPassengers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPassengers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPassengers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPassengers(ASpawnPassengers&&); \
	NO_API ASpawnPassengers(const ASpawnPassengers&); \
public:


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnPassengers(ASpawnPassengers&&); \
	NO_API ASpawnPassengers(const ASpawnPassengers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnPassengers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnPassengers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnPassengers)


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DirectionEnum() { return STRUCT_OFFSET(ASpawnPassengers, DirectionEnum); } \
	FORCEINLINE static uint32 __PPO__PassengerClass() { return STRUCT_OFFSET(ASpawnPassengers, PassengerClass); } \
	FORCEINLINE static uint32 __PPO__IsHorizontal() { return STRUCT_OFFSET(ASpawnPassengers, IsHorizontal); } \
	FORCEINLINE static uint32 __PPO__IsLeft() { return STRUCT_OFFSET(ASpawnPassengers, IsLeft); }


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_18_PROLOG
#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_RPC_WRAPPERS \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_INCLASS \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_INCLASS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_SpawnPassengers_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearningToDrive_Source_LearningToDrive_SpawnPassengers_h


#define FOREACH_ENUM_EDRIECTIONENUM(op) \
	op(EDriectionEnum::North) \
	op(EDriectionEnum::East) \
	op(EDriectionEnum::South) \
	op(EDriectionEnum::West) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
