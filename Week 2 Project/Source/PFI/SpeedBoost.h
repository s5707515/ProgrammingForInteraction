// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "SpeedBoost.generated.h"

/**
 * 
 */
UCLASS()
class PFI_API ASpeedBoost : public APickupBase
{
	GENERATED_BODY()

public:

	ASpeedBoost();

protected:

	UPROPERTY(EditAnywhere)
	float speedBoostAmount = 1000.0f;

	virtual void OnPickUpCollected() override;
	virtual void OnPickUpEnd() override;

	
};
