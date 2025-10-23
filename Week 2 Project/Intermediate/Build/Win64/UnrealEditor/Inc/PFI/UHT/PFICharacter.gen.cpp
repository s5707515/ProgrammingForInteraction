// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PFICharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePFICharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PFI_API UClass* Z_Construct_UClass_APFICharacter();
PFI_API UClass* Z_Construct_UClass_APFICharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PFI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APFICharacter Function AdjustScore ***************************************
struct Z_Construct_UFunction_APFICharacter_AdjustScore_Statics
{
	struct PFICharacter_eventAdjustScore_Parms
	{
		int32 scoreChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PFICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_scoreChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::NewProp_scoreChange = { "scoreChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFICharacter_eventAdjustScore_Parms, scoreChange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::NewProp_scoreChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APFICharacter, nullptr, "AdjustScore", Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PFICharacter_eventAdjustScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::PFICharacter_eventAdjustScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APFICharacter_AdjustScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APFICharacter_AdjustScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APFICharacter::execAdjustScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_scoreChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdjustScore(Z_Param_scoreChange);
	P_NATIVE_END;
}
// ********** End Class APFICharacter Function AdjustScore *****************************************

// ********** Begin Class APFICharacter Function DoAim *********************************************
struct Z_Construct_UFunction_APFICharacter_DoAim_Statics
{
	struct PFICharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles aim inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles aim inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APFICharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFICharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APFICharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFICharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APFICharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APFICharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APFICharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APFICharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APFICharacter, nullptr, "DoAim", Z_Construct_UFunction_APFICharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_APFICharacter_DoAim_Statics::PFICharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_APFICharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APFICharacter_DoAim_Statics::PFICharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APFICharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APFICharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APFICharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class APFICharacter Function DoAim ***********************************************

// ********** Begin Class APFICharacter Function DoJumpEnd *****************************************
struct Z_Construct_UFunction_APFICharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump end inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump end inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APFICharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APFICharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_APFICharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APFICharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APFICharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APFICharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class APFICharacter Function DoJumpEnd *******************************************

// ********** Begin Class APFICharacter Function DoJumpStart ***************************************
struct Z_Construct_UFunction_APFICharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APFICharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APFICharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_APFICharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APFICharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APFICharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APFICharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class APFICharacter Function DoJumpStart *****************************************

// ********** Begin Class APFICharacter Function DoMove ********************************************
struct Z_Construct_UFunction_APFICharacter_DoMove_Statics
{
	struct PFICharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APFICharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFICharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APFICharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PFICharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APFICharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APFICharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APFICharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APFICharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APFICharacter, nullptr, "DoMove", Z_Construct_UFunction_APFICharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_APFICharacter_DoMove_Statics::PFICharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APFICharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_APFICharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APFICharacter_DoMove_Statics::PFICharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APFICharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APFICharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APFICharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class APFICharacter Function DoMove **********************************************

// ********** Begin Class APFICharacter ************************************************************
void APFICharacter::StaticRegisterNativesAPFICharacter()
{
	UClass* Class = APFICharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustScore", &APFICharacter::execAdjustScore },
		{ "DoAim", &APFICharacter::execDoAim },
		{ "DoJumpEnd", &APFICharacter::execDoJumpEnd },
		{ "DoJumpStart", &APFICharacter::execDoJumpStart },
		{ "DoMove", &APFICharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APFICharacter;
UClass* APFICharacter::GetPrivateStaticClass()
{
	using TClass = APFICharacter;
	if (!Z_Registration_Info_UClass_APFICharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PFICharacter"),
			Z_Registration_Info_UClass_APFICharacter.InnerSingleton,
			StaticRegisterNativesAPFICharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APFICharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APFICharacter_NoRegister()
{
	return APFICharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APFICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A basic first person character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PFICharacter.h" },
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A basic first person character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "PFICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "PFICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "PFICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_playerHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APFICharacter_AdjustScore, "AdjustScore" }, // 2444825162
		{ &Z_Construct_UFunction_APFICharacter_DoAim, "DoAim" }, // 2598364121
		{ &Z_Construct_UFunction_APFICharacter_DoJumpEnd, "DoJumpEnd" }, // 2412577728
		{ &Z_Construct_UFunction_APFICharacter_DoJumpStart, "DoJumpStart" }, // 497658532
		{ &Z_Construct_UFunction_APFICharacter_DoMove, "DoMove" }, // 3689803230
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APFICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_playerScore = { "playerScore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, playerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerScore_MetaData), NewProp_playerScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APFICharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APFICharacter, playerHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_playerHealth_MetaData), NewProp_playerHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APFICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_playerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APFICharacter_Statics::NewProp_playerHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APFICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PFI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APFICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APFICharacter_Statics::ClassParams = {
	&APFICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APFICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APFICharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APFICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APFICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APFICharacter()
{
	if (!Z_Registration_Info_UClass_APFICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APFICharacter.OuterSingleton, Z_Construct_UClass_APFICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APFICharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APFICharacter);
APFICharacter::~APFICharacter() {}
// ********** End Class APFICharacter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICharacter_h__Script_PFI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APFICharacter, APFICharacter::StaticClass, TEXT("APFICharacter"), &Z_Registration_Info_UClass_APFICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APFICharacter), 492028685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICharacter_h__Script_PFI_4150511259(TEXT("/Script/PFI"),
	Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICharacter_h__Script_PFI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Week_2_Project_Source_PFI_PFICharacter_h__Script_PFI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
