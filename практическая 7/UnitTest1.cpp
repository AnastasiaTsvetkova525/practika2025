#include "pch.h"
#include "CppUnitTest.h"
#include "..\task7\практическая 7.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(PerimeterOperationsTests)
    {
    public:
        // Позитивный тест 1: квадрат
        TEST_METHOD(TestSquarePerimeter_ValidInput_ReturnsCorrectValue)
        {
            double a = 5.0;
            double result = PerimeterOperations::squarePerimeter(a);
            Assert::AreEqual(20.0, result, 0.0001);
        }

        // Позитивный тест 2: окружность
        TEST_METHOD(TestCircleCircumference_ValidInput_ReturnsCorrectValue)
        {
            double r = 2.0;
            const double PI = 3.14159265358979323846;
            double expected = 2.0 * PI * r;
            double result = PerimeterOperations::circleCircumference(r);
            Assert::AreEqual(expected, result, 0.0001);
        }

        // Негативный тест 1: квадрат с отрицательной стороной
        TEST_METHOD(TestSquarePerimeter_NegativeSide_ThrowsException)
        {
            double a = -1.0;
            Assert::ExpectException<std::invalid_argument>(
                [&]() { PerimeterOperations::squarePerimeter(a); }
            );
        }

        // Негативный тест 2: несуществующий треугольник
        TEST_METHOD(TestTrianglePerimeter_InvalidSides_ThrowsException)
        {
            double a = 1.0;
            double b = 2.0;
            double c = 3.0;
            Assert::ExpectException<std::invalid_argument>(
                [&]() { PerimeterOperations::trianglePerimeter(a, b, c); }
            );
        }
    };
}
