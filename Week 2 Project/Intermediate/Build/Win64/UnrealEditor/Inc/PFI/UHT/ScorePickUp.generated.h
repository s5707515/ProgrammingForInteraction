// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScorePickUp.h"

#ifdef PFI_ScorePickUp_generated_h
#error "ScorePickUp.generated.h already included, missing '#pragma once' in ScorePickUp.h"
#endif
#define PFI_ScorePickUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AScorePickUp *************************************************************
PFI_API UClass* Z_Construct_UClass_AScorePickUp_NoRegister();

#define FID_Week_2_Project_Source_PFI_ScorePickUp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScorePickUp(); \
	friend struct Z_Construct_UClass_AScorePickUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_AScorePickUp_NoRegister(); \
public: \
	DECLARE_CLASS2(AScorePickUp, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_AScorePickUp_NoRegister) \
	DECLARE_SERIALIZER(AScorePickUp)


#define FID_Week_2_Project_Source_PFI_ScorePickUp_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScorePickUp(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AScorePickUp(AScorePickUp&&) = delete; \
	AScorePickUp(const AScorePickUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScorePickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScorePickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScorePickUp) \
	NO_API virtual ~AScorePickUp();


#define FID_Week_2_Project_Source_PFI_ScorePickUp_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_ScorePickUp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_ScorePickUp_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_ScorePickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AScorePickUp;

// ********** End Class AScorePickUp ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_ScorePickUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
