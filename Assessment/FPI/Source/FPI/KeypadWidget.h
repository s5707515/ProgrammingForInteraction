// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/EditableTextBox.h"

#include "KeypadWidget.generated.h"

UCLASS()
class FPI_API UKeypadWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* passcode_TXT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int numDigits = 5;

	UFUNCTION(BlueprintCallable)
	void AddToTextBox(const FString& text);

	UFUNCTION(BlueprintCallable)
	void TextBoxBack();
	
	
};
