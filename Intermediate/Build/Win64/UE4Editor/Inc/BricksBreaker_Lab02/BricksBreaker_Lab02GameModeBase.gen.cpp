// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker_Lab02/BricksBreaker_Lab02GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBricksBreaker_Lab02GameModeBase() {}
// Cross Module References
	BRICKSBREAKER_LAB02_API UClass* Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_NoRegister();
	BRICKSBREAKER_LAB02_API UClass* Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker_Lab02();
// End Cross Module References
	void ABricksBreaker_Lab02GameModeBase::StaticRegisterNativesABricksBreaker_Lab02GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_NoRegister()
	{
		return ABricksBreaker_Lab02GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker_Lab02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BricksBreaker_Lab02GameModeBase.h" },
		{ "ModuleRelativePath", "BricksBreaker_Lab02GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABricksBreaker_Lab02GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::ClassParams = {
		&ABricksBreaker_Lab02GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABricksBreaker_Lab02GameModeBase, 2259846889);
	template<> BRICKSBREAKER_LAB02_API UClass* StaticClass<ABricksBreaker_Lab02GameModeBase>()
	{
		return ABricksBreaker_Lab02GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABricksBreaker_Lab02GameModeBase(Z_Construct_UClass_ABricksBreaker_Lab02GameModeBase, &ABricksBreaker_Lab02GameModeBase::StaticClass, TEXT("/Script/BricksBreaker_Lab02"), TEXT("ABricksBreaker_Lab02GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABricksBreaker_Lab02GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
