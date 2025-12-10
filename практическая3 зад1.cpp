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

    return 0;

}
