#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\pc\Desktop\Нова папка\ОІПЗ лаби\Lab3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
    TEST_CLASS(calculate_Tests)
    {
    public:
        TEST_METHOD(calculate_get3and2_2returned)
        {
            double x = 3;
            double n = 2;
            double expected = 4;

            double actual = calculate(x, n);

            Assert::AreEqual(expected, actual);
        }

        TEST_METHOD(calculate_getNegative3and3_1point66667returned)
        {
            double x = -3;
            double n = 3;
            double expected = 1.66667;

            double actual = calculate(x, n);

            Assert::AreEqual(expected, actual, 0.01);
        }
    };
}
