#include "stdafx.h"
#include "HoCamera.h"

bool HoCamera::PutInLens(Lens *lens)
{
	HoLens *holens = dynamic_cast<HoLens *>(lens);

	if (holens == 0)
	{
		return false;
	}

	Camera::SetLens(lens);

	return true;
}

bool HoCamera::TakeAPicture()
{
	Lens *lens = Camera::GetLens();
	HoLens *holens = dynamic_cast<HoLens *>(lens);

	if (holens == 0)
	{
		return false;
	}

	holens->ManualFocus();

	return Camera::TakeAPicture();
}