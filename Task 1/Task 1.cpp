#include <iostream>
#include <vector>
//task 1 13.1
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Задание 1\n" << "Пользователь вводит с клавиатуры число n, а затем -- n целых чисел.\n" << "Необходимо вычислить их среднее арифметическое и вывести на экран.\n";
	std::cout << "How many elements do you want? ";
	std::cin >> n;
	std::vector<int> vec(n);
	for (int i = 0; i < n;i++) {
		std::cin >> vec[i];
	}
	int arithmeticmean=0;
	for (int i = 0; i < n;i++) {
		arithmeticmean += vec[i];
	}
	
	std::cout << "arithmetic mean = " << arithmeticmean / n << std::endl;
}
