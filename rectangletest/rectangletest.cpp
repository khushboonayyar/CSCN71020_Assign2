#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace rectangletest
{
	TEST_CLASS(rectangletest)
	{
	public:
		//task1
		TEST_METHOD(TestGetperimeter_ValidInputs)
		{
			int length = 10;
			int width = 5;

			int perimeter = getPerimeter(&length, &width);

			Assert::AreEqual(30, perimeter);
		}

		TEST_METHOD(TestGetArea_ValidInputs)
		{

			int length = 8;
			int width = 4;

			int area = getArea(&length, &width);

			Assert::AreEqual(32, area);

		}

	};
}

