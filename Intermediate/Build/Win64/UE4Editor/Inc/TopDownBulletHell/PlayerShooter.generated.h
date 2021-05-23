// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNBULLETHELL_PlayerShooter_generated_h
#error "PlayerShooter.generated.h already included, missing '#pragma once' in PlayerShooter.h"
#endif
#define TOPDOWNBULLETHELL_PlayerShooter_generated_h

#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_SPARSE_DATA
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_RPC_WRAPPERS
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerShooter(); \
	friend struct Z_Construct_UClass_APlayerShooter_Statics; \
public: \
	DECLARE_CLASS(APlayerShooter, ABaseShooter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(APlayerShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerShooter(); \
	friend struct Z_Construct_UClass_APlayerShooter_Statics; \
public: \
	DECLARE_CLASS(APlayerShooter, ABaseShooter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownBulletHell"), NO_API) \
	DECLARE_SERIALIZER(APlayerShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShooter(APlayerShooter&&); \
	NO_API APlayerShooter(const APlayerShooter&); \
public:


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerShooter(APlayerShooter&&); \
	NO_API APlayerShooter(const APlayerShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerShooter)


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APlayerShooter, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APlayerShooter, Camera); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(APlayerShooter, MoveSpeed); }


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_12_PROLOG
#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_RPC_WRAPPERS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_INCLASS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_SPARSE_DATA \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_INCLASS_NO_PURE_DECLS \
	TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNBULLETHELL_API UClass* StaticClass<class APlayerShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownBulletHell_Source_TopDownBulletHell_Pawns_PlayerShooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
