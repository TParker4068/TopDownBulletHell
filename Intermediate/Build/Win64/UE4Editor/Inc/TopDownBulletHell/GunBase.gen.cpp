// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownBulletHell/Weapons/Guns/GunBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunBase() {}
// Cross Module References
	TOPDOWNBULLETHELL_API UClass* Z_Construct_UClass_AGunBase_NoRegister();
	TOPDOWNBULLETHELL_API UClass* Z_Construct_UClass_AGunBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TopDownBulletHell();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AGunBase::StaticRegisterNativesAGunBase()
	{
	}
	UClass* Z_Construct_UClass_AGunBase_NoRegister()
	{
		return AGunBase::StaticClass();
	}
	struct Z_Construct_UClass_AGunBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunFireFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunFireFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownBulletHell,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/Guns/GunBase.h" },
		{ "ModuleRelativePath", "Weapons/Guns/GunBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBase_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Shooting" },
		{ "Comment", "//Seconds between shots\n" },
		{ "ModuleRelativePath", "Weapons/Guns/GunBase.h" },
		{ "ToolTip", "Seconds between shots" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGunBase_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunBase, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_AGunBase_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunBase_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBase_Statics::NewProp_GunFireFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Weapons/Guns/GunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunBase_Statics::NewProp_GunFireFX = { "GunFireFX", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunBase, GunFireFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunBase_Statics::NewProp_GunFireFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunBase_Statics::NewProp_GunFireFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunBase_Statics::NewProp_FiringSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "//Effects\n" },
		{ "ModuleRelativePath", "Weapons/Guns/GunBase.h" },
		{ "ToolTip", "Effects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGunBase_Statics::NewProp_FiringSound = { "FiringSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGunBase, FiringSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGunBase_Statics::NewProp_FiringSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGunBase_Statics::NewProp_FiringSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGunBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunBase_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunBase_Statics::NewProp_GunFireFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGunBase_Statics::NewProp_FiringSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGunBase_Statics::ClassParams = {
		&AGunBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGunBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGunBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGunBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunBase, 3500600211);
	template<> TOPDOWNBULLETHELL_API UClass* StaticClass<AGunBase>()
	{
		return AGunBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunBase(Z_Construct_UClass_AGunBase, &AGunBase::StaticClass, TEXT("/Script/TopDownBulletHell"), TEXT("AGunBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
