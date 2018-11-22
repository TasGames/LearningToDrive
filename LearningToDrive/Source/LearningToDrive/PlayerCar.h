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
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = Wheels)
	TSubclassOf<class UVehicleWheel> FrontWheel;

	UPROPERTY(EditDefaultsOnly, Category = Wheels)
	TSubclassOf<class UVehicleWheel> RearWheel;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	
	APlayerCar();

	void MoveForward(float Val);
	void MoveRight(float Val);
	void OnHandbrakePressed();
	void OnHandbrakeReleased();

};
