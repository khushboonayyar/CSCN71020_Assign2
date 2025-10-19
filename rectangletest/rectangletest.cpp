#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);

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
		//task2
		TEST_METHOD(TestSetLength_ValidInput)
		{

			int length = 50;

			setLength(25, &length);
			Assert::AreEqual(25, length);
		}

		TEST_METHOD(TestSetLength_MinBoundary)
		{

			int length = 50;
			setLength(0, &length);

			Assert::AreEqual(50, length);
		}
		TEST_METHOD(TestSetLength_MaxBoundary)
		{

			int length = 50;
			setLength(100, &length);

			Assert::AreEqual(50, length);
		}
		TEST_METHOD(TestSetWidth_ValidInput)
		{

			int width = 50;
			setWidth(40, &width);


			Assert::AreEqual(40, width);
		}

		TEST_METHOD(TestSetWidth_MinBoundary)
		{

			int width = 50;
			setWidth(0, &width);

			Assert::AreEqual(50, width);
		}
		TEST_METHOD(TestSetWidth_MaxBoundary)
		{

			int width = 50;
			setWidth(100, &width);

			Assert::AreEqual(50, width);
		}


	};
}

