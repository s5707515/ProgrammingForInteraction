// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootableTarget.h"
#include <Components/StaticMeshComponent.h>
#include "Variant_Shooter/Weapons/ShooterProjectile.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AShootableTarget::AShootableTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("The Target Mesh"));
	RootComponent = mesh;

}

void AShootableTarget::OnTargetWasHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		if (AShooterProjectile* bullet = Cast<AShooterProjectile>(OtherActor))
		{
			if (particles != nullptr)
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), particles, GetActorTransform());
			}
			Destroy();
		}
	}
}

// Called when the game starts or when spawned
void AShootableTarget::BeginPlay()
{
	Super::BeginPlay();

	mesh->OnComponentHit.AddDynamic(this, &AShootableTarget::OnTargetWasHit);
	
}

// Called every frame
void AShootableTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Rotate object each frame

	FRotator rot = FRotator(0.0f, 360.0f * DeltaTime, 0.0f);
	AddActorWorldRotation(rot);
}

