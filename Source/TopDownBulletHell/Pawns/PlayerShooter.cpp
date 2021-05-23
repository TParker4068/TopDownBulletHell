// Fill out your copyright notice in the Description page of Project Settings.

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "PlayerShooter.h"

APlayerShooter::APlayerShooter()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void APlayerShooter::BeginPlay() 
{
	Super::BeginPlay();
}

void APlayerShooter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Binds Movement Events
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerShooter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerShooter::MoveRight);
	//Binds Shooting Events
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerShooter::StartFire);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &APlayerShooter::StopFire);

}

void APlayerShooter::MoveRight(float Value)
{
	//Calculate speed of moving object relative to controller thumbstick & fps
	float SpeedToMove = Value * MoveSpeed * GetWorld()->DeltaTimeSeconds;
	FVector HorizontalVector = FVector(SpeedToMove, 0, 0);
	AddActorWorldOffset(HorizontalVector);
}

void APlayerShooter::MoveForward(float Value)
{
	//Calculate speed of moving object relative to controller thumbstick & fps
	float SpeedToMove = Value * MoveSpeed * GetWorld()->DeltaTimeSeconds;
	FVector VerticalVector = FVector(0, SpeedToMove, 0);
	AddActorWorldOffset(VerticalVector);
}

void APlayerShooter::Aim() {
	return;
}


