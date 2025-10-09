// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PFIGameMode.h"

#ifdef PFI_PFIGameMode_generated_h
#error "PFIGameMode.generated.h already included, missing '#pragma once' in PFIGameMode.h"
#endif
#define PFI_PFIGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APFIGameMode *************************************************************
PFI_API UClass* Z_Construct_UClass_APFIGameMode_NoRegister();

#define FID_Week_2_Project_Source_PFI_PFIGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPFIGameMode(); \
	friend struct Z_Construct_UClass_APFIGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_APFIGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APFIGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_APFIGameMode_NoRegister) \
	DECLARE_SERIALIZER(APFIGameMode)


#define FID_Week_2_Project_Source_PFI_PFIGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APFIGameMode(APFIGameMode&&) = delete; \
	APFIGameMode(const APFIGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APFIGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APFIGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APFIGameMode) \
	NO_API virtual ~APFIGameMode();


#define FID_Week_2_Project_Source_PFI_PFIGameMode_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_PFIGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_PFIGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_PFIGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APFIGameMode;

// ********** End Class APFIGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_PFIGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
