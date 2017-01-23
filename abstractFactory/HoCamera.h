#pragma once
#include "Camera.h"
#include "HoLens.h"

class HoCamera : public Camera
{
public:
	virtual bool TakeAPicture();
	virtual bool PutInLens(Lens *lens);
};
