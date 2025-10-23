// Fill out your copyright notice in the Description page of Project Settings.


#include "GameTimer.h"
#include <Kismet/GameplayStatics.h>
#include "PFICharacter.h"

// Sets default values
AGameTimer::AGameTimer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameTimer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameTimer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ACharacter* character = UGameplayStatics::GetPlayerCharacter(this, 0);
	APFICharacter* player = Cast<APFICharacter>(character);

	if (player && player->playerScore < 50)
	{
		gameTimeElapsed += FTimespan::FromSeconds(DeltaTime);
	}

	//On screen debug message
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, gameTimeElapsed.ToString());

}

