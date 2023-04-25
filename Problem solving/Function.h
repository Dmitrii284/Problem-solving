#pragma once
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <iostream>
#include<string>

// Задача2Возврат местоположения массива состоящего из положительных элементов переданных массивов
template <typename T>
T* positive_memory(T arr1[], const int size1, T arr2[], const int size2, int& var) {
	T* tmp = new T[size1 + size2];
	var = 0;
	//Вопрос № 165 Отличие инкримента ++А от пост инкримента А++
//пост инкримента А++ - он сначала вернет А а в следующем выводе добавиться 1
//инкримента ++А - при выводе сразу добавляется 1.  фото есть !!!
	for (int i = 0; i < size1; i++)
		if (arr1[i] > 0)
			tmp[var++] = arr1[i];

	for (int i = 0; i < size2; i++)
		if (arr2[i] > 0)
			tmp[var++] = arr2[i];

	T* rezalt = new T[var]; //это оличество элементов (отражает длинну нового массива)
		for (int i = 0; i < var; i++)
			rezalt[i] = tmp[i];

	delete[] tmp;
	return rezalt;
}

//Задача3
bool number_name(int num, std::string file_path);//Делаем рефакторинг Подключаем #include <iostream> #include<string>
// И создаем новую папку через рефакторинг. И в ней пишем






#endif//_FUNCTION_H
