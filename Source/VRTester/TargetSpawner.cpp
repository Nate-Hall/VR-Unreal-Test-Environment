// Fill out your copyright notice in the Description page of Project Settings.

#include "TargetSpawner.h"
#include "Runtime/Engine/Classes/Engine/World.h"


// Sets default values
ATargetSpawner::ATargetSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

void ATargetSpawner::SpawnTarget()
{
	if (TargetCube) {
		UWorld* world = GetWorld();
		if (world) {
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = this;

			FRotator rotator;

			FVector spawnLocation = this->GetActorLocation();

			world->SpawnActor<AActor>(TargetCube, spawnLocation, rotator, spawnParams);
		}
	}
}

// Called when the game starts or when spawned
void ATargetSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

