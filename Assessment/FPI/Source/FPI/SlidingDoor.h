// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlidingDoor.generated.h"

UCLASS()
class FPI_API ASlidingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlidingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* doorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector slideDistance = FVector(2000, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float slideSpeed = 3.0f;


	UFUNCTION(BlueprintCallable, Category = "Movement") void ToggleDoorState();

private:

	bool isOpen = false;

	FVector closedPosition;

	FVector openPosition;

	FVector targetPosition;
};
