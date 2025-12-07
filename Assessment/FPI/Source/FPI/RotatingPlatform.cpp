// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingPlatform.h"

// Sets default values
ARotatingPlatform::ARotatingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform Mesh"));
	RootComponent = platformMesh;
}

// Called when the game starts or when spawned
void ARotatingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float deltaDegrees = speed * DeltaTime;

	if (!clockwise)
	{
		deltaDegrees = -deltaDegrees;
	}

	FQuat deltaQuat = FQuat(rotationAxis, FMath::DegreesToRadians(deltaDegrees));

	AddActorLocalRotation(deltaQuat, false, nullptr, ETeleportType::None);

}

