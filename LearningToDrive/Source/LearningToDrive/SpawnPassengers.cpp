// Thomas Arthur Simon

#include "SpawnPassengers.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Passenger.h"

// Sets default values
ASpawnPassengers::ASpawnPassengers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void ASpawnPassengers::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 3; i++)
	{
		Spawn();
	}
	
}

// Called every frame
void ASpawnPassengers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnPassengers::SetSpawnLoc()
{
	if (DirectionEnum == EDriectionEnum::North)
	{
		MaxY = 5250.0f;
		MinY = -3450.0f;
		FinalY = FMath::RandRange(MinY, MaxY);

		FinalX = 4460.0f;

		SpawnRot = FRotator(0.0, 90.0, 0.0);
	}
	else if(DirectionEnum == EDriectionEnum::East)
	{
		MaxX = 4450.0f;
		MinX = -4250.0f;
		FinalX = FMath::RandRange(MinX, MaxX);

		FinalY = 5260.0f;

		SpawnRot = FRotator(0.0, 180.0, 0.0);
	}
	else if (DirectionEnum == EDriectionEnum::South)
	{
		MaxY = 5250.0f;
		MinY = -3450.0f;
		FinalY = FMath::RandRange(MinY, MaxY);

		FinalX = -4260.0f;

		SpawnRot = FRotator(0.0, 270.0, 0.0);
	}
	else
	{
		MaxX = 4450.0f;
		MinX = -4250.0f;
		FinalX = FMath::RandRange(MinX, MaxX);

		FinalY = -3470.0f;

		SpawnRot = FRotator(0.0, 0.0, 0.0);
	}

	SpawnLoc = FVector(FinalX, FinalY, 140.0);
}

void ASpawnPassengers::Spawn()
{
	if (GetWorld())
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = Instigator;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		SetSpawnLoc();

		GetWorld()->SpawnActor<APassenger>(PassengerClass, SpawnLoc, SpawnRot, SpawnParams);
	}
}