// TaskGameMode.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TaskGameMode.generated.h"

UCLASS()
class UNREAL_8_API ATaskGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	// 다음 맵으로 이동시키는 함수
	UFUNCTION(BlueprintCallable, Category = "Level")
	void MoveToNextLevel(FName LevelName);

	virtual void BeginPlay() override;
};