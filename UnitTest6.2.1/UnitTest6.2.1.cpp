#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.6.2.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, 7, -3,-1 };
			int S = SumElements(A, 4);
			Assert::AreEqual(6, S);
		}
	};
}
