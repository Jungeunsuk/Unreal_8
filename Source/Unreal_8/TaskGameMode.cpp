// TaskGameMode.cpp

#include "TaskGameMode.h"
#include "Kismet/GameplayStatics.h"

void ATaskGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ATaskGameMode::MoveToNextLevel(FName LevelName)
{
	if (!LevelName.IsNone())
	{
		// 지정한 이름의 맵으로 플레이어를 보낸다
		UGameplayStatics::OpenLevel(GetWorld(), LevelName);
	}
}