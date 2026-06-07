// TaskGameState.cpp

void ATaskGameState::StartWaveNotification()
{
	// 화면 왼쪽 상단 알림
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("Wave %d 시작!"), CurrentWave));
	}

	// 로그 출력
	UE_LOG(LogTemp, Warning, TEXT("Wave %d 시작!"), CurrentWave);
}