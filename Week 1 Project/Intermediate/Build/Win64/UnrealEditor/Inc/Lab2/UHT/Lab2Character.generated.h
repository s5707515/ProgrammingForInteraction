// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lab2Character.h"

#ifdef LAB2_Lab2Character_generated_h
#error "Lab2Character.generated.h already included, missing '#pragma once' in Lab2Character.h"
#endif
#define LAB2_Lab2Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALab2Character ***********************************************************
#define FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


LAB2_API UClass* Z_Construct_UClass_ALab2Character_NoRegister();

#define FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab2Character(); \
	friend struct Z_Construct_UClass_ALab2Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_ALab2Character_NoRegister(); \
public: \
	DECLARE_CLASS2(ALab2Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_ALab2Character_NoRegister) \
	DECLARE_SERIALIZER(ALab2Character)


#define FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALab2Character(ALab2Character&&) = delete; \
	ALab2Character(const ALab2Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab2Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALab2Character) \
	NO_API virtual ~ALab2Character();


#define FID_Week_1_Project_Source_Lab2_Lab2Character_h_21_PROLOG
#define FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Lab2Character_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALab2Character;

// ********** End Class ALab2Character *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_Lab2Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
