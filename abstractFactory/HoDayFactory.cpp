#include "stdafx.h"
#include "HoDayFactory.h"

Camera *HoDayFactory::CreateCamera()
{
	return new HoCamera();
}

Lens *HoDayFactory::CreateLens()
{
	return new HoLens();
}