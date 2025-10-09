// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeedBoost.h"

#ifdef PFI_SpeedBoost_generated_h
#error "SpeedBoost.generated.h already included, missing '#pragma once' in SpeedBoost.h"
#endif
#define PFI_SpeedBoost_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASpeedBoost **************************************************************
PFI_API UClass* Z_Construct_UClass_ASpeedBoost_NoRegister();

#define FID_Week_2_Project_Source_PFI_SpeedBoost_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpeedBoost(); \
	friend struct Z_Construct_UClass_ASpeedBoost_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_ASpeedBoost_NoRegister(); \
public: \
	DECLARE_CLASS2(ASpeedBoost, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_ASpeedBoost_NoRegister) \
	DECLARE_SERIALIZER(ASpeedBoost)


#define FID_Week_2_Project_Source_PFI_SpeedBoost_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASpeedBoost(ASpeedBoost&&) = delete; \
	ASpeedBoost(const ASpeedBoost&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpeedBoost); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpeedBoost); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpeedBoost) \
	NO_API virtual ~ASpeedBoost();


#define FID_Week_2_Project_Source_PFI_SpeedBoost_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_SpeedBoost_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_SpeedBoost_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_SpeedBoost_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASpeedBoost;

// ********** End Class ASpeedBoost ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_SpeedBoost_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
