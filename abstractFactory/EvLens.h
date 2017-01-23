#pragma once
#include "Lens.h"

class EvLens: public Lens
{
public:

	virtual void Take();
	void AutoFocus();
};