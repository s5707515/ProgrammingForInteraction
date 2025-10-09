// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PFICameraManager.h"

#ifdef PFI_PFICameraManager_generated_h
#error "PFICameraManager.generated.h already included, missing '#pragma once' in PFICameraManager.h"
#endif
#define PFI_PFICameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APFICameraManager ********************************************************
PFI_API UClass* Z_Construct_UClass_APFICameraManager_NoRegister();

#define FID_Week_2_Project_Source_PFI_PFICameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPFICameraManager(); \
	friend struct Z_Construct_UClass_APFICameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_APFICameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(APFICameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_APFICameraManager_NoRegister) \
	DECLARE_SERIALIZER(APFICameraManager)


#define FID_Week_2_Project_Source_PFI_PFICameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APFICameraManager(APFICameraManager&&) = delete; \
	APFICameraManager(const APFICameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APFICameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APFICameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APFICameraManager) \
	NO_API virtual ~APFICameraManager();


#define FID_Week_2_Project_Source_PFI_PFICameraManager_h_13_PROLOG
#define FID_Week_2_Project_Source_PFI_PFICameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_PFICameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_PFICameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APFICameraManager;

// ********** End Class APFICameraManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_PFICameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
