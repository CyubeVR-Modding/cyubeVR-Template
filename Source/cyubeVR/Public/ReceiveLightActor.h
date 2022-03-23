#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightReceiveInterface.h"
#include "UObject/NoExportTypes.h"
#include "ReceiveLightActor.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;

UCLASS(Abstract)
class CYUBEVR_API AReceiveLightActor : public AActor, public ILightReceiveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InitLightImmediate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLightAroundValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> LightReceiveMeshes;
    
    AReceiveLightActor();
    UFUNCTION(BlueprintCallable)
    bool UseLightAroundValue();
    
    UFUNCTION(BlueprintCallable)
    void SetLightReceiveMeshes(TArray<UMeshComponent*> NewMeshes);
    
    UFUNCTION(BlueprintCallable)
    FVector ManualTickLight(UMaterialInstanceDynamic* DynamicMaterial);
    
    UFUNCTION(BlueprintCallable)
    TArray<UMeshComponent*> GetMeshComponents();
    
    
    // Fix for true pure virtual functions not being implemented
    //UFUNCTION(BlueprintCallable)
    bool UseActorCustomLocation() override PURE_VIRTUAL(UseActorCustomLocation, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool TickReceiveLight() override PURE_VIRTUAL(TickReceiveLight, return false;);
    
    UFUNCTION(BlueprintCallable)
    void LightInterfaceBeginPlay(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginPlay,);
    
    UFUNCTION(BlueprintCallable)
    void LightInterfaceBeginDestroy(AActor* ThisActor) override PURE_VIRTUAL(LightInterfaceBeginDestroy,);
    
    //UFUNCTION(BlueprintCallable)
    FVector GetActorCustomLocation() override PURE_VIRTUAL(GetActorCustomLocation, return FVector{};);
    
};

