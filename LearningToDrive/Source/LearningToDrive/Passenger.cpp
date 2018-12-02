// Thomas Arthur Simon

#include "Passenger.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APassenger::APassenger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->InitBoxExtent(FVector(50, 100, 80));
	RootComponent = BoxComponent;

	SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("statisMeshComponent"));
	SMComponent->SetupAttachment(RootComponent);

	SMAlert = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatisMeshComponent2"));
	SMAlert->SetupAttachment(SMComponent);
}

// Called when the game starts or when spawned
void APassenger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APassenger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

