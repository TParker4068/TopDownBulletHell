// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShooter.generated.h"

class UCapsuleComponent;
class AGunBase;
class AProjectileBase;
UCLASS()
class TOPDOWNBULLETHELL_API ABaseShooter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseShooter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void HandleDestruction();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Moves GunLocation around the outside of the Mesh, declared Pure Virtual in Base Class
	virtual void Aim() PURE_VIRTUAL(ABaseShooter::Aim, );

	//Calculates the direction to fire by taking the GunLocation relative to the center of Shooter
	void CalculateDirectonToFire();

		//Shooting - Call corresponding methods of GunRef
	void StartFire();
	void StopFire();

	//Reference to a Gun Object that can be changed 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	AGunBase* GunRef;

	FVector DirectionToFire = FVector(0, 0, 0);

private:	
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;
	//USceneComponent to hold physical location of the "Gun"
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* GunLocation;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;
		
		
	
	//EFFECTS
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* DeathParticle;
	UPROPERTY(EditAnywhere, Category = "Effects")
	USoundBase* DeathSound;
	UPROPERTY(EditAnywhere, Category = "Effects");
	TSubclassOf<UCameraShake> ExplodeShake;

};
