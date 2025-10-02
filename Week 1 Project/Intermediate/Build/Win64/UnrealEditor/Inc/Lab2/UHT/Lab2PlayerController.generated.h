// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lab2PlayerController.h"

#ifdef LAB2_Lab2PlayerController_generated_h
#error "Lab2PlayerController.generated.h already included, missing '#pragma once' in Lab2PlayerController.h"
#endif
#define LAB2_Lab2PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALab2PlayerController ****************************************************
LAB2_API UClass* Z_Construct_UClass_ALab2PlayerController_NoRegister();

#define FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab2PlayerController(); \
	friend struct Z_Construct_UClass_ALab2PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_ALab2PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ALab2PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_ALab2PlayerController_NoRegister) \
	DECLARE_SERIALIZER(ALab2PlayerController)


#define FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALab2PlayerController(ALab2PlayerController&&) = delete; \
	ALab2PlayerController(const ALab2PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab2PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab2PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALab2PlayerController) \
	NO_API virtual ~ALab2PlayerController();


#define FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_17_PROLOG
#define FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALab2PlayerController;

// ********** End Class ALab2PlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_Lab2PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
