// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPickupBase.h"

#ifdef PFI_MyPickupBase_generated_h
#error "MyPickupBase.generated.h already included, missing '#pragma once' in MyPickupBase.h"
#endif
#define PFI_MyPickupBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPickupBase ************************************************************
PFI_API UClass* Z_Construct_UClass_AMyPickupBase_NoRegister();

#define FID_Week_2_Project_Source_PFI_MyPickupBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPickupBase(); \
	friend struct Z_Construct_UClass_AMyPickupBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_AMyPickupBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPickupBase, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_AMyPickupBase_NoRegister) \
	DECLARE_SERIALIZER(AMyPickupBase)


#define FID_Week_2_Project_Source_PFI_MyPickupBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPickupBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPickupBase(AMyPickupBase&&) = delete; \
	AMyPickupBase(const AMyPickupBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPickupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPickupBase) \
	NO_API virtual ~AMyPickupBase();


#define FID_Week_2_Project_Source_PFI_MyPickupBase_h_12_PROLOG
#define FID_Week_2_Project_Source_PFI_MyPickupBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_MyPickupBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_MyPickupBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPickupBase;

// ********** End Class AMyPickupBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_MyPickupBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
