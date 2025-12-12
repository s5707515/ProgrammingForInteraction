// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/EditableTextBox.h"


#include "KeyUI.generated.h"

/**
 * 
 */
UCLASS()
class FPI_API UKeyUI : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	class UEditableTextBox* numKeys_TXT;

	UFUNCTION(BlueprintCallable)

	void SetUIKeyCount(int numKeys);

	

	
};
