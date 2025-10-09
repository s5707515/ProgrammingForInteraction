// Fill out your copyright notice in the Description page of Project Settings.


#include "CollapseFloor.h"

// Sets default values
ACollapseFloor::ACollapseFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = sceneComp;

	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	meshComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACollapseFloor::BeginPlay()
{
	Super::BeginPlay();
	meshComp->OnComponentHit.AddDynamic(this, &ACollapseFloor::OnHit);
	
}

// Called every frame
void ACollapseFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollapseFloor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ACollapseFloor::DoCollapse, collapseTime, false);
}

void ACollapseFloor::DoCollapse()
{
	meshComp->SetSimulatePhysics(true);
}




