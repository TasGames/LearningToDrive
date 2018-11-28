// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/SpawnBuildings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnBuildings() {}
// Cross Module References
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ASpawnBuildings_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ASpawnBuildings();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
// End Cross Module References
	void ASpawnBuildings::StaticRegisterNativesASpawnBuildings()
	{
	}
	UClass* Z_Construct_UClass_ASpawnBuildings_NoRegister()
	{
		return ASpawnBuildings::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnBuildings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnBuildings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuildings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnBuildings.h" },
		{ "ModuleRelativePath", "SpawnBuildings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnBuildings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnBuildings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnBuildings_Statics::ClassParams = {
		&ASpawnBuildings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnBuildings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuildings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnBuildings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnBuildings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnBuildings, 2647529312);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnBuildings(Z_Construct_UClass_ASpawnBuildings, &ASpawnBuildings::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("ASpawnBuildings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnBuildings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
