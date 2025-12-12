#include <iostream> 
using namespace std;
int main() {
    setlocale(0, "");
    int number1;
    int number2;
    cout << "Введите первое целое число: ";
    cin >> number1;
    cout << "Введите второе целое число: ";
    cin >> number2;
    int sum = number1 + number2;
    cout << "Сумма чисел " << number1 << " и " << number2 << " равна: " << sum << endl;

    return 0;
}
