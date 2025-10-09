// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PFICharacter.h"

#ifdef PFI_PFICharacter_generated_h
#error "PFICharacter.generated.h already included, missing '#pragma once' in PFICharacter.h"
#endif
#define PFI_PFICharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APFICharacter ************************************************************
#define FID_Week_2_Project_Source_PFI_PFICharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


PFI_API UClass* Z_Construct_UClass_APFICharacter_NoRegister();

#define FID_Week_2_Project_Source_PFI_PFICharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPFICharacter(); \
	friend struct Z_Construct_UClass_APFICharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_APFICharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APFICharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_APFICharacter_NoRegister) \
	DECLARE_SERIALIZER(APFICharacter)


#define FID_Week_2_Project_Source_PFI_PFICharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APFICharacter(APFICharacter&&) = delete; \
	APFICharacter(const APFICharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APFICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APFICharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APFICharacter) \
	NO_API virtual ~APFICharacter();


#define FID_Week_2_Project_Source_PFI_PFICharacter_h_21_PROLOG
#define FID_Week_2_Project_Source_PFI_PFICharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_PFICharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_PFICharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_PFICharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APFICharacter;

// ********** End Class APFICharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_PFICharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
