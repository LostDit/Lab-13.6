#include <iostream>
#include <vector>

int main() {
	setlocale(LC_ALL, "Russian");
	int quantityRobot;
	std::cout << "Введите N: ";
	std::cin >> quantityRobot;
	std::vector<int> vecRobot(quantityRobot); //Добавил вектор в который помещается количество роботов
	
	//Ввод номеров роботов
	for (int i = 0; i < vecRobot.size(); i++) {
		std::cout << "Введите номер робота " << i + 1 << ": ";
		std::cin >> vecRobot[i];
	}
	
	//Граница блока по выводу инфы о роботах
	std::cout << "На витрине стоят роботы {";
	for (int i = 0; i < vecRobot.size(); i++) {
		if (i == vecRobot.size() - 1) {
			std::cout << vecRobot[i];
			continue;
		}
		std::cout << vecRobot[i] << ",";
	}
	std::cout << "}.";
	//Граница блока по выводу инфы о роботах
	
	std::cout << "\n" << std::endl; //Разделяет блок
	
	//Блок по покупке
	int purchaseRobot, numberM; // Переменные отвечающие за покупку и число роботов которые хочет купить клиент (соответсвенно)
	bool final = true,chek = true;
	while (final) {
		chek == true? std::cout << "Введите число M: ": std::cout << "Попробуйте ввести ещё раз количество роботов которое вы хотите купить: "; chek = true;
		std::cin >> numberM;
		if (numberM<0 || numberM > quantityRobot) {
			chek = false;
			continue;
		}final = false;
	}
	for (int i = 0; i != numberM;++i) {
		std::cout << "\n";
		std::cout << "Введите индекс робота для покупки: ";
		std::cin >> purchaseRobot;
		if (purchaseRobot > quantityRobot || purchaseRobot < 0) {
			std::cout << "Такого индекса нет\n";
			--i;
			continue;
		}else	{
			vecRobot.erase(vecRobot.begin() + purchaseRobot);
			std::cout << "Забрали робота с индексом " << purchaseRobot;
		}
		std::cout << "\n";
		std::cout << "На витрине остались роботы {";
		for (int i = 0; i < vecRobot.size(); i++) {
			if (i == vecRobot.size() - 1) {
				std::cout << vecRobot[i]; 
				continue;
			}
			std::cout << vecRobot[i] << ",";
		}
		std::cout << "}.";
	}
	//Блок по покупке
}