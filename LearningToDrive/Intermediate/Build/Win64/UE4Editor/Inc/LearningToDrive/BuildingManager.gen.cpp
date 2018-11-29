// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/BuildingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingManager() {}
// Cross Module References
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ABuildingManager_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ABuildingManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
// End Cross Module References
	void ABuildingManager::StaticRegisterNativesABuildingManager()
	{
	}
	UClass* Z_Construct_UClass_ABuildingManager_NoRegister()
	{
		return ABuildingManager::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuildingManager.h" },
		{ "ModuleRelativePath", "BuildingManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingManager_Statics::ClassParams = {
		&ABuildingManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuildingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingManager, 3969621953);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingManager(Z_Construct_UClass_ABuildingManager, &ABuildingManager::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("ABuildingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
