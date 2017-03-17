#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Vector/Vector.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Vectortest
{
	TEST_CLASS(CVector_test)
	{
	public:

		TEST_METHOD(getX_default)
		{
			CVector v;

			double expectedValue = 0.0;
			double actualValue = v.getX();

			Assert::AreEqual(expectedValue, actualValue);
		}

	};
}