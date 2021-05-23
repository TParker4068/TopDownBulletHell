// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNBULLETHELL_GunBase_generated_h
#error "GunBase.generated.h already included, missing '#pragma once' in GunBase.h"
#endif
#define TOPDOWNBULLETHELL_GunBase_generated_h

#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_SPARSE_DATA
#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_RPC_WRAPPERS
#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunBase(); \
	friend struct Z_Construct_UClass_AGunBase_Statics; \
public: \
	DECLARE_CLASS(AGunBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(AGunBase)


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGunBase(); \
	friend struct Z_Construct_UClass_AGunBase_Statics; \
public: \
	DECLARE_CLASS(AGunBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(AGunBase)


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunBase(AGunBase&&); \
	NO_API AGunBase(const AGunBase&); \
public:


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunBase(AGunBase&&); \
	NO_API AGunBase(const AGunBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunBase)


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FiringSound() { return STRUCT_OFFSET(AGunBase, FiringSound); } \
	FORCEINLINE static uint32 __PPO__GunFireFX() { return STRUCT_OFFSET(AGunBase, GunFireFX); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenShots() { return STRUCT_OFFSET(AGunBase, TimeBetweenShots); }


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_9_PROLOG
#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_RPC_WRAPPERS \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_INCLASS \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_INCLASS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNBULLETHELL_API UClass* StaticClass<class AGunBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownBulletHell_Source_TopDownBulletHell_Weapons_Guns_GunBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
