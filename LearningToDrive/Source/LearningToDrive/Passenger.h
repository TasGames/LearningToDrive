// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Passenger.generated.h"

UCLASS()
class LEARNINGTODRIVE_API APassenger : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* SMComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	UStaticMeshComponent* SMAlert;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxComponent;
	
public:	
	// Sets default values for this actor's properties
	APassenger();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
