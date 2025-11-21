// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPICameraManager.h"

#ifdef FPI_FPICameraManager_generated_h
#error "FPICameraManager.generated.h already included, missing '#pragma once' in FPICameraManager.h"
#endif
#define FPI_FPICameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPICameraManager ********************************************************
FPI_API UClass* Z_Construct_UClass_AFPICameraManager_NoRegister();

#define FID_FPI_Source_FPI_FPICameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPICameraManager(); \
	friend struct Z_Construct_UClass_AFPICameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AFPICameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPICameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AFPICameraManager_NoRegister) \
	DECLARE_SERIALIZER(AFPICameraManager)


#define FID_FPI_Source_FPI_FPICameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPICameraManager(AFPICameraManager&&) = delete; \
	AFPICameraManager(const AFPICameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPICameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPICameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPICameraManager) \
	NO_API virtual ~AFPICameraManager();


#define FID_FPI_Source_FPI_FPICameraManager_h_13_PROLOG
#define FID_FPI_Source_FPI_FPICameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_FPICameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_FPICameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPICameraManager;

// ********** End Class AFPICameraManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_FPICameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
