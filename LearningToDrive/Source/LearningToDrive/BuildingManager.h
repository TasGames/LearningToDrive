// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.h"
#include "BuildingManager.generated.h"

UCLASS()
class LEARNINGTODRIVE_API ABuildingManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuildingManager();

	void SetTargetPosition();

	FVector GetTargetPosition();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<ABuilding*> ArrayOfBuilding;

	FVector BuildingLoc;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
