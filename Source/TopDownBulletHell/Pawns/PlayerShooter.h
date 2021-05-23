// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShooter.h"
#include "PlayerShooter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class TOPDOWNBULLETHELL_API APlayerShooter : public ABaseShooter
{
	GENERATED_BODY()
private:
    //Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    USpringArmComponent* SpringArm;
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
    UCameraComponent* Camera;
    

    //Movement
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
    float MoveSpeed = 100.f;
    void MoveRight(float Value);
    void MoveForward(float Value);

    
public:

    APlayerShooter();

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    virtual void Aim();
};
