#include "stdafx.h"
#include "Camera.h"

Camera::Camera(void)
{
	lens = 0;
}

bool Camera::TakeAPicture()
{
	if (lens == 0)
	{
		return false;
	}

	lens->Take();

	return true;
}

Lens *Camera::GetOutLens()
{
	Lens *re = lens;
	
	lens = 0;
	
	return re;
}


void Camera::SetLens(Lens *_lens)
{
	lens = _lens;
}

Lens *Camera::GetLens()
{
	return lens;
}