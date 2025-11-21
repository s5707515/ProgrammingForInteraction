// Fill out your copyright notice in the Description page of Project Settings.


#include "SlidingDoor.h"

// Sets default values
ASlidingDoor::ASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Mesh"));
	RootComponent = doorMesh;


}

// Called when the game starts or when spawned
void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();

	closedPosition = GetActorLocation();
	openPosition = closedPosition + slideDistance;

	targetPosition = closedPosition;
}

// Called every frame
void ASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentPosition = GetActorLocation();

	FVector newPos;

	if (!currentPosition.Equals(targetPosition, 1.0f))
	{
		newPos = FMath::VInterpTo(currentPosition, targetPosition, DeltaTime, slideSpeed);

		SetActorLocation(newPos);
	};

	

}

void ASlidingDoor::ToggleDoorState()
{
	FVector currentPosition = GetActorLocation();


	if (isOpen)
	{
		targetPosition = closedPosition;
		isOpen = false;
	}
	else
	{
		targetPosition = openPosition;
		isOpen = true;
	}
}

