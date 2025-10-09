// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBoost.h"
#include <GameFramework/CharacterMovementComponent.h>

ASpeedBoost::ASpeedBoost()
{
	duration = 10.0f;
}

void ASpeedBoost::OnPickUpCollected()
{
	UCharacterMovementComponent* movement = player->GetCharacterMovement();
	movement->MaxWalkSpeed += speedBoostAmount;
}

void ASpeedBoost::OnPickUpEnd()
{
	UCharacterMovementComponent* movement = player->GetCharacterMovement();
	movement->MaxWalkSpeed -= speedBoostAmount;

	Destroy();
}
