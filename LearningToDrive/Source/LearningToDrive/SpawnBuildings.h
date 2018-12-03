// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.h"
#include "SpawnBuildings.generated.h"

UCLASS()
class LEARNINGTODRIVE_API ASpawnBuildings : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnBuildings();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector SpawnLoc;
	FRotator Rot;

	void Spawn();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
