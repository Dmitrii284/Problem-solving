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
//Вывод массива в консоль
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Rus");
	int n;
	// Есть Фото Не дорешана.
	
	/*//Задача 1.\nВыделение памяти по двумерный массив
	std::cout << "Задача 1.\nВведите количество рядов-> ";
	std::cin >> n;
	std::cout <<"Введите количество столбцов"
	*/


	//Задача 2.\nОбъединение массивов
	/*std::cout << "Задача 2.\nМассив №1:\n";
	const int size2_1 = 5;
	int arr2_1[size2_1];
	fill_arr(arr2_1, size2_1, -10, 15);
	print_arr(arr2_1, size2_1);

	std::cout << "Массив №2:\n";
	const int size2_2 = 7;
	int arr2_2[size2_2];
	fill_arr(arr2_2, size2_2, -15, 10);
	print_arr(arr2_2, size2_2);


	std::cout << "Итоговый массив:\n";
	int size2_3;
	int* arr2_3 = positive_memory(arr2_1, size2_1, arr2_2, size2_2, size2_3);
	delete[] arr2_3;
	std::cout << std::endl;*/


	//Задача 3.\nНазвание читла (Работа с файловой системой)

	std::cout << "Задача .\nВведите двузначное число -> ";
	std::cin >> n;

	if (number_name(n, "number.txt"))
		std::cout << "Число записано в файл.\n\n";
	else
		std::cout << "Ошибка выполнения функции.\n\n";



	return 0;
}