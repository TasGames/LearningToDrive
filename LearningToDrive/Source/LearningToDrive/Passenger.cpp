// Thomas Arthur Simon

#include "Passenger.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerCar.h"

APassenger::APassenger()
{
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->InitBoxExtent(FVector(50, 100, 60));
	RootComponent = BoxComponent;
	BoxComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &APassenger::OnBeginOverlap);

	SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("statisMeshComponent"));
	SMComponent->SetupAttachment(RootComponent);

	SMAlert = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StatisMeshComponent2"));
	SMAlert->SetupAttachment(SMComponent);
	SMAlert->SetVisibility(false);

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

void APassenger::OnBeginOverlap(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (OtherActor != this)
	{
		APlayerCar *P = Cast<APlayerCar>(OtherActor);
		if (P != NULL)
		{
			if (P->HasPassenger == false)
			{
				Destroy();
				P->PickupPassenger();
			}
		}
	}
}