#include "stdafx.h"
#include "Tester.h"

void main()
{
	Tester *tester = new Tester();
	tester->Test();

	delete tester;
}