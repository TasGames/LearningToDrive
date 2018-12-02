// Thomas Arthur Simon

#include "SpawnPassengers.h"


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
	
}

// Called every frame
void ASpawnPassengers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

