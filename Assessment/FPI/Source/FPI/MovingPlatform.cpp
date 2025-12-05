// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform Mesh"));
	RootComponent = platformMesh;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	startPos = GetActorLocation();

	FVector direction;

	switch (moveDirection)
	{
		case EPlatformDirection::Forward:

			direction = platformMesh->GetForwardVector();

			break;

		case EPlatformDirection::Backward:

			direction = -platformMesh-> GetForwardVector();

			break;

		case EPlatformDirection::Left:

			direction = -platformMesh->GetRightVector();

			break;

		case EPlatformDirection::Right:

			direction = platformMesh->GetRightVector();

			break;

		case EPlatformDirection::Up:

			direction = platformMesh->GetUpVector();

			break;

		case EPlatformDirection::Down:

			direction = -platformMesh->GetUpVector();

			break;

		default:

			UE_LOG(LogTemp, Error, TEXT("Directional value not assigned to Moving Platform. Forward assumed."));
			direction = platformMesh->GetForwardVector();

			break;
	}

	endPos = startPos + (direction * distance);

	targetPos = endPos;
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	FVector currentPos = GetActorLocation();

	FVector newPos = FMath::VInterpConstantTo(currentPos, targetPos, DeltaTime, speed);

	SetActorLocation(newPos);

	float distanceToTarget = FVector::Dist(newPos, targetPos);

	if (distanceToTarget < 5.0f) //Threshold
	{
		if (targetPos == endPos)
		{
			targetPos = startPos;
		}
		else
		{
			targetPos = endPos;
		}
	}


	


}

