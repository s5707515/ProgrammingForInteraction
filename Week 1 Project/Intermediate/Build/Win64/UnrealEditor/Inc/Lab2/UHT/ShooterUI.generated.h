// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Shooter/UI/ShooterUI.h"

#ifdef LAB2_ShooterUI_generated_h
#error "ShooterUI.generated.h already included, missing '#pragma once' in ShooterUI.h"
#endif
#define LAB2_ShooterUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UShooterUI ***************************************************************
#define FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_CALLBACK_WRAPPERS
LAB2_API UClass* Z_Construct_UClass_UShooterUI_NoRegister();

#define FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShooterUI(); \
	friend struct Z_Construct_UClass_UShooterUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LAB2_API UClass* Z_Construct_UClass_UShooterUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UShooterUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Lab2"), Z_Construct_UClass_UShooterUI_NoRegister) \
	DECLARE_SERIALIZER(UShooterUI)


#define FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UShooterUI(UShooterUI&&) = delete; \
	UShooterUI(const UShooterUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterUI) \
	NO_API virtual ~UShooterUI();


#define FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_12_PROLOG
#define FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_CALLBACK_WRAPPERS \
	FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UShooterUI;

// ********** End Class UShooterUI *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_1_Project_Source_Lab2_Variant_Shooter_UI_ShooterUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
