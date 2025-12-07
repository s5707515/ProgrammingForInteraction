// Fill out your copyright notice in the Description page of Project Settings.


#include "FadingPlatform.h"

// Sets default values
AFadingPlatform::AFadingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform Mesh"));
	RootComponent = platformMesh;

}

// Called when the game starts or when spawned
void AFadingPlatform::BeginPlay()
{
	Super::BeginPlay();

	if (platformMesh->GetMaterial(0))
	{
		dynamicMat = UMaterialInstanceDynamic::Create(platformMesh->GetMaterial(0),this);
		platformMesh->SetMaterial(0, dynamicMat);

	}
	
}

// Called every frame
void AFadingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isFading)
	{
		currentFadeAmount -= DeltaTime / fadeDuration;

		if (currentFadeAmount < 0)
		{
			isFading = false;

			currentFadeAmount = 0;

			platformMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

			isRespawning = true;

		}

		if (dynamicMat)
		{
			dynamicMat->SetScalarParameterValue("Fade", currentFadeAmount);
		}
	}

	if (isRespawning)
	{
		respawnTimer += DeltaTime;

		if (respawnTimer > respawnTime)
		{
			isRespawning = false;

			respawnTimer = 0;

			platformMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

			currentFadeAmount = 1.0f;

			dynamicMat->SetScalarParameterValue("Fade", currentFadeAmount);

		}
	}

}

void AFadingPlatform::StartFade()
{
	if (!isFading && !isRespawning)
	{
		isFading = true;
	}
	
}

