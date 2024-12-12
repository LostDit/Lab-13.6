#include<iostream>
#include<vector>
//task 3 13.1
int main() {
	int N;
	setlocale(LC_ALL, "Russian");
	std::cout << "Задание 3\n" << "Пользователь вводит с клавиатуры число n, а затем -- n целых чисел.Необходимо отыскать второе по величине из этих чисел и вывести на экран.\n";

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