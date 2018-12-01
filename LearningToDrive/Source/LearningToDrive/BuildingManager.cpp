// Thomas Arthur Simon

#include "BuildingManager.h"
#include "EngineUtils.h"

// Sets default values
ABuildingManager::ABuildingManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABuildingManager::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* World = GetWorld();

	for (TActorIterator<ABuilding> It(World, ABuilding::StaticClass()); It; ++It)
	{
		ABuilding* Building = *It;

		if (Building != NULL)
			ArrayOfBuilding.Add(Building);
	}
}

// Called every frame
void ABuildingManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuildingManager::SetTargetPosition()
{
	int NumBuildings = ArrayOfBuilding.Num();

	if (NumBuildings == 0)
		return;

	int RandNum = FMath::RandRange(0, NumBuildings - 1);

	ABuilding* Building = ArrayOfBuilding[RandNum];
	BuildingLoc = Building->GetActorLocation();

}

FVector ABuildingManager::GetTargetPosition()
{
	return BuildingLoc;
}
