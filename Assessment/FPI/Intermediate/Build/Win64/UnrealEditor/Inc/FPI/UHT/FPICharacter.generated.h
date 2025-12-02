// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPICharacter.h"

#ifdef FPI_FPICharacter_generated_h
#error "FPICharacter.generated.h already included, missing '#pragma once' in FPICharacter.h"
#endif
#define FPI_FPICharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPICharacter ************************************************************
#define FID_FPI_Source_FPI_FPICharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncrementKeys); \
	DECLARE_FUNCTION(execGetNumberOfKeysHeld); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FPI_API UClass* Z_Construct_UClass_AFPICharacter_NoRegister();

#define FID_FPI_Source_FPI_FPICharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPICharacter(); \
	friend struct Z_Construct_UClass_AFPICharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AFPICharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPICharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AFPICharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPICharacter)


#define FID_FPI_Source_FPI_FPICharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPICharacter(AFPICharacter&&) = delete; \
	AFPICharacter(const AFPICharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPICharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPICharacter) \
	NO_API virtual ~AFPICharacter();


#define FID_FPI_Source_FPI_FPICharacter_h_21_PROLOG
#define FID_FPI_Source_FPI_FPICharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_FPICharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_FPICharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_FPICharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPICharacter;

// ********** End Class AFPICharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_FPICharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
