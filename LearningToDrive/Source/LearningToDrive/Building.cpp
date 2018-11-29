// Thomas Arthur Simon

#include "Building.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ABuilding::ABuilding()
{
	PrimaryActorTick.bCanEverTick = true;

	SMComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("statisMeshComponent"));
	SMComponent->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> UseMesh(TEXT("StaticMesh'/Game/MyContent/Meshes/SM_Building.SM_Building'"));
	SMComponent->SetStaticMesh(UseMesh.Object);

}

// Called when the game starts or when spawned
void ABuilding::BeginPlay()
{
	Super::BeginPlay();
	
	ChangeColour();
}

// Called every frame
void ABuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilding::ChangeColour()
{
	if (SMComponent->GetMaterial(0))
	{
		UMaterialInstanceDynamic* MDynamic = UMaterialInstanceDynamic::Create(SMComponent->GetMaterial(0), this);

		float RandR = FMath::RandRange(0.0f, 1.0f);
		float RandG = FMath::RandRange(0.0f, 1.0f);
		float RandB = FMath::RandRange(0.0f, 1.0f);

		MDynamic->SetVectorParameterValue(FName(TEXT("Colour")), FLinearColor(RandR, RandG, RandB));

		SMComponent->SetMaterial(0, MDynamic);

	}

}