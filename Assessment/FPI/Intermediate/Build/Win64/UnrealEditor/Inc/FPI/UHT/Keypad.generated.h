// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Keypad.h"

#ifdef FPI_Keypad_generated_h
#error "Keypad.generated.h already included, missing '#pragma once' in Keypad.h"
#endif
#define FPI_Keypad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AKeypad ******************************************************************
FPI_API UClass* Z_Construct_UClass_AKeypad_NoRegister();

#define FID_FPI_Source_FPI_Keypad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeypad(); \
	friend struct Z_Construct_UClass_AKeypad_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FPI_API UClass* Z_Construct_UClass_AKeypad_NoRegister(); \
public: \
	DECLARE_CLASS2(AKeypad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPI"), Z_Construct_UClass_AKeypad_NoRegister) \
	DECLARE_SERIALIZER(AKeypad)


#define FID_FPI_Source_FPI_Keypad_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AKeypad(AKeypad&&) = delete; \
	AKeypad(const AKeypad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeypad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeypad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeypad) \
	NO_API virtual ~AKeypad();


#define FID_FPI_Source_FPI_Keypad_h_9_PROLOG
#define FID_FPI_Source_FPI_Keypad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FPI_Source_FPI_Keypad_h_12_INCLASS_NO_PURE_DECLS \
	FID_FPI_Source_FPI_Keypad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AKeypad;

// ********** End Class AKeypad ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FPI_Source_FPI_Keypad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
