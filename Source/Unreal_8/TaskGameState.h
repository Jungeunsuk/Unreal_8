// TaskGameState.h
public:
	UPROPERTY(BlueprintReadOnly, Category = "Wave")
	int32 CurrentWave = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Wave")
	int32 MaxWaves = 3;

	// 웨이브 시작 알림 함수
	void StarWaveNotifcation();