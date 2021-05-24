// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/GameplayStatics.h"
#include "TopDownBulletHell/TopDownBulletHellGameModeBase.h"
#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = DefaultMaxHealth;

	GameModeRef = Cast<ATopDownBulletHellGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	//Makes UGameplayStatics::ApplyDamage call TakeDamage method
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigateBy, AActor* DamageCauser)
{
	if (Damage == 0 || CurrentHealth <= 0)
	{
		return;
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.f, DefaultMaxHealth);

	if (CurrentHealth <= 0) {
		if (GameModeRef) {
			//GameModeRef->ActorDied(GetOwner());
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Health component has no reference to game mode"));
		}
	}
}


