#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "Russian");
    const int MAX_SIZE = 20;
    std::vector<int> db(MAX_SIZE, 0); // Изначально заданный размер вектора это 0
    int start = 0;                   // Указатель на начало хранилища (для кольцевого буфера).
    int count = 0;                   // Счётчик добавленных элементов.

    std::cout << "Введите целые числа для хранения.\n";
    std::cout << "* Введите -1, чтобы вывести содержимое хранилища.\n";
    std::cout << "* Введите -2, чтобы завершить программу.\n";
    std::cout << std::endl;
    while (true) {
        int input;
        std::cout << "Введите число которое хотите поместить в буфер: ";
        std::cin >> input;

        // Контроль ввода.
        if (std::cin.fail()) {
            std::cin.clear(); // Сброс ошибки.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорируем некорректный ввод.
            std::cout << "Ошибка ввода. Попробуйте снова:\n";
            continue;
        }

        if (input == -1) {
            // Вывод содержимого буфера.
            std::cout << "Содержимое буфера:\n";
            for (int i = 0; i < count; ++i) {
                std::cout << db[(start + i) % MAX_SIZE] << " ";
            }
            std::cout << "\n";
        }
        else if (input == -2) {
            //Завершение
            std::cout << "Программа завершена.\n";
            break;
        }
        else {
            // Добавление элемента в кольцевой буфер.
            db[(start + count) % MAX_SIZE] = input;

            // При максимальном размере буфера, обновляется начало
            if (count == MAX_SIZE) {
                start = (start + 1) % MAX_SIZE;
            }
            else {
                ++count;
            }
        }
    }

    return 0;
}
