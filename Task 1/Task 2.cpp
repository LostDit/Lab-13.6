#include <iostream>
#include <vector>
//task 2 13.1
int main() {
	int N;
	setlocale(LC_ALL, "Russian");
	std::cout << "Задание 2\n" << "Пользователь вводит с клавиатуры число n, а затем -- n действительных(дробных) чисел.\n" << "Необходимо вывести их все в обратном порядке(то есть сначала то число, которые пользователь ввёл последним и так далее).\n";
	std::cout << "How many elements do you want? ";
	std::cin >> N;
	std::vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		std::cin >> vec[i];
	}
	for (int i = vec.size() - 1; i >= 0; --i) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}