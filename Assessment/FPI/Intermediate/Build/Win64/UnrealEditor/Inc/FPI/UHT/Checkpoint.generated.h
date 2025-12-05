// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Checkpoint.h"

#ifdef FPI_Checkpoint_generated_h
#error "Checkpoint.generated.h already included, missing '#pragma once' in Checkpoint.h"
#endif
#define FPI_Checkpoint_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACheckpoint **************************************************************
FPI_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister();

#define FID_FPI_Source_FPI_Checkpoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpoint(); \
	friend struct Z_Construct_UClass_ACheckpoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_ACheckpoint_NoRegister(); \
public: \
	DECLARE_CLASS2(ACheckpoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_ACheckpoint_NoRegister) \
	DECLARE_SERIALIZER(ACheckpoint)


#define FID_FPI_Source_FPI_Checkpoint_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACheckpoint(ACheckpoint&&) = delete; \
	ACheckpoint(const ACheckpoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpoint) \
	NO_API virtual ~ACheckpoint();


#define FID_FPI_Source_FPI_Checkpoint_h_10_PROLOG
#define FID_FPI_Source_FPI_Checkpoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_Checkpoint_h_13_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_Checkpoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACheckpoint;

// ********** End Class ACheckpoint ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_Checkpoint_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
