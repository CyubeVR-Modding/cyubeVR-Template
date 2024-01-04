#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBlockTypeBP.h"
#include "Storage.h"
#include "ChestInternals.generated.h"

class AChest;
class AInventory;

UCLASS(Blueprintable)
class CYUBEVR_API AChestInternals : public AStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Initialized;
    
    AChestInternals(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVisualsEvent(bool MarkForSave);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSingleItemFromSlot(int32 FromIndex, bool& success);
    
    UFUNCTION(BlueprintCallable)
    void InitializeChestInternals(AInventory* Inventory_, AChest* ParentChest_);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToSlot(EBlockTypeBP ToAdd, int32 ToAddID, float ToAddChargeState, FColor ToAddCrystalColor, int32 Amount, int32 ToIndex, int32 FromInventoryIndex, bool& success);
    
};

