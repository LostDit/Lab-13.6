﻿#include <iostream>
#include <vector>
//Task 1 13.2 Lab
int main() {
    setlocale(LC_ALL, "Russian"); // Для вывода сообщений на русском языке
    std::cout << "Задание 1. Очередь из роботов\n" << "Повторите программу из теоретического материала.Напишите электронную очередь для андроидов.Их количество неизвестно заранее.Каждый андроид вводит с клавиатуры свой идентификационный номер - целое число.Нужно сохранить их номера в векторе в том порядке, в котором они записывались в очередь.\n"<<std::endl;
    std::vector<int> robotQueue; // Вектор для хранения идентификационных номеров андроидов
    int robotId = 0;

    std::cout << "Электронная очередь для андроидов\n";
    std::cout << "Введите идентификационные номера. Для завершения введите -1.\n";

    while (true) {
        std::cout << "Введите идентификационный номер андроида: ";
        std::cin >> robotId;

        if (robotId == -1) {
            break; // Завершение ввода
        }

        robotQueue.push_back(robotId); // Добавляем номер в конец вектора
    }

    std::cout << "Очередь андроидов:\n";
    for (size_t i = 0; i < robotQueue.size(); ++i) {
        std::cout << "Андроид прибывший " << i + 1<< " с номером: " << ": " << robotQueue[i] << "\n";
    }

    return 0;
}