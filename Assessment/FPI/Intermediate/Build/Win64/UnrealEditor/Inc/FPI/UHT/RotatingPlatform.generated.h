// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RotatingPlatform.h"

#ifdef FPI_RotatingPlatform_generated_h
#error "RotatingPlatform.generated.h already included, missing '#pragma once' in RotatingPlatform.h"
#endif
#define FPI_RotatingPlatform_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ARotatingPlatform ********************************************************
FPI_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister();

#define FID_FPI_Source_FPI_RotatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARotatingPlatform(); \
	friend struct Z_Construct_UClass_ARotatingPlatform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_ARotatingPlatform_NoRegister(); \
public: \
	DECLARE_CLASS2(ARotatingPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_ARotatingPlatform_NoRegister) \
	DECLARE_SERIALIZER(ARotatingPlatform)


#define FID_FPI_Source_FPI_RotatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARotatingPlatform(ARotatingPlatform&&) = delete; \
	ARotatingPlatform(const ARotatingPlatform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARotatingPlatform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARotatingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARotatingPlatform) \
	NO_API virtual ~ARotatingPlatform();


#define FID_FPI_Source_FPI_RotatingPlatform_h_9_PROLOG
#define FID_FPI_Source_FPI_RotatingPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_RotatingPlatform_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_RotatingPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARotatingPlatform;

// ********** End Class ARotatingPlatform **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_RotatingPlatform_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
