// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PFI_Lib.generated.h"

/**
 * 
 */
UCLASS()
class FPI_API UPFI_Lib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static bool SaveObjectiveTime(FString saveDirectory, FString filename, FString objective, FString currentTime,  bool allowOverwrite);

	UFUNCTION(BluePrintCallable)
	static bool AddNewLineToFile(FString saveDirectory, FString filename);
	
};
