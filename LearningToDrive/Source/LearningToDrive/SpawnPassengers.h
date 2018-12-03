// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPassengers.generated.h"

UENUM(BlueprintType)
enum class EDriectionEnum : uint8
{
	North 	UMETA(DisplayName = "North"),
	East 	UMETA(DisplayName = "East"),
	South	UMETA(DisplayName = "South"),
	West	UMETA(DisplayName = "West")
};

UCLASS()
class LEARNINGTODRIVE_API ASpawnPassengers : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	EDriectionEnum DirectionEnum;

	UPROPERTY(EditDefaultsOnly, Category = Passenger)
	TSubclassOf<class APassenger> PassengerClass;

	UPROPERTY(EditAnywhere)
	bool IsHorizontal;

	UPROPERTY(EditAnywhere)
	bool IsLeft;

	float MaxX;
	float MaxY;
	float MinX;
	float MinY;
	float FinalX;
	float FinalY;

	FVector SpawnLoc;
	FRotator SpawnRot;

	void SetSpawnLoc();
	void Spawn();

public:	

	ASpawnPassengers();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
