#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include "Function.h"


template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}
//����� ������� � �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	// ���� ���� �� ��������.
	
	/*//������ 1.\n��������� ������ �� ��������� ������
	std::cout << "������ 1.\n������� ���������� �����-> ";
	std::cin >> n;
	std::cout <<"������� ���������� ��������"
	*/


	//������ 2.\n����������� ��������
	/*std::cout << "������ 2.\n������ �1:\n";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	fill_arr(arr2_1, size2_1, -10, 15);
	print_arr(arr2_1, size2_1);

	std::cout << "������ �2:\n";
	const int size2_2 = 7;
	int arr2_2[size2_2];
	fill_arr(arr2_2, size2_2, -15, 10);
	print_arr(arr2_2, size2_2);


	std::cout << "�������� ������:\n";
	int size2_3;
	int* arr2_3 = positive_memory(arr2_1, size2_1, arr2_2, size2_2, size2_3);
	delete[] arr2_3;
	std::cout << std::endl;*/


	//������ 3.\n�������� ����� (������ � �������� ��������)

	std::cout << "������ .\n������� ���������� ����� -> ";
	std::cin >> n;

	if (number_name(n, "number.txt"))
		std::cout << "����� �������� � ����.\n\n";
	else
		std::cout << "������ ���������� �������.\n\n";



	return 0;
}