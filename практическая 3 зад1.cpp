#include <iostream>
#include <iomanip>

/// <summary>
/// Вычисляет периметр треугольника по трем его сторонам.
/// </summary>
/// <param name="a">Длина первой стороны.</param>
/// <param name="b">Длина второй стороны.</param>
/// <param name="c">Длина третьей стороны.</param>
/// <returns>
/// Сумма всех сторон (периметр). 
/// Возвращает 0, если хотя бы одна сторона отрицательная.
/// </returns>
double calculateTrianglePerimeter(double a, double b, double c)
{
    if (a < 0 || b < 0 || c < 0)
    {
        return 0.0;
    }
    return a + b + c;
}

int main()
{
    // Установка локали для корректного отображения кириллицы
    setlocale(LC_ALL, "Russian");

    double side1, side2, side3;

    std::cout << " Расчет периметра треугольника " << std::endl;
    std::cout << "Введите длины трех сторон: ";

    if (std::cin >> side1 >> side2 >> side3)
    {
        double perimeter = calculateTrianglePerimeter(side1, side2, side3);

        if (perimeter > 0)
        {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "Периметр треугольника равен: " << perimeter << std::endl;
        }
        else
        {
            std::cout << "Ошибка: длины сторон не могут быть отрицательными." << std::endl;
        }
    }
    else
    {
        std::cout << "Ошибка: введено некорректное значение." << std::endl;
    }
    // Тестовые примеры
    double testCases[][3] = {
        {3.0, 4.0, 5.0},   // Прямоугольный треугольник
        {7.5, 7.5, 7.5},   // Равносторонний треугольник
        {10.0, 6.0, 8.0},  // Разносторонний треугольник
        {1.0, 2.0, 3.5}    // Невалидный треугольник
    };

    int numTests = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTests; ++i) {
        double a = testCases[i][0];
        double b = testCases[i][1];
        double c = testCases[i][2];

        std::cout << "Тест #" << (i + 1) << ": стороны = " << a << ", " << b << ", " << c << "\n";

        if (calculateTrianglePerimeter(a, b, c)) {
            double perimeter = calculateTrianglePerimeter(a, b, c);
            std::cout << "Периметр: " << perimeter << "\n";
        }
        else {
            std::cout << "Ошибка: треугольник с такими сторонами не существует!\n";
        }

        std::cout << "----------------------\n";
    }

    return 0;

  

}


