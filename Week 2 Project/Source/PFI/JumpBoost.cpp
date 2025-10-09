// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpBoost.h"
#include <GameFramework/CharacterMovementComponent.h>

AJumpBoost::AJumpBoost()
{
	duration = 10.0f;
}

void AJumpBoost::OnPickUpCollected()
{
	UCharacterMovementComponent* movement = player->GetCharacterMovement();
	movement->JumpZVelocity += jumpBoostAmount;
}

void AJumpBoost::OnPickUpEnd()
{
	UCharacterMovementComponent* movement = player->GetCharacterMovement();
	movement->JumpZVelocity -= jumpBoostAmount;

	Destroy();
}

