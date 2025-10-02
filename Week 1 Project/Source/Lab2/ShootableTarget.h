// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShootableTarget.generated.h"



class UStaticMeshComponent;

UCLASS()
class LAB2_API AShootableTarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShootableTarget();

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* mesh;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* particles;

	UFUNCTION()
	void OnTargetWasHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
