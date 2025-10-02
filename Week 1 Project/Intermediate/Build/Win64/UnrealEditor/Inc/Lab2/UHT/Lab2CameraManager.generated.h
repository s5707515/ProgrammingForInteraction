// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lab2CameraManager.h"

#ifdef LAB2_Lab2CameraManager_generated_h
#error "Lab2CameraManager.generated.h already included, missing '#pragma once' in Lab2CameraManager.h"
#endif
#define LAB2_Lab2CameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALab2CameraManager *******************************************************
LAB2_API UClass* Z_Construct_UClass_ALab2CameraManager_NoRegister();

#define FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab2CameraManager(); \
	friend struct Z_Construct_UClass_ALab2CameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_ALab2CameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ALab2CameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_ALab2CameraManager_NoRegister) \
	DECLARE_SERIALIZER(ALab2CameraManager)


#define FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALab2CameraManager(ALab2CameraManager&&) = delete; \
	ALab2CameraManager(const ALab2CameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab2CameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab2CameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALab2CameraManager) \
	NO_API virtual ~ALab2CameraManager();


#define FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_13_PROLOG
#define FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALab2CameraManager;

// ********** End Class ALab2CameraManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_Lab2CameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
