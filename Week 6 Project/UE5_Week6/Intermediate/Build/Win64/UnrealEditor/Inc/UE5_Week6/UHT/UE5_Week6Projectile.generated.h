// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UE5_Week6Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_WEEK6_UE5_Week6Projectile_generated_h
#error "UE5_Week6Projectile.generated.h already included, missing '#pragma once' in UE5_Week6Projectile.h"
#endif
#define UE5_WEEK6_UE5_Week6Projectile_generated_h

#define FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUE5_Week6Projectile(); \
	friend struct Z_Construct_UClass_AUE5_Week6Projectile_Statics; \
public: \
	DECLARE_CLASS(AUE5_Week6Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE5_Week6"), NO_API) \
	DECLARE_SERIALIZER(AUE5_Week6Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUE5_Week6Projectile(AUE5_Week6Projectile&&); \
	AUE5_Week6Projectile(const AUE5_Week6Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUE5_Week6Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUE5_Week6Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUE5_Week6Projectile) \
	NO_API virtual ~AUE5_Week6Projectile();


#define FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_12_PROLOG
#define FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_WEEK6_API UClass* StaticClass<class AUE5_Week6Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Week6_Source_UE5_Week6_UE5_Week6Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
