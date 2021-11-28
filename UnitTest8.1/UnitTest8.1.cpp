#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.1/PR8.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81
{
	TEST_CLASS(UnitTest81)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char cs[10] = "wh";
			char str[10]= "while";
			bool t = Include(str, cs);
			Assert::AreEqual(false, t);
		}
	};
}
