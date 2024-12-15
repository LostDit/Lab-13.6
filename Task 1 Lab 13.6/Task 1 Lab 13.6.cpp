#include <iostream>
#include <vector>
int main() {
	int vecSize, deleteVec;
	std::cout << "Input vector size: ";
	std::cin >> vecSize;
	std::vector<int> vec(vecSize);
	std::cout << "\n";
	std::cout << "Input numbers: ";
	for (int i = 0; i < vec.size(); i++) {
		std::cin >> vec[i];
	}
	std::cout << "\n";
	std::cout << "Input number to delete: ";
	std::cin >> deleteVec;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == deleteVec) {
			vec.erase(vec.begin() + i);
			i--;
		}
	}
	std::cout << "\n";
	std::cout << "Result: ";
	for (int i = 0; i < vec.size();i++) {
		std::cout<< " " << vec[i] << " ";
	}
}