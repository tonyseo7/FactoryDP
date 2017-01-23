#include "stdafx.h"
#include "EvCamera.h"

bool EvCamera::PutInLens(Lens *lens)
{
	EvLens *evlens = dynamic_cast<EvLens *>(lens);

	if (evlens == 0)
	{
		return false;
	}

	Camera::SetLens(lens);

	return true;
}

bool EvCamera::TakeAPicture()
{
	Lens *lens = Camera::GetLens();
	EvLens *evlens = dynamic_cast<EvLens *>(lens);

	if (evlens == 0)
	{
		return false;
	}

	evlens->AutoFocus();

	return Camera::TakeAPicture();
}