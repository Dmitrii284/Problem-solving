#pragma once
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <iostream>
#include<string>

// ������2������� �������������� ������� ���������� �� ������������� ��������� ���������� ��������
template <typename T>
T* positive_memory(T arr1[], const int size1, T arr2[], const int size2, int& var) {
	T* tmp = new T[size1 + size2];
	var = 0;
	//������ � 165 ������� ���������� ++� �� ���� ���������� �++
//���� ���������� �++ - �� ������� ������ � � � ��������� ������ ���������� 1
//���������� ++� - ��� ������ ����� ����������� 1.  ���� ���� !!!
	for (int i = 0; i < size1; i++)
		if (arr1[i] > 0)
			tmp[var++] = arr1[i];

	for (int i = 0; i < size2; i++)
		if (arr2[i] > 0)
			tmp[var++] = arr2[i];

	T* rezalt = new T[var]; //��� ��������� ��������� (�������� ������ ������ �������)
		for (int i = 0; i < var; i++)
			rezalt[i] = tmp[i];

	delete[] tmp;
	return rezalt;
}

//������3
bool number_name(int num, std::string file_path);//������ ����������� ���������� #include <iostream> #include<string>
// � ������� ����� ����� ����� �����������. � � ��� �����






#endif//_FUNCTION_H
