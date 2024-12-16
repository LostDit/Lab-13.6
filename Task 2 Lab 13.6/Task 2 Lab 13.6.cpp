#include <iostream>

#include <vector>

int main() {
	//Задал вектор цен на продукты
	std::vector<float> prices{ 2.5, 4.25, 3.0, 10.0 };
	//Задал вектор покупок
	std::vector<int> items{ 1, 1, 0, 3 };

	//Переменная итоговой стоимости
	float totalCost = 0.0;
	
	//По совету делаю один цикл для вычисления общей стоимости
	for (int index : items) {
		if (index>=0&&index<prices.size()) {
			totalCost += prices[index];
		}else {
			std::cerr << "Ошибка: индекс " << index << " выходит за границы вектора цен.\n";
			return 1;
		}
	}

	std::cout << "Итоговая стоимость покупок: " << totalCost << std::endl;

	return 0;
}