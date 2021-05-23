// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownBulletHell/TopDownBulletHellGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownBulletHellGameModeBase() {}
// Cross Module References
	TOPDOWNBULLETHELL_API UClass* Z_Construct_UClass_ATopDownBulletHellGameModeBase_NoRegister();
	TOPDOWNBULLETHELL_API UClass* Z_Construct_UClass_ATopDownBulletHellGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TopDownBulletHell();
// End Cross Module References
	void ATopDownBulletHellGameModeBase::StaticRegisterNativesATopDownBulletHellGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATopDownBulletHellGameModeBase_NoRegister()
	{
		return ATopDownBulletHellGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownBulletHell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TopDownBulletHellGameModeBase.h" },
		{ "ModuleRelativePath", "TopDownBulletHellGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownBulletHellGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::ClassParams = {
		&ATopDownBulletHellGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATopDownBulletHellGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATopDownBulletHellGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATopDownBulletHellGameModeBase, 2336617211);
	template<> TOPDOWNBULLETHELL_API UClass* StaticClass<ATopDownBulletHellGameModeBase>()
	{
		return ATopDownBulletHellGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATopDownBulletHellGameModeBase(Z_Construct_UClass_ATopDownBulletHellGameModeBase, &ATopDownBulletHellGameModeBase::StaticClass, TEXT("/Script/TopDownBulletHell"), TEXT("ATopDownBulletHellGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownBulletHellGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
