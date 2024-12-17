#include <iostream>

#include <vector>

int main() {
    setlocale(LC_ALL, "Russian");

    // Ввод количества товаров
    int productCount;
    std::cout << "Введите количество товаров: ";
    std::cin >> productCount;

    // Ввод цен на товары
    std::vector<float> prices(productCount);
    std::cout << "Введите цены на товары (через пробел): ";
    for (int i = 0; i < productCount; ++i) {
        std::cin >> prices[i];
    }

    // Ввод количества покупок
    int purchaseCount;
    std::cout << "Введите количество покупок: ";
    std::cin >> purchaseCount;

    // Ввод индексов покупок
    std::vector<int> items(purchaseCount);
    std::cout << "Введите индексы покупок (через пробел): ";
    for (int i = 0; i < purchaseCount; ++i) {
        std::cin >> items[i];
    }

    // Переменная для итоговой стоимости покупок
    float totalCost = 0.0;

    // Расчет итоговой стоимости
    for (int index : items) {
        // Проверка на корректность индекса
        if (index >= 0 && index < prices.size()) {
            totalCost += prices[index];
        }
        else {
            std::cerr << "Ошибка: индекс " << index << " выходит за границы вектора цен.\n";
            return 1; // Завершаем выполнение программы при ошибке
        }
    }

    // Вывод результата
    std::cout << "Итоговая стоимость покупок: " << totalCost << std::endl;

    return 0; // Успешное завершение программы
}