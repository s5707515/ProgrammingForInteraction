// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PFI_Lib.generated.h"

/**
 * 
 */
UCLASS()
class UE5_WEEK6_API UPFI_Lib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)

	static bool SaveArrayText(FString _saveDirectory, FString _filename, TArray<FString> _saveText, bool _allowOverWriting);
	
};
