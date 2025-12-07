// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPowerUp.h"

// Sets default values
AKeyPowerUp::AKeyPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	keyPowerUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Button Mesh"));
	RootComponent = keyPowerUpMesh;

}

// Called when the game starts or when spawned
void AKeyPowerUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyPowerUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float deltaDegrees = rotationSpeed * DeltaTime;


	FQuat deltaQuat = FQuat(rotationAxis, FMath::DegreesToRadians(deltaDegrees));

	AddActorLocalRotation(deltaQuat, false, nullptr, ETeleportType::None);

}

