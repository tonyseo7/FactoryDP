#include "stdafx.h"
#include "Tester.h"

Tester::Tester(void)
{
	Initialize();
}

Tester::~Tester(void)
{
	delete factories[0];
	delete factories[1];
}

void Tester::Initialize()
{
	factories[0] = new EvDayFactory();
	factories[1] = new HoDayFactory();
}

void Tester::Test()
{
	TestDirect();
	TestUsingFactory();
}

void Tester::TestDirect()
{
	Camera *camera = new EvCamera();
	Lens *lens = new HoLens();
	TestCase(camera, lens);
	delete camera;
	delete lens;
}

void Tester::TestUsingFactory()
{
	Camera *camera = factories[0]->CreateCamera();
	Lens *lens = factories[1]->CreateLens();
	TestCase(camera, lens);
	camera = factories[1]->CreateCamera();
	lens = factories[1]->CreateLens();
	TestCase(camera, lens);
}

void Tester::TestCase(Camera *camera, Lens *lens)
{
	cout << "테스트" << endl;

	if (camera->PutInLens(lens) == 0)
	{
		cout << "카메라에 렌즈가 장착이 되지 않았음" << endl;
	}

	if (camera->TakeAPicture() == 0)
	{
		cout << "사진이 찍히지 않았습니다." << endl;
	}
}