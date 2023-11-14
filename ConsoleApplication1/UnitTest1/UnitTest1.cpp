#include "pch.h"
#include "CppUnitTest.h"
#include <cassert>
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(S0(N), S1(N, 1), 0.0001);
			Assert::AreEqual(S0(N), S2(N, N), 0.0001);
			Assert::AreEqual(S0(N), S3(N, 1, 0.0), 0.0001);
			Assert::AreEqual(S0(N), S4(N, N, 0.0), 0.0001);
		}
	};
}
