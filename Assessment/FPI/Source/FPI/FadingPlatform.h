// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FadingPlatform.generated.h"

UCLASS()
class FPI_API AFadingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFadingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void StartFade();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* platformMesh;

	UPROPERTY(VisibleAnywhere)
	UMaterialInstanceDynamic* dynamicMat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Fade")
	float fadeDuration = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Fade")
	float respawnTime = 5.0f;

private:

	bool isFading = false;

	bool isRespawning = false;

	float currentFadeAmount = 1.0f;

	float respawnTimer = 0;

};
