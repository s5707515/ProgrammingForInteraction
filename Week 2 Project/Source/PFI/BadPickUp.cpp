// Fill out your copyright notice in the Description page of Project Settings.


#include "BadPickUp.h"

void ABadPickUp::OnPickUpCollected()
{
	player->AdjustHealth(-damageValue);
}