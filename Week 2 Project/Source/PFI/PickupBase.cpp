// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBase.h"

// Sets default values
APickupBase::APickupBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	RootComponent = meshComp;

	collisionSphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
	collisionSphereComp-> SetupAttachment(RootComponent);
	collisionSphereComp->SetSphereRadius(150.0f);

}

// Called when the game starts or when spawned
void APickupBase::BeginPlay()
{
	Super::BeginPlay();

	collisionSphereComp->OnComponentBeginOverlap.AddDynamic(this, &APickupBase::OnOverlap);
}

// Called every frame
void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupBase::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	player = Cast<APFICharacter>(OtherActor);

	if (player)
	{
		OnPickUpCollected();

		if (duration > 0.0f)
		{
			meshComp->DestroyComponent();
			collisionSphereComp->DestroyComponent();

			FTimerHandle timerHandle;
			GetWorldTimerManager().SetTimer(timerHandle, this, &APickupBase::OnPickUpEnd, duration, false);
		}
		else
		{
			Destroy();
		}
	
	}
	
}

