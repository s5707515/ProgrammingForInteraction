// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeyPowerUp.h"

#ifdef FPI_KeyPowerUp_generated_h
#error "KeyPowerUp.generated.h already included, missing '#pragma once' in KeyPowerUp.h"
#endif
#define FPI_KeyPowerUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKeyPowerUp **************************************************************
FPI_API UClass* Z_Construct_UClass_AKeyPowerUp_NoRegister();

#define FID_FPI_Source_FPI_KeyPowerUp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyPowerUp(); \
	friend struct Z_Construct_UClass_AKeyPowerUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AKeyPowerUp_NoRegister(); \
public: \
	DECLARE_CLASS2(AKeyPowerUp, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AKeyPowerUp_NoRegister) \
	DECLARE_SERIALIZER(AKeyPowerUp)


#define FID_FPI_Source_FPI_KeyPowerUp_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKeyPowerUp(AKeyPowerUp&&) = delete; \
	AKeyPowerUp(const AKeyPowerUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyPowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyPowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyPowerUp) \
	NO_API virtual ~AKeyPowerUp();


#define FID_FPI_Source_FPI_KeyPowerUp_h_9_PROLOG
#define FID_FPI_Source_FPI_KeyPowerUp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_KeyPowerUp_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_KeyPowerUp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKeyPowerUp;

// ********** End Class AKeyPowerUp ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_KeyPowerUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
