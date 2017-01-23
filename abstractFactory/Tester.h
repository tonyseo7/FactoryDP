#pragma once
#include "EvDayFactory.h"
#include "HoDayFactory.h"

class Tester
{
	DayFactory *factories[2];

public:
	Tester(void);
	~Tester(void);

	void Test();

private:
	void Initialize();
	void TestCase(Camera *camera, Lens *lens);
	void TestDirect();
	void TestUsingFactory();
};
