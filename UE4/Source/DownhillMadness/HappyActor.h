

#pragma once

#include "GameFramework/Actor.h"
#include "HappyActor.generated.h"

/**
 * 
 */
UCLASS()
class AHappyActor : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(Category = DriverPawn, BlueprintReadOnly, VisibleDefaultsOnly)
	TSubobjectPtr<class UArrowComponent> FrontArrow;

	UPROPERTY(Category = DriverPawn, BlueprintReadOnly, VisibleDefaultsOnly)
	TSubobjectPtr<class USkeletalMeshComponent> DriverSkeletalMesh;

	UPROPERTY(Category = DriverPawn, BlueprintReadOnly, VisibleDefaultsOnly)
	TSubobjectPtr<class UStaticMeshComponent> PlayerMaterialBillboard;
};
