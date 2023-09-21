#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AshirbakievAR.Control.V1.Lib/Tyuiu.AshirbakievAR.Control.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAshirbakievARControlV1Test
{
	TEST_CLASS(TyuiuAshirbakievARControlV1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* date = new Service;
			int a = 1;
			int b = 1;
			int c = 1;
			Assert::AreEqual(5.25, date->Proizved(a,b,c));
		}
	};
}
