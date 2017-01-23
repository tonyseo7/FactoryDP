#include "stdafx.h"
#include "DayFactory.h"



void DayFactory::PutCamera(Camera *camera) { vCameras.push_back(camera); }
void DayFactory::PutLens(Lens *lens) { vLenses.push_back(lens); }

DayFactory::~DayFactory()
{
	DisposeCameras();
	DisposeLens();
}


void DayFactory::DisposeCameras()
{
	CIter iter = vCameras.begin();
	CIter end = vCameras.end();
	Camera *camera = 0;

	for (; iter != end; ++iter)
	{
		camera = *iter;
		delete camera;
	}
}

void DayFactory::DisposeLens()
{
	LIter iter = vLenses.begin();
	LIter end = vLenses.end();
	Lens *lens = 0;

	for (; iter != end; ++iter)
	{
		lens = *iter;
		delete lens;
	}
}
