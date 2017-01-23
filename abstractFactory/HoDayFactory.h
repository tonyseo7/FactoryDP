#pragma once
#include "DayFactory.h"
#include "HoCamera.h"
#include "HoLens.h"

class HoDayFactory : public DayFactory
{
public:
	virtual Camera *CreateCamera();
	virtual Lens *CreateLens();
};

