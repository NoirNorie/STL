#pragma once
#include "stdafx.h"

class Array
{
	int* arr;
	int size;
	int capacity;

public:
	Array(int cap = 100) :arr(0), size(0), capacity(cap)// ������
	{
		arr = new int[capacity];
	}
	~Array() // �Ҹ���
	{
		delete[] arr;
	}

	void Add(int data); // ������ �߰� �Լ�
	int Size() const; // ũ�⸦ ��ȯ�ϴ� �Լ�

	// [] ������ �����ε�
	int operator[](int index) const;
	// const �Լ�: �б� ���길 ������
	int& operator[] (int index);
	// �� const �Լ�: �б� ���� ��� ������

};