// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningToDrive/SpawnPassengers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnPassengers() {}
// Cross Module References
	LEARNINGTODRIVE_API UEnum* Z_Construct_UEnum_LearningToDrive_EDriectionEnum();
	UPackage* Z_Construct_UPackage__Script_LearningToDrive();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ASpawnPassengers_NoRegister();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_ASpawnPassengers();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LEARNINGTODRIVE_API UClass* Z_Construct_UClass_APassenger_NoRegister();
// End Cross Module References
	static UEnum* EDriectionEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_LearningToDrive_EDriectionEnum, Z_Construct_UPackage__Script_LearningToDrive(), TEXT("EDriectionEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDriectionEnum(EDriectionEnum_StaticEnum, TEXT("/Script/LearningToDrive"), TEXT("EDriectionEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_LearningToDrive_EDriectionEnum_CRC() { return 3776212462U; }
	UEnum* Z_Construct_UEnum_LearningToDrive_EDriectionEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_LearningToDrive();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDriectionEnum"), 0, Get_Z_Construct_UEnum_LearningToDrive_EDriectionEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDriectionEnum::North", (int64)EDriectionEnum::North },
				{ "EDriectionEnum::East", (int64)EDriectionEnum::East },
				{ "EDriectionEnum::South", (int64)EDriectionEnum::South },
				{ "EDriectionEnum::West", (int64)EDriectionEnum::West },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.DisplayName", "East" },
				{ "ModuleRelativePath", "SpawnPassengers.h" },
				{ "North.DisplayName", "North" },
				{ "South.DisplayName", "South" },
				{ "West.DisplayName", "West" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_LearningToDrive,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDriectionEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDriectionEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ASpawnPassengers::StaticRegisterNativesASpawnPassengers()
	{
	}
	UClass* Z_Construct_UClass_ASpawnPassengers_NoRegister()
	{
		return ASpawnPassengers::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnPassengers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeft_MetaData[];
#endif
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHorizontal_MetaData[];
#endif
		static void NewProp_IsHorizontal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassengerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassengerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DirectionEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirectionEnum_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnPassengers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LearningToDrive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPassengers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnPassengers.h" },
		{ "ModuleRelativePath", "SpawnPassengers.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft_MetaData[] = {
		{ "Category", "SpawnPassengers" },
		{ "ModuleRelativePath", "SpawnPassengers.h" },
	};
#endif
	void Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((ASpawnPassengers*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft = { UE4CodeGen_Private::EPropertyClass::Bool, "IsLeft", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpawnPassengers), &Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal_MetaData[] = {
		{ "Category", "SpawnPassengers" },
		{ "ModuleRelativePath", "SpawnPassengers.h" },
	};
#endif
	void Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal_SetBit(void* Obj)
	{
		((ASpawnPassengers*)Obj)->IsHorizontal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal = { UE4CodeGen_Private::EPropertyClass::Bool, "IsHorizontal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASpawnPassengers), &Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_PassengerClass_MetaData[] = {
		{ "Category", "Passenger" },
		{ "ModuleRelativePath", "SpawnPassengers.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_PassengerClass = { UE4CodeGen_Private::EPropertyClass::Class, "PassengerClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010001, 1, nullptr, STRUCT_OFFSET(ASpawnPassengers, PassengerClass), Z_Construct_UClass_APassenger_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_PassengerClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_PassengerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "SpawnPassengers.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum = { UE4CodeGen_Private::EPropertyClass::Enum, "DirectionEnum", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ASpawnPassengers, DirectionEnum), Z_Construct_UEnum_LearningToDrive_EDriectionEnum, METADATA_PARAMS(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnPassengers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_IsHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_PassengerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnPassengers_Statics::NewProp_DirectionEnum_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnPassengers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnPassengers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnPassengers_Statics::ClassParams = {
		&ASpawnPassengers::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASpawnPassengers_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnPassengers_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnPassengers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnPassengers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnPassengers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnPassengers, 2360923773);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnPassengers(Z_Construct_UClass_ASpawnPassengers, &ASpawnPassengers::StaticClass, TEXT("/Script/LearningToDrive"), TEXT("ASpawnPassengers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnPassengers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
