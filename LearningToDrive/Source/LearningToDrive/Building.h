// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Building.generated.h"

UCLASS()
class LEARNINGTODRIVE_API ABuilding : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* SMComponent;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxComponent;

public:	
	// Sets default values for this actor's properties
	ABuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ChangeColour();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
