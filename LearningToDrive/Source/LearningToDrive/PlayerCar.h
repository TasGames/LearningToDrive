// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "PlayerCar.generated.h"

UCLASS()
class LEARNINGTODRIVE_API APlayerCar : public AWheeledVehicle
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* Arrow;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* SM_Driver;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class UStaticMeshComponent* SM_Passenger;
	
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = BuildingManager)
	class ABuildingManager* B;

	void RotateArrow();

	void RepeatingFunction();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite)
	int Micro;

	UPROPERTY(BlueprintReadWrite)
	int Seconds;

	UPROPERTY(BlueprintReadWrite)
	int Minutes;

	FVector RespawnLoc;
	FRotator RespawnRot;

	struct FTimerHandle MemberTimerHandle;

public:
	
	APlayerCar();

	virtual void Tick(float DeltaTime) override;

	void MoveForward(float Val);
	void MoveRight(float Val);
	void OnHandbrakePressed();
	void OnHandbrakeReleased();

	void Respawn();

	void PickupPassenger();
	void DropOffPassenger();

	UFUNCTION(BlueprintNativeEvent, Category = Win)
	void Win();

	bool HasPassenger;
	bool GameOver;

	UPROPERTY(BlueprintReadWrite)
	int NumPassengers;

};
