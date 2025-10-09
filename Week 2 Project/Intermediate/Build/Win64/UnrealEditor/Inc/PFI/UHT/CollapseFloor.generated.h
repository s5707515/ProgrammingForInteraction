// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollapseFloor.h"

#ifdef PFI_CollapseFloor_generated_h
#error "CollapseFloor.generated.h already included, missing '#pragma once' in CollapseFloor.h"
#endif
#define PFI_CollapseFloor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACollapseFloor ***********************************************************
#define FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


PFI_API UClass* Z_Construct_UClass_ACollapseFloor_NoRegister();

#define FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollapseFloor(); \
	friend struct Z_Construct_UClass_ACollapseFloor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PFI_API UClass* Z_Construct_UClass_ACollapseFloor_NoRegister(); \
public: \
	DECLARE_CLASS2(ACollapseFloor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PFI"), Z_Construct_UClass_ACollapseFloor_NoRegister) \
	DECLARE_SERIALIZER(ACollapseFloor)


#define FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACollapseFloor(ACollapseFloor&&) = delete; \
	ACollapseFloor(const ACollapseFloor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollapseFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollapseFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollapseFloor) \
	NO_API virtual ~ACollapseFloor();


#define FID_Week_2_Project_Source_PFI_CollapseFloor_h_9_PROLOG
#define FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Week_2_Project_Source_PFI_CollapseFloor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACollapseFloor;

// ********** End Class ACollapseFloor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Week_2_Project_Source_PFI_CollapseFloor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
