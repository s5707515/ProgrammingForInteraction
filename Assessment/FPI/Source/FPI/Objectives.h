// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/MultiLineEditableTextBox.h"


#include "Objectives.generated.h"

/**
 * 
 */
UCLASS()
class FPI_API UObjectives : public UUserWidget
{
	GENERATED_BODY()
	

	UPROPERTY(meta = (BindWidget))
	class UMultiLineEditableTextBox* objectivesTXT;


	UFUNCTION(BlueprintCallable)
	void ChangeObjective(int objectiveNum);



};
