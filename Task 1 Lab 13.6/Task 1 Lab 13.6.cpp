#include <iostream>
#include <vector>
#include <algorithm> // Для std::remove

int main() {
    setlocale(LC_ALL, "Russian");
    int vecSize, deleteValue;

    // Ввод размера вектора
    std::cout << "Введите размер вектора: ";
    std::cin >> vecSize;

    // Создание и заполнение вектора
    std::vector<int> vec(vecSize);
    std::cout << "Введите число (через пробел): ";
    for (int i = 0; i < vecSize; i++) {
        std::cin >> vec[i];
    }

    // Ввод числа для удаления
    std::cout << "Введите число которое удалиться со всего вектора: ";
    std::cin >> deleteValue;

    // Удаление всех элементов, равных deleteValue
    vec.erase(std::remove(vec.begin(), vec.end(), deleteValue), vec.end());

    // Вывод результата
    std::cout << "Результат:";
    for (int num : vec) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}