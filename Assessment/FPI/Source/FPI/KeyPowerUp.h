// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KeyPowerUp.generated.h"

UCLASS()
class FPI_API AKeyPowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyPowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* keyPowerUpMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spin")
	float rotationSpeed = 45.0f;

private:

	FVector rotationAxis = FVector(0, 0, 1);

};
