#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.6.2.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest622
{
	TEST_CLASS(UnitTest622)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { -4, -1, 4, 7 };
			SumElements(A, 5, 0);
			Assert::AreEqual(7, A[3]);
		}
	};
}
