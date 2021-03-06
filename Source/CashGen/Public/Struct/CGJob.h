#pragma once
#include "RuntimeMeshComponent.h"
#include "Struct/IntVector2.h"
#include "Struct/CGTileHandle.h"
#include "CGJob.generated.h"

class ACGTile;
struct FCGMeshData;

USTRUCT(BlueprintType)
struct FCGJob
{
	GENERATED_USTRUCT_BODY()


	FIntVector2 mySector;
	
	FCGTileHandle myTileHandle;

	FCGMeshData* Data;

	int32 HeightmapGenerationDuration;
	int32 ErosionGenerationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashGen")
	uint8 LOD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CashGen")
	bool IsInPlaceUpdate;
};