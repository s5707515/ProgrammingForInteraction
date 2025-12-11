// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Components/MultiLineEditableTextBox.h"


#include "Objectives.generated.h"

UENUM(BlueprintType)
enum class EObjectives : uint8
{
	OpenDoor1,
	OpenDoor2,
	FindCodeForDoor,
	ReachDoor3,
	FindAKeyForDoor,
	OpenDoor3,
	YouWin,
};

UCLASS()
class FPI_API UObjectives : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Objectives")
	EObjectives currentObjective;

	UPROPERTY(meta = (BindWidget))
	class UMultiLineEditableTextBox* objectivesTXT;


	UFUNCTION(BlueprintCallable)
	void ChangeObjective(EObjectives objective);



};
