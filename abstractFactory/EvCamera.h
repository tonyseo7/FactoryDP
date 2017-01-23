#pragma once
#include "Camera.h"
#include "EvLens.h"

class EvCamera : public Camera
{
public:
	virtual bool TakeAPicture();
	virtual bool PutInLens(Lens *lens);
};
