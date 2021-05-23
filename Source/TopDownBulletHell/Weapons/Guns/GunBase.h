// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunBase.generated.h"

UCLASS()
class TOPDOWNBULLETHELL_API AGunBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Shooting
	virtual void StartFire(FVector DirectionToFire, FTransform ProjectileSpawnLocation) PURE_VIRTUAL(AGunBase::StartFire, );
	void StopFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//Effects
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* FiringSound;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* GunFireFX;
	
	//Seconds between shots
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting", meta = (AllowPrivateAccess = "true"))
	float TimeBetweenShots;
	//Timer for looping fully auto gun shots
	FTimerHandle TimerHandle_HandleRefire;
};
