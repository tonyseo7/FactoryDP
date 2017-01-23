#pragma once
#include "DayFactory.h"
#include "EvCamera.h"
#include "EvLens.h"

class  EvDayFactory : public DayFactory
{
public:
	virtual Camera *CreateCamera();
	virtual Lens *CreateLens();
};

