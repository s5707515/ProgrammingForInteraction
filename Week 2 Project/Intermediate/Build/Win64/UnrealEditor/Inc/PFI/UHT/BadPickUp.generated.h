// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BadPickUp.h"

#ifdef PFI_BadPickUp_generated_h
#error "BadPickUp.generated.h already included, missing '#pragma once' in BadPickUp.h"
#endif
#define PFI_BadPickUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABadPickUp ***************************************************************
PFI_API UClass* Z_Construct_UClass_ABadPickUp_NoRegister();

#define FID_Week_2_Project_Source_PFI_BadPickUp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABadPickUp(); \
	friend struct Z_Construct_UClass_ABadPickUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_ABadPickUp_NoRegister(); \
public: \
	DECLARE_CLASS2(ABadPickUp, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_ABadPickUp_NoRegister) \
	DECLARE_SERIALIZER(ABadPickUp)


#define FID_Week_2_Project_Source_PFI_BadPickUp_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABadPickUp(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABadPickUp(ABadPickUp&&) = delete; \
	ABadPickUp(const ABadPickUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABadPickUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABadPickUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABadPickUp) \
	NO_API virtual ~ABadPickUp();


#define FID_Week_2_Project_Source_PFI_BadPickUp_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_BadPickUp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_BadPickUp_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_BadPickUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABadPickUp;

// ********** End Class ABadPickUp *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_BadPickUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
