#include <iostream>
#include <vector>

std::vector<int> add_to_position(std::vector<int> vec, int val, int position) {
    if (position < 0 || position > vec.size()) {
        std::cerr << "������: ������������ ����� � �������." << std::endl;
        return vec;
    }

    vec.insert(vec.begin() + position, val); // ��������� ������� �� ��������� �������
    return vec;
}

int main() {
    setlocale(LC_ALL, "Russian"); // ��� ������ ��������� �� ������� �����
    std::cout << "������� 3. ������ � ��������� *\n" << "�������� ����������� ������� ��� �������.\n" << "� ��� �������� ������ ������� ����������� �������.������ ����� ������ �� ������ ���� ���������� �����, �� � ���� ����� � �������. ��������, ����� � ����� ������� 10 ������� � � ��� �������� 11 - �.������� �� ������ ���� �����, ��� � ������, � ����� ���� ����� � ������� - ��������, 5. � ���� ������ �� ������ ��������� � ������� �����, � ��� ���������, ������� �� ������� ������ - ����������� ������ � ����� �������.\n" << "���������� ������� std::vector<int> add_to_position(std::vector vec, int val, int position)\n";
    std::cout << "\n";
    std::vector<int> robotQueue = {1,2,3,4,5,6,7,8,9,10}; // ������ ��� �������� ����������������� ������� ���������
    int robotId = 0;
    int position = 0;

    std::cout << "����������� ������� ��� ���������\n";
    std::cout << "������� ����������������� ������ � �� �������. ��� ���������� ������� -1.\n";

    while (true) {
        std::cout << "������� ����������������� ����� ��������: ";
        std::cin >> robotId;

        if (robotId == -1) {
            break; // ���������� �����
        }

        std::cout << "������� ������� � ������� (������� � 0): ";
        std::cin >> position;

        robotQueue = add_to_position(robotQueue, robotId, position);
    }

    std::cout << "������� ���������:\n";
    for (size_t i = 0; i < robotQueue.size(); ++i) {
        std::cout << "������� " << i + 1 << ": " << robotQueue[i] << "\n";
    }

    return 0;
}