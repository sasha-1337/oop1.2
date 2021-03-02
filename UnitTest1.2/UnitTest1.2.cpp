#include "pch.h"
#include "CppUnitTest.h"
#include "../oop1.2/Vector.h"
#include "D:\Student\oop1.2\oop1.2\Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector x;
			bool t;
			t = x.Init(10);
			Assert::AreEqual(t, true);
		}
	};
}
