// Thomas Arthur Simon

#include "SpawnBuildings.h"
#include "Building.h"


// Sets default values
ASpawnBuildings::ASpawnBuildings()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Rot = FRotator::ZeroRotator;
	SpawnLoc = FVector(-4700.0f, -3900.0f, 330.0f);
}

// Called when the game starts or when spawned
void ASpawnBuildings::BeginPlay()
{
	Super::BeginPlay();
	
	Spawn();
}

// Called every frame
void ASpawnBuildings::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnBuildings::Spawn()
{
	FActorSpawnParameters SpawnParams;

	for (int j = 0; j < 5; j++)
	{
		SpawnLoc.X = -4700.0f;
		SpawnLoc.Y += 1600.0f;

		for (int i = 0; i < 5; i++)
		{
			SpawnLoc.X += 1600.0f;
			ABuilding* Building = GetWorld()->SpawnActor<ABuilding>(ABuilding::StaticClass(), SpawnLoc, Rot, SpawnParams);
		}
	}
}