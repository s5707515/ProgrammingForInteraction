// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "JumpBoost.generated.h"

/**
 * 
 */
UCLASS()
class PFI_API AJumpBoost : public APickupBase
{
	GENERATED_BODY()

public:

	AJumpBoost();

protected:

	UPROPERTY(EditAnywhere)
	float jumpBoostAmount = 1000.0f;

	virtual void OnPickUpCollected() override;
	virtual void OnPickUpEnd() override;

};

