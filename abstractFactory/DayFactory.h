#pragma once
#include "Camera.h"
#include "Lens.h"
#include "common.h"
typedef vector<Camera *> VecCameras;
typedef vector<Lens *> VecLenses;
typedef vector<Camera *>::iterator CIter;
typedef vector<Lens *>::iterator LIter;

class DayFactory
{
	VecCameras vCameras;
	VecLenses vLenses;
	
public:
	virtual Camera *CreateCamera() = 0;
	virtual Lens *CreateLens() = 0;
	~DayFactory();

protected:
	void PutCamera(Camera *camera);
	void PutLens(Lens *lens);

private:
	void DisposeCameras();
	void DisposeLens();

};