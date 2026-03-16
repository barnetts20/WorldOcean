#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScreenSpaceProjectedOceanActor.generated.h"

UCLASS()
class WORLDOCEAN_API AScreenSpaceProjectedOceanActor : public AActor
{
    GENERATED_BODY()

public:
    AScreenSpaceProjectedOceanActor();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ocean|Mesh")
    UStaticMesh* OceanPlaneMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ocean|Mesh")
    UMaterialInterface* OceanMaterial;

    // Distance from camera to place the projection plane.
    // Must be past the near clip plane (~10). Lower = less precision drift.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ocean|Projection", meta = (ClampMin = "15", ClampMax = "10000"))
    double PlaneDistance = 1000.0;

    virtual void OnConstruction(const FTransform& Transform) override;
    virtual void Tick(float DeltaTime) override;
    virtual bool ShouldTickIfViewportsOnly() const override { return true; }

private:
    UPROPERTY()
    TObjectPtr<UStaticMeshComponent> PlaneMeshComponent;

    bool GetActiveCamera(FVector& OutLocation, FRotator& OutRotation, double& OutFOV, double& OutAspectRatio) const;
    void UpdatePlaneTransform(FVector CameraLocation, FRotator CameraRotation, double FOV, double AspectRatio);
};