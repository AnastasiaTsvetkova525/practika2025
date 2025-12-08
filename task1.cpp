#include <iostream> 
using namespace std;
int main () {
    setlocale (0, "");
    int number1;
    int number2;
    cout << "¬ведите первое целое число: ";
    cin >> number1;
    cout << "¬ведите второе целое число: ";
    cin >> number2;
    int sum = number1 + number2;
    cout << "—умма чисел " << number1 << " и " << number2 << " равна: " << sum << endl;

    return 0;
}

