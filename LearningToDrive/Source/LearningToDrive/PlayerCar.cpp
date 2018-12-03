// Thomas Arthur Simon

#include "PlayerCar.h"
#include "BuildingManager.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "EngineUtils.h"
#include "GameFramework/SpringArmComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "VehicleWheel.h"

APlayerCar::APlayerCar()
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->TargetOffset = FVector(0.f, 0.f, 200.f);
	SpringArm->SetRelativeRotation(FRotator(-15.f, 0.f, 0.f));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 600.0f;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 7.f;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
	Camera->FieldOfView = 90.f;

	Arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowMesh"));
	Arrow->SetupAttachment(RootComponent);
	Arrow->bCastDynamicShadow = false;
	Arrow->CastShadow = false;
	Arrow->SetVisibility(false);

	SM_Driver = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DriverMesh"));
	SM_Driver->SetupAttachment(RootComponent);
	SM_Driver->bCastDynamicShadow = false;
	SM_Driver->CastShadow = false;

	SM_Passenger = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PassengerMesh"));
	SM_Passenger->SetupAttachment(RootComponent);
	SM_Passenger->bCastDynamicShadow = false;
	SM_Passenger->CastShadow = false;
	SM_Passenger->SetVisibility(false);

	UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());

	check(Vehicle4W->WheelSetups.Num() == 4);

	Vehicle4W->WheelSetups[0].BoneName = FName("Wheel_Front_Left");
	Vehicle4W->WheelSetups[0].AdditionalOffset = FVector(0.f, -12.f, 0.f);

	Vehicle4W->WheelSetups[1].BoneName = FName("Wheel_Front_Right");
	Vehicle4W->WheelSetups[1].AdditionalOffset = FVector(0.f, 12.f, 0.f);

	Vehicle4W->WheelSetups[2].BoneName = FName("Wheel_Rear_Left");
	Vehicle4W->WheelSetups[2].AdditionalOffset = FVector(0.f, -12.f, 0.f);

	Vehicle4W->WheelSetups[3].BoneName = FName("Wheel_Rear_Right");
	Vehicle4W->WheelSetups[3].AdditionalOffset = FVector(0.f, 12.f, 0.f);

	HasPassenger = false;
	Seconds = 0;
}

void APlayerCar::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	for (TActorIterator<ABuildingManager> It(World, ABuildingManager::StaticClass()); It; ++It)
	{
		ABuildingManager* BM = *It;

		if (BM != NULL)
			B = BM;
	}

	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &APlayerCar::RepeatingFunction, 0.01f, true);
}

void APlayerCar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateArrow();
}

void APlayerCar::MoveForward(float Val)
{
	GetVehicleMovementComponent()->SetThrottleInput(Val);
}

void APlayerCar::MoveRight(float Val)
{
	GetVehicleMovementComponent()->SetSteeringInput(Val);
}

void APlayerCar::OnHandbrakePressed()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(true);
}

void APlayerCar::OnHandbrakeReleased()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(false);
}

void APlayerCar::PickupPassenger()
{
	HasPassenger = true;
	SM_Passenger->SetVisibility(true);
	Arrow->SetVisibility(true);

	B->SetTargetPosition();
	FVector BuildingLoc = B->GetTargetPosition();

}

void APlayerCar::DropOffPassenger()
{
	HasPassenger = false;
	SM_Passenger->SetVisibility(false);
	Arrow->SetVisibility(false);
}

void APlayerCar::RotateArrow()
{
	FVector BuildingLoc = B->GetTargetPosition();
	FVector CarLoc = GetActorLocation();

	FVector newD = BuildingLoc - GetActorLocation();
	newD.Z = 0.0f;
	FRotator rotDir = newD.Rotation() - GetActorForwardVector().Rotation();	//calc diff in reqiddir&curr. dir
	rotDir.Normalize();	//ensure rotation is a unit vector
	FRotator TotRot = FRotator(-20.0f, rotDir.Yaw + 180.0f, rotDir.Roll);
	Arrow->SetRelativeRotation(TotRot);

}

void APlayerCar::RepeatingFunction()
{
	Micro += 1;

	if (Micro >= 100)
	{
		Seconds += 1;
		Micro = 0;
	}

	if (Seconds >= 60)
	{
		Minutes += 1;
		Seconds = 0;
	}
}

void APlayerCar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCar::MoveRight);

	PlayerInputComponent->BindAction("Handbrake", IE_Pressed, this, &APlayerCar::OnHandbrakePressed);
	PlayerInputComponent->BindAction("Handbrake", IE_Released, this, &APlayerCar::OnHandbrakeReleased);

}