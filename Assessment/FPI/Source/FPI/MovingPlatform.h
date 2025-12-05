// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UENUM(BlueprintType)
enum class EPlatformDirection : uint8
{
	Forward,
	Backward,
	Left,
	Right,
	Up,
	Down,
};

UCLASS()
class FPI_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* platformMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	EPlatformDirection moveDirection;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Movement")
	float speed = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float distance = 500.0f;

private:

	FVector startPos;

	FVector endPos;

	FVector targetPos;

};
