// Thomas Arthur Simon

#include "LearningToDriveGameModeBase.h"
#include "Blueprint/UserWidget.h"

void ALearningToDriveGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);

		if (CurrentWidget != nullptr)
			CurrentWidget->AddToViewport();
	}
}
