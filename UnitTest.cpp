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
            double expected = 2;

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

    TEST_CLASS(checkValidParams_Tests)
    {
    public:
        TEST_METHOD(checkValidParams_getValidParams_NoExceptionThrown)
        {
            double a = 1;
            double b = 2;
            double h = 1;
            double n = 3;

            try {
                checkValidParams(a, b, h, n);
                Assert::IsTrue(true);
            }
            catch (...) {
                Assert::Fail();
            }
        }

        TEST_METHOD(checkValidParams_getInvalidParams_ExceptionThrown)
        {
            double a = 4;
            double b = -4;
            double h = 1;
            double n = 4;

            try {
                checkValidParams(a, b, h, n);
                Assert::Fail();
            }
            catch (...) {
                Assert::IsTrue(true);
            }
        }
    };
}
