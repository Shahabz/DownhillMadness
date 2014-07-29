

#include "DownhillMadness.h"
#include "VehiclePartBase.h"



#include "Kismet/GameplayStatics.h"
#include "SavedGameData.h"


AVehiclePartBase::AVehiclePartBase(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
}


// ----------------------------------------------------------------------------


void AVehiclePartBase::HidePart()
{
}


// ----------------------------------------------------------------------------


void AVehiclePartBase::ShowPart()
{
}


// ----------------------------------------------------------------------------


void AVehiclePartBase::SelectPart()
{
}


// ----------------------------------------------------------------------------


void AVehiclePartBase::DeselectPart()
{
}


// ----------------------------------------------------------------------------


void AVehiclePartBase::SetPartLocationAndRotation(FVector location, FRotator rotation)
{
}


// ----------------------------------------------------------------------------


UClass* AVehiclePartBase::GetPartClass(bool bGetSymmetricPart)
{
	if (!bGetSymmetricPart || this->symmetricPart == nullptr)
		return this->GetClass();
	else
		return this->symmetricPart;
}

