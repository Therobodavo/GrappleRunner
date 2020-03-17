// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrappleRunner/GrappleRunnerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleRunnerGameMode() {}
// Cross Module References
	GRAPPLERUNNER_API UClass* Z_Construct_UClass_AGrappleRunnerGameMode_NoRegister();
	GRAPPLERUNNER_API UClass* Z_Construct_UClass_AGrappleRunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrappleRunner();
// End Cross Module References
	void AGrappleRunnerGameMode::StaticRegisterNativesAGrappleRunnerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGrappleRunnerGameMode_NoRegister()
	{
		return AGrappleRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGrappleRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrappleRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GrappleRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrappleRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GrappleRunnerGameMode.h" },
		{ "ModuleRelativePath", "GrappleRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrappleRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrappleRunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrappleRunnerGameMode_Statics::ClassParams = {
		&AGrappleRunnerGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGrappleRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrappleRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrappleRunnerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrappleRunnerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrappleRunnerGameMode, 3276787309);
	template<> GRAPPLERUNNER_API UClass* StaticClass<AGrappleRunnerGameMode>()
	{
		return AGrappleRunnerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrappleRunnerGameMode(Z_Construct_UClass_AGrappleRunnerGameMode, &AGrappleRunnerGameMode::StaticClass, TEXT("/Script/GrappleRunner"), TEXT("AGrappleRunnerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrappleRunnerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
