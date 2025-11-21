// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPIGameMode.h"

#ifdef FPI_FPIGameMode_generated_h
#error "FPIGameMode.generated.h already included, missing '#pragma once' in FPIGameMode.h"
#endif
#define FPI_FPIGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPIGameMode *************************************************************
FPI_API UClass* Z_Construct_UClass_AFPIGameMode_NoRegister();

#define FID_FPI_Source_FPI_FPIGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPIGameMode(); \
	friend struct Z_Construct_UClass_AFPIGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AFPIGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPIGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AFPIGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFPIGameMode)


#define FID_FPI_Source_FPI_FPIGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPIGameMode(AFPIGameMode&&) = delete; \
	AFPIGameMode(const AFPIGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPIGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPIGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFPIGameMode) \
	NO_API virtual ~AFPIGameMode();


#define FID_FPI_Source_FPI_FPIGameMode_h_12_PROLOG
#define FID_FPI_Source_FPI_FPIGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_FPIGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_FPIGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPIGameMode;

// ********** End Class AFPIGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_FPIGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
