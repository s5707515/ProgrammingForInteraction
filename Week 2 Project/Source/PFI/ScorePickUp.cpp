// Fill out your copyright notice in the Description page of Project Settings.


#include "ScorePickUp.h"

void AScorePickUp::OnPickUpCollected()
{
	player->AdjustScore(scoreValue);
}

