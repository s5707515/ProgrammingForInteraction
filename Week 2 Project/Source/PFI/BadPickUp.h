// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "BadPickUp.generated.h"

/**
 * 
 */
UCLASS()
class PFI_API ABadPickUp : public APickupBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)

	int32 damageValue = 1;

	virtual void OnPickUpCollected() override;
};
