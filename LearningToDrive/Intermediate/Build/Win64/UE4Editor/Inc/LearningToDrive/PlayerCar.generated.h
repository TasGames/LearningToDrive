// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGTODRIVE_PlayerCar_generated_h
#error "PlayerCar.generated.h already included, missing '#pragma once' in PlayerCar.h"
#endif
#define LEARNINGTODRIVE_PlayerCar_generated_h

#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_RPC_WRAPPERS \
	virtual void Win_Implementation(); \
 \
	DECLARE_FUNCTION(execPauseIt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseIt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Win_Implementation(); \
		P_NATIVE_END; \
	}


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Win_Implementation(); \
 \
	DECLARE_FUNCTION(execPauseIt) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PauseIt(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Win_Implementation(); \
		P_NATIVE_END; \
	}


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_EVENT_PARMS
#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_CALLBACK_WRAPPERS
#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCar(); \
	friend struct Z_Construct_UClass_APlayerCar_Statics; \
public: \
	DECLARE_CLASS(APlayerCar, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(APlayerCar)


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCar(); \
	friend struct Z_Construct_UClass_APlayerCar_Statics; \
public: \
	DECLARE_CLASS(APlayerCar, AWheeledVehicle, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LearningToDrive"), NO_API) \
	DECLARE_SERIALIZER(APlayerCar)


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCar(APlayerCar&&); \
	NO_API APlayerCar(const APlayerCar&); \
public:


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCar(APlayerCar&&); \
	NO_API APlayerCar(const APlayerCar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCar)


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerCar, Camera); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayerCar, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Arrow() { return STRUCT_OFFSET(APlayerCar, Arrow); } \
	FORCEINLINE static uint32 __PPO__SM_Driver() { return STRUCT_OFFSET(APlayerCar, SM_Driver); } \
	FORCEINLINE static uint32 __PPO__SM_Passenger() { return STRUCT_OFFSET(APlayerCar, SM_Passenger); } \
	FORCEINLINE static uint32 __PPO__B() { return STRUCT_OFFSET(APlayerCar, B); } \
	FORCEINLINE static uint32 __PPO__Micro() { return STRUCT_OFFSET(APlayerCar, Micro); } \
	FORCEINLINE static uint32 __PPO__Seconds() { return STRUCT_OFFSET(APlayerCar, Seconds); } \
	FORCEINLINE static uint32 __PPO__Minutes() { return STRUCT_OFFSET(APlayerCar, Minutes); }


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_9_PROLOG \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_EVENT_PARMS


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_RPC_WRAPPERS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_CALLBACK_WRAPPERS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_INCLASS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_PRIVATE_PROPERTY_OFFSET \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_CALLBACK_WRAPPERS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_INCLASS_NO_PURE_DECLS \
	LearningToDrive_Source_LearningToDrive_PlayerCar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LearningToDrive_Source_LearningToDrive_PlayerCar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
