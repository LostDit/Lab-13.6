#include<iostream>
#include<vector>
//task 3 13.1
int main() {
	int N;
	setlocale(LC_ALL, "Russian");
	std::cout << "������� 3\n" << "������������ ������ � ���������� ����� n, � ����� -- n ����� �����.���������� �������� ������ �� �������� �� ���� ����� � ������� �� �����.\n";

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