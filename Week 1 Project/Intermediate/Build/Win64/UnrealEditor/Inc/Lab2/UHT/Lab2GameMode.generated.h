// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lab2GameMode.h"

#ifdef LAB2_Lab2GameMode_generated_h
#error "Lab2GameMode.generated.h already included, missing '#pragma once' in Lab2GameMode.h"
#endif
#define LAB2_Lab2GameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALab2GameMode ************************************************************
LAB2_API UClass* Z_Construct_UClass_ALab2GameMode_NoRegister();

#define FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab2GameMode(); \
	friend struct Z_Construct_UClass_ALab2GameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_ALab2GameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ALab2GameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_ALab2GameMode_NoRegister) \
	DECLARE_SERIALIZER(ALab2GameMode)


#define FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALab2GameMode(ALab2GameMode&&) = delete; \
	ALab2GameMode(const ALab2GameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab2GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab2GameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALab2GameMode) \
	NO_API virtual ~ALab2GameMode();


#define FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_12_PROLOG
#define FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Lab2GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALab2GameMode;

// ********** End Class ALab2GameMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_Lab2GameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
