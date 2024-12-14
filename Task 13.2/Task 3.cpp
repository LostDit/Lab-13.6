#include <iostream>
#include <vector>

std::vector<int> add_to_position(std::vector<int> vec, int val, int position) {
    if (position < 0 || position > vec.size()) {
        std::cerr << "Ошибка: некорректное место в очереди." << std::endl;
        return vec;
    }

    vec.insert(vec.begin() + position, val); // Вставляем элемент на указанную позицию
    return vec;
}

int main() {
    setlocale(LC_ALL, "Russian"); // Для вывода сообщений на русском языке
    std::cout << "Задание 3. Роботы и коррупция *\n" << "Улучшите электронную очередь для роботов.\n" << "К нам приходят роботы разного социального статуса.Каждый робот вводит не только свой уникальный номер, но и свое место в очереди. Например, пусть в нашей очереди 10 роботов и к нам приходит 11 - й.Сначала он вводит свой номер, как и раньше, а затем свое место в очереди - например, 5. В этом случае он должен оказаться в очереди пятым, а все остальные, начиная со старого пятого - подвинуться дальше в конец очереди.\n" << "Реализуйте функцию std::vector<int> add_to_position(std::vector vec, int val, int position)\n";
    std::cout << "\n";
    std::vector<int> robotQueue = {1,2,3,4,5,6,7,8,9,10}; // Вектор для хранения идентификационных номеров андроидов
    int robotId = 0;
    int position = 0;

    std::cout << "Электронная очередь для андроидов\n";
    std::cout << "Введите идентификационные номера и их позиции. Для завершения введите -1.\n";

    while (true) {
        std::cout << "Введите идентификационный номер андроида: ";
        std::cin >> robotId;

        if (robotId == -1) {
            break; // Завершение ввода
        }

        std::cout << "Введите позицию в очереди (начиная с 0): ";
        std::cin >> position;

        robotQueue = add_to_position(robotQueue, robotId, position);
    }

    std::cout << "Очередь андроидов:\n";
    for (size_t i = 0; i < robotQueue.size(); ++i) {
        std::cout << "Андроид " << i + 1 << ": " << robotQueue[i] << "\n";
    }

    return 0;
}