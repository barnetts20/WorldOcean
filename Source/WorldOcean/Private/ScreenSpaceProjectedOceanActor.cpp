#include "ScreenSpaceProjectedOceanActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"

AScreenSpaceProjectedOceanActor::AScreenSpaceProjectedOceanActor()
{
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;

    PlaneMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OceanPlane"));
    RootComponent = PlaneMeshComponent;

    PlaneMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    PlaneMeshComponent->SetCastShadow(false);
    PlaneMeshComponent->SetVisibleInRayTracing(false);

    // Load the screenspace subdivision plane from plugin content
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshFinder(
        TEXT("/WorldOcean/Screenspace_SubDiv_Plane.Screenspace_SubDiv_Plane"));
    if (MeshFinder.Succeeded())
    {
        PlaneMeshComponent->SetStaticMesh(MeshFinder.Object);
        OceanPlaneMesh = MeshFinder.Object;
    }
}

void AScreenSpaceProjectedOceanActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (OceanPlaneMesh)
        PlaneMeshComponent->SetStaticMesh(OceanPlaneMesh);
    if (OceanMaterial)
        PlaneMeshComponent->SetMaterial(0, OceanMaterial);
}

bool AScreenSpaceProjectedOceanActor::GetActiveCamera(FVector& OutLocation, FRotator& OutRotation, double& OutFOV, double& OutAspectRatio) const
{
    UWorld* World = GetWorld();
    if (!World) return false;

    // Defaults
    OutFOV = 90.0;
    OutAspectRatio = 16.0 / 9.0;

    // Play mode: use player camera manager
    APlayerCameraManager* CamManager = UGameplayStatics::GetPlayerCameraManager(World, 0);
    if (CamManager)
    {
        OutLocation = CamManager->GetCameraLocation();
        OutRotation = CamManager->GetCameraRotation();
        OutFOV = CamManager->GetFOVAngle();

        if (GEngine && GEngine->GameViewport)
        {
            FVector2D ViewportSize;
            GEngine->GameViewport->GetViewportSize(ViewportSize);
            if (ViewportSize.Y > 0)
                OutAspectRatio = ViewportSize.X / ViewportSize.Y;
        }
        return true;
    }

    return false;
}

void AScreenSpaceProjectedOceanActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CameraLocation;
    FRotator CameraRotation;
    double FOV;
    double AspectRatio;

    if (GetActiveCamera(CameraLocation, CameraRotation, FOV, AspectRatio))
    {
        UpdatePlaneTransform(CameraLocation, CameraRotation, FOV, AspectRatio);
    }
}

void AScreenSpaceProjectedOceanActor::UpdatePlaneTransform(FVector CameraLocation, FRotator CameraRotation, double FOV, double AspectRatio)
{
    // Position: PlaneDistance in front of camera
    FVector Forward = CameraRotation.Vector();
    FVector Location = CameraLocation + Forward * PlaneDistance;

    // Rotation: plane's local Z faces back toward camera
    FRotator PlaneRotation = FRotationMatrix::MakeFromZ(-Forward).Rotator();

    // Scale: mesh is 2x2 units (half-extent = 1.0)
    // At PlaneDistance, the viewport half-width = tan(HalfFOV) * Distance
    // 10% buffer ensures full coverage during fast camera movement
    double HalfFOVRad = FMath::DegreesToRadians(FOV * 0.5);
    double ScaleH = FMath::Tan(HalfFOVRad) * PlaneDistance * 1.5;
    double ScaleV = ScaleH / AspectRatio;

    // Scale axes depend on plane mesh orientation (flat on XY, Z up)
    // After rotation, the plane's local X and Y map to screen horizontal and vertical
    FVector Scale(ScaleH, ScaleV, 1.0);

    SetActorTransform(FTransform(PlaneRotation.Quaternion(), Location, Scale));
}