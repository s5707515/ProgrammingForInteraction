// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumpBoost.h"

#ifdef PFI_JumpBoost_generated_h
#error "JumpBoost.generated.h already included, missing '#pragma once' in JumpBoost.h"
#endif
#define PFI_JumpBoost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AJumpBoost ***************************************************************
PFI_API UClass* Z_Construct_UClass_AJumpBoost_NoRegister();

#define FID_Week_2_Project_Source_PFI_JumpBoost_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumpBoost(); \
	friend struct Z_Construct_UClass_AJumpBoost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_AJumpBoost_NoRegister(); \
public: \
	DECLARE_CLASS2(AJumpBoost, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_AJumpBoost_NoRegister) \
	DECLARE_SERIALIZER(AJumpBoost)


#define FID_Week_2_Project_Source_PFI_JumpBoost_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AJumpBoost(AJumpBoost&&) = delete; \
	AJumpBoost(const AJumpBoost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpBoost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpBoost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJumpBoost) \
	NO_API virtual ~AJumpBoost();


#define FID_Week_2_Project_Source_PFI_JumpBoost_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_JumpBoost_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_JumpBoost_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_JumpBoost_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AJumpBoost;

// ********** End Class AJumpBoost *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_JumpBoost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
