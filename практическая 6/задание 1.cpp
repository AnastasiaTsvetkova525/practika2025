#include <iostream>
#include <vector>

class ElementFinder {
private:
    std::vector<int> array;
    int size;

public:
    // Конструктор по умолчанию
    ElementFinder() : size(0) {}

    // Конструктор с параметрами
    ElementFinder(int* arr, int sz) {
        setArray(arr, sz);
    }

    // Установить массив
    void setArray(int* arr, int sz) {
        size = sz;
        array.clear();
        for (int i = 0; i < sz; i++) {
            array.push_back(arr[i]);
        }
    }

    // Найти элемент (вернуть индекс первого вхождения)
    // Возвращает -1, если элемент не найден
    int findElement(int target) const {
        for (int i = 0; i < size; i++) {
            if (array[i] == target) {
                return i;
            }
        }
        return -1; // Элемент не найден
    }

    // Посчитать количество вхождений элемента
    int countOccurrences(int target) const {
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (array[i] == target) {
                count++;
            }
        }
        return count;
    }

    // Проверить наличие элемента
    bool contains(int target) const {
        return findElement(target) != -1;
    }

    // Дополнительные методы для удобства

    // Найти все индексы вхождений элемента
    std::vector<int> findAllIndices(int target) const {
        std::vector<int> indices;
        for (int i = 0; i < size; i++) {
            if (array[i] == target) {
                indices.push_back(i);
            }
        }
        return indices;
    }

    // Найти индекс последнего вхождения элемента
    int findLastElement(int target) const {
        for (int i = size - 1; i >= 0; i--) {
            if (array[i] == target) {
                return i;
            }
        }
        return -1;
    }

    // Получить размер массива
    int getSize() const {
        return size;
    }

    // Вывести массив
    void printArray() const {
        setlocale(0, "");
        std::cout << "Массив: [";
        for (int i = 0; i < size; i++) {
            std::cout << array[i];
            if (i < size - 1) std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }

    // Получить элемент по индексу
    int getElement(int index) const {
        setlocale(0, "");
        if (index >= 0 && index < size) {
            return array[index];
        }
        throw std::out_of_range("Индекс вне диапазона");
    }
};

// Демонстрация работы класса
int main() {
    setlocale(0, "");
    // Создание массива
    int arr[] = { 5, 3, 7, 3, 9, 3, 1, 7, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Создание объекта класса
    ElementFinder finder;
    finder.setArray(arr, size);

    std::cout << "=== Демонстрация класса ElementFinder ===" << std::endl;
    finder.printArray();
    std::cout << std::endl;

    // Поиск элемента
    int target = 7;
    int index = finder.findElement(target);
    std::cout << "findElement(" << target << "): ";
    if (index != -1) {
        std::cout << "найден на индексе " << index << std::endl;
    }
    else {
        std::cout << "не найден" << std::endl;
    }

    // Подсчет вхождений
    target = 3;
    int count = finder.countOccurrences(target);
    std::cout << "countOccurrences(" << target << "): " << count << " раз(а)" << std::endl;

    // Проверка наличия элемента
    target = 9;
    bool exists = finder.contains(target);
    std::cout << "contains(" << target << "): " << (exists ? "да" : "нет") << std::endl;

    target = 15;
    exists = finder.contains(target);
    std::cout << "contains(" << target << "): " << (exists ? "да" : "нет") << std::endl;

    std::cout << std::endl;

    // Дополнительные примеры
    std::cout << "=== Дополнительные методы ===" << std::endl;

    // Найти все индексы
    target = 3;
    std::vector<int> indices = finder.findAllIndices(target);
    std::cout << "findAllIndices(" << target << "): [";
    for (size_t i = 0; i < indices.size(); i++) {
        std::cout << indices[i];
        if (i < indices.size() - 1) std::cout << ", ";
    }
    std::cout << "]" <<
        std::endl;

    // Найти последнее вхождение
    target = 7;
    int lastIndex = finder.findLastElement(target);
    std::cout << "findLastElement(" << target << "): " << lastIndex << std::endl;

    std::cout << std::endl;

    // Создание нового массива с помощью конструктора
}
