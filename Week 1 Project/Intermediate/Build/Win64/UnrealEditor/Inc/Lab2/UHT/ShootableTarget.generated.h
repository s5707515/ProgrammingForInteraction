// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootableTarget.h"

#ifdef LAB2_ShootableTarget_generated_h
#error "ShootableTarget.generated.h already included, missing '#pragma once' in ShootableTarget.h"
#endif
#define LAB2_ShootableTarget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AShootableTarget *********************************************************
#define FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetWasHit);


LAB2_API UClass* Z_Construct_UClass_AShootableTarget_NoRegister();

#define FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootableTarget(); \
	friend struct Z_Construct_UClass_AShootableTarget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_AShootableTarget_NoRegister(); \
public: \
	DECLARE_CLASS2(AShootableTarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_AShootableTarget_NoRegister) \
	DECLARE_SERIALIZER(AShootableTarget)


#define FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShootableTarget(AShootableTarget&&) = delete; \
	AShootableTarget(const AShootableTarget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootableTarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootableTarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootableTarget) \
	NO_API virtual ~AShootableTarget();


#define FID_Week_1_Project_Source_Lab2_ShootableTarget_h_13_PROLOG
#define FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_ShootableTarget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShootableTarget;

// ********** End Class AShootableTarget ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_ShootableTarget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
