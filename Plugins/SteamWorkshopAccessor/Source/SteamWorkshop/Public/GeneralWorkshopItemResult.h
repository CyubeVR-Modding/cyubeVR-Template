#pragma once
#include "CoreMinimal.h"
#include "SteamUGCItemId.h"
#include "SteamResult.h"
#include "GeneralWorkshopItemResult.generated.h"

USTRUCT(BlueprintType)
struct FGeneralWorkshopItemResult : public FSteamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSteamUGCItemId workshopItemID;
    
    STEAMWORKSHOP_API FGeneralWorkshopItemResult();
};

