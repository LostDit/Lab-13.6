#include <iostream>
#include <vector>
//task 1 13.1
int main() {
	setlocale(lc_all, "russian");
	int n;
	std::cout << "задание 1\n" << "пользователь вводит с клавиатуры число n, а затем -- n целых чисел.\n" << "необходимо вычислить их среднее арифметическое и вывести на экран.\n";
	std::cout << "how many elements do you want? ";
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