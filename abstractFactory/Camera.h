#pragma once
#include "Lens.h"

class Camera
{
	Lens *lens;

public:
	virtual bool TakeAPicture();
	virtual bool PutInLens(Lens *lens) = 0;
	Lens *GetOutLens();

protected:
	Camera(void);
	void SetLens(Lens *_lens);
	Lens *GetLens();
};
