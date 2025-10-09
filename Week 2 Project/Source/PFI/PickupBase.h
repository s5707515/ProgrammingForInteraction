// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "PFICharacter.h"
#include "PickupBase.generated.h"

UCLASS()
class PFI_API APickupBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupBase();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* meshComp;

	UPROPERTY(EditAnywhere)
	USphereComponent* collisionSphereComp;

	UPROPERTY(EditAnywhere)
	float duration = 0.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnPickUpCollected() {};
	virtual void OnPickUpEnd() {};

	APFICharacter* player;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
