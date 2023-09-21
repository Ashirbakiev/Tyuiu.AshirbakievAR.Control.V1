#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AshirbakievAR.Control.V1.Task1.Lib/Tyuiu.AshirbakievAR.Control.V1.Task1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAshirbakievARControlV1Task1Test
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service();
			int a = 123;
			Assert::AreEqual(6, date->Control(a));
		}
	};
}
