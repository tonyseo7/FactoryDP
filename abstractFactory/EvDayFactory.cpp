#include "stdafx.h"
#include "EvDayFactory.h"

Camera *EvDayFactory::CreateCamera() { return new EvCamera(); }
Lens *EvDayFactory::CreateLens() { return new EvLens(); }