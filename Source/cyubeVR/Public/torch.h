#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EBlockTypeBP.h"
#include "ERotation.h"
#include "Torch.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class CYUBEVR_API ATorch : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockTypeBP TypeCPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_2_LOD0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* P_LOD1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERotation Rotation;
    
    ATorch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetColor(FColor Color_, EBlockTypeBP Type);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActive(bool Active);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromChunk();
    
};

