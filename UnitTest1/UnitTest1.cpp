#include "pch.h"
#include "CppUnitTest.h"
#include "../PR16/PR16.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            double x = 0.5;
            double eps = 0.0001;
            int n = 0;
            double s = 0;
            double expected = sin(x) / x;

            // Act
            double actual = S(x, eps, n, s);

            // Assert
            Assert::AreEqual(expected, actual, eps);
        }
    };
}