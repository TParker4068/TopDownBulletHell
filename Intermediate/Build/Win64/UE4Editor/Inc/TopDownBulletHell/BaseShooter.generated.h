// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNBULLETHELL_BaseShooter_generated_h
#error "BaseShooter.generated.h already included, missing '#pragma once' in BaseShooter.h"
#endif
#define TOPDOWNBULLETHELL_BaseShooter_generated_h

#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_SPARSE_DATA
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_RPC_WRAPPERS
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseShooter(); \
	friend struct Z_Construct_UClass_ABaseShooter_Statics; \
public: \
	DECLARE_CLASS(ABaseShooter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(ABaseShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseShooter(); \
	friend struct Z_Construct_UClass_ABaseShooter_Statics; \
public: \
	DECLARE_CLASS(ABaseShooter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(ABaseShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShooter(ABaseShooter&&); \
	NO_API ABaseShooter(const ABaseShooter&); \
public:


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseShooter(ABaseShooter&&); \
	NO_API ABaseShooter(const ABaseShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GunRef() { return STRUCT_OFFSET(ABaseShooter, GunRef); } \
	FORCEINLINE static uint32 __PPO__CapsuleComp() { return STRUCT_OFFSET(ABaseShooter, CapsuleComp); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(ABaseShooter, Mesh); } \
	FORCEINLINE static uint32 __PPO__GunLocation() { return STRUCT_OFFSET(ABaseShooter, GunLocation); } \
	FORCEINLINE static uint32 __PPO__DeathParticle() { return STRUCT_OFFSET(ABaseShooter, DeathParticle); } \
	FORCEINLINE static uint32 __PPO__DeathSound() { return STRUCT_OFFSET(ABaseShooter, DeathSound); } \
	FORCEINLINE static uint32 __PPO__ExplodeShake() { return STRUCT_OFFSET(ABaseShooter, ExplodeShake); }


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_12_PROLOG
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_RPC_WRAPPERS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_INCLASS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_INCLASS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNBULLETHELL_API UClass* StaticClass<class ABaseShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownBulletHell_Source_TopDownBulletHell_Pawns_BaseShooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
