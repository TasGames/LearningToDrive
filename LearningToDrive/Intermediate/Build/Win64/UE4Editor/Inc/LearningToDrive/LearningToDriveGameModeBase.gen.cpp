// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/LearningToDriveGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningToDriveGameModeBase() {}
// Cross Module References
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ALearningToDriveGameModeBase_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ALearningToDriveGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
// End Cross Module References
	void ALearningToDriveGameModeBase::StaticRegisterNativesALearningToDriveGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ALearningToDriveGameModeBase_NoRegister()
	{
		return ALearningToDriveGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALearningToDriveGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LearningToDriveGameModeBase.h" },
		{ "ModuleRelativePath", "LearningToDriveGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALearningToDriveGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::ClassParams = {
		&ALearningToDriveGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALearningToDriveGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALearningToDriveGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALearningToDriveGameModeBase, 3197802538);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALearningToDriveGameModeBase(Z_Construct_UClass_ALearningToDriveGameModeBase, &ALearningToDriveGameModeBase::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("ALearningToDriveGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALearningToDriveGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
