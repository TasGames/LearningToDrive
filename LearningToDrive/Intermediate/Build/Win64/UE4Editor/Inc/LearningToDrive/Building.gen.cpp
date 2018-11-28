// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/Building.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilding() {}
// Cross Module References
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ABuilding_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ABuilding();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABuilding::StaticRegisterNativesABuilding()
	{
	}
	UClass* Z_Construct_UClass_ABuilding_NoRegister()
	{
		return ABuilding::StaticClass();
	}
	struct Z_Construct_UClass_ABuilding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Building.h" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilding_Statics::NewProp_SMComponent_MetaData[] = {
		{ "Category", "Building" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Building.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilding_Statics::NewProp_SMComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SMComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ABuilding, SMComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::NewProp_SMComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::NewProp_SMComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilding_Statics::NewProp_SMComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilding_Statics::ClassParams = {
		&ABuilding::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABuilding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABuilding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilding, 2433788641);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilding(Z_Construct_UClass_ABuilding, &ABuilding::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("ABuilding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
