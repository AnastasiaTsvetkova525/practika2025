#include "pch.h"
#include "CppUnitTest.h"
#include "..\task7\практическая 7.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(PowerRootOperationsTests)
    {
    public:

        // Позитивный тест: square
        TEST_METHOD(TestSquare_Positive)
        {
            double value = 3.0;
            double expected = 9.0;
            double result = PowerRootOperations::square(value);
            Assert::AreEqual(expected, result, 0.0001);
        }

    };
}