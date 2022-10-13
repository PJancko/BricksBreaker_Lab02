// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BricksBreaker_Lab02/Paddle_Player_Controler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddle_Player_Controler() {}
// Cross Module References
	BRICKSBREAKER_LAB02_API UClass* Z_Construct_UClass_APaddle_Player_Controler_NoRegister();
	BRICKSBREAKER_LAB02_API UClass* Z_Construct_UClass_APaddle_Player_Controler();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BricksBreaker_Lab02();
// End Cross Module References
	DEFINE_FUNCTION(APaddle_Player_Controler::execSetupInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupInputComponent();
		P_NATIVE_END;
	}
	void APaddle_Player_Controler::StaticRegisterNativesAPaddle_Player_Controler()
	{
		UClass* Class = APaddle_Player_Controler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupInputComponent", &APaddle_Player_Controler::execSetupInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Paddle_Player_Controler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APaddle_Player_Controler, nullptr, "SetupInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APaddle_Player_Controler_NoRegister()
	{
		return APaddle_Player_Controler::StaticClass();
	}
	struct Z_Construct_UClass_APaddle_Player_Controler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaddle_Player_Controler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BricksBreaker_Lab02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APaddle_Player_Controler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APaddle_Player_Controler_SetupInputComponent, "SetupInputComponent" }, // 3904521192
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaddle_Player_Controler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//class ABall\n" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Paddle_Player_Controler.h" },
		{ "ModuleRelativePath", "Paddle_Player_Controler.h" },
		{ "ToolTip", "class ABall" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaddle_Player_Controler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddle_Player_Controler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaddle_Player_Controler_Statics::ClassParams = {
		&APaddle_Player_Controler::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaddle_Player_Controler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaddle_Player_Controler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaddle_Player_Controler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaddle_Player_Controler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaddle_Player_Controler, 106353350);
	template<> BRICKSBREAKER_LAB02_API UClass* StaticClass<APaddle_Player_Controler>()
	{
		return APaddle_Player_Controler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaddle_Player_Controler(Z_Construct_UClass_APaddle_Player_Controler, &APaddle_Player_Controler::StaticClass, TEXT("/Script/BricksBreaker_Lab02"), TEXT("APaddle_Player_Controler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaddle_Player_Controler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
