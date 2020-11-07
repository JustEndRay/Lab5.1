#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.1/Lab5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab51
{
	TEST_CLASS(UnitTestLab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t; t = g(10,0,10);
			Assert::AreEqual(t, 1.0);
		}
	};
}
