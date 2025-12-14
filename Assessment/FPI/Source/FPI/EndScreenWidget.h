// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/EditableTextBox.h"

#include "EndScreenWidget.generated.h"

/**
 * 
 */
UCLASS()
class FPI_API UEndScreenWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* time_TXT;

	UFUNCTION(BlueprintCallable)

	void SetTimeTakenUI(float timeTaken);


	
};
