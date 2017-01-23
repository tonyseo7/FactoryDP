#pragma once
#include "Lens.h"

class HoLens : public Lens
{
public:
	virtual void Take();
	void ManualFocus();
};
