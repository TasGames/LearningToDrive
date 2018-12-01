// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/Passenger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePassenger() {}
// Cross Module References
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_APassenger_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_APassenger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APassenger::StaticRegisterNativesAPassenger()
	{
	}
	UClass* Z_Construct_UClass_APassenger_NoRegister()
	{
		return APassenger::StaticClass();
	}
	struct Z_Construct_UClass_APassenger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APassenger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APassenger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Passenger.h" },
		{ "ModuleRelativePath", "Passenger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APassenger_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Passenger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Passenger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APassenger_Statics::NewProp_BoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(APassenger, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APassenger_Statics::NewProp_BoxComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APassenger_Statics::NewProp_BoxComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APassenger_Statics::NewProp_SMComponent_MetaData[] = {
		{ "Category", "Passenger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Passenger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APassenger_Statics::NewProp_SMComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SMComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(APassenger, SMComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APassenger_Statics::NewProp_SMComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APassenger_Statics::NewProp_SMComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APassenger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APassenger_Statics::NewProp_BoxComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APassenger_Statics::NewProp_SMComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APassenger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APassenger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APassenger_Statics::ClassParams = {
		&APassenger::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APassenger_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APassenger_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APassenger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APassenger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APassenger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APassenger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APassenger, 2889397389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APassenger(Z_Construct_UClass_APassenger, &APassenger::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("APassenger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APassenger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
