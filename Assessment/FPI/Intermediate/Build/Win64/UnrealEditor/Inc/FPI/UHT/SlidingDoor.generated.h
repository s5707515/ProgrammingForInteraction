// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlidingDoor.h"

#ifdef FPI_SlidingDoor_generated_h
#error "SlidingDoor.generated.h already included, missing '#pragma once' in SlidingDoor.h"
#endif
#define FPI_SlidingDoor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASlidingDoor *************************************************************
#define FID_FPI_Source_FPI_SlidingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenDoor);


FPI_API UClass* Z_Construct_UClass_ASlidingDoor_NoRegister();

#define FID_FPI_Source_FPI_SlidingDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASlidingDoor(); \
	friend struct Z_Construct_UClass_ASlidingDoor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_ASlidingDoor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASlidingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_ASlidingDoor_NoRegister) \
	DECLARE_SERIALIZER(ASlidingDoor)


#define FID_FPI_Source_FPI_SlidingDoor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASlidingDoor(ASlidingDoor&&) = delete; \
	ASlidingDoor(const ASlidingDoor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASlidingDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASlidingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASlidingDoor) \
	NO_API virtual ~ASlidingDoor();


#define FID_FPI_Source_FPI_SlidingDoor_h_9_PROLOG
#define FID_FPI_Source_FPI_SlidingDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_SlidingDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_SlidingDoor_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_SlidingDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASlidingDoor;

// ********** End Class ASlidingDoor ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_SlidingDoor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
