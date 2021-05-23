// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownBulletHell/Weapons/Guns/GunBase.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "BaseShooter.h"

// Sets default values
ABaseShooter::ABaseShooter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	Mesh->SetupAttachment(RootComponent);

	GunLocation = CreateDefaultSubobject<USceneComponent>(TEXT("Gun Location"));

	/*HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));*/
}

// Called when the game starts or when spawned
void ABaseShooter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseShooter::StartFire()
{
	GunRef->StartFire(DirectionToFire, GunLocation->GetComponentTransform());
}

void ABaseShooter::StopFire()
{
	GunRef->StopFire();
}

// Called every frame
void ABaseShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseShooter::HandleDestruction()
{
	//Play death particle, sound effects, camera shake effect
	/* UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticle, GetActorLocation());
	UGameplayStatics::SpawnSoundAtLocation(this, DeathSound, GetActorLocation());
	GetWorld()->GetFirstPlayerController()->ClientPlayCameraShake(ExplodeShake); */
}

