// Thomas Arthur Simon

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MySaveGame.generated.h"

UCLASS()
class LEARNINGTODRIVE_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:

	UMySaveGame();

	UPROPERTY(EditAnywhere)
	int HMicro;

	UPROPERTY(EditAnywhere)
	int HSeconds;

	UPROPERTY(EditAnywhere)
	int HMinutes;
	
};
