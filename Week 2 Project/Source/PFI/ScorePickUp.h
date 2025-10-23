// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "ScorePickUp.generated.h"

/**
 * 
 */
UCLASS()
class PFI_API AScorePickUp : public APickupBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	int32 scoreValue = 10;

	virtual void OnPickUpCollected() override;
	
};



