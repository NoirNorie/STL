#include "stdafx.h"
#include "Array.h"

void Array::Add(int data)
{
	if (size < capacity)
	{
		arr[size++] = data;
	}
}

int Array::Size() const
{
	return size;
}

// �б⸸ �����ϴ� const �Լ�
int Array::operator[] (int index) const
{
	return arr[index];
}

// �б� ���� ��� �����ϴ� �� const �Լ�
int& Array::operator[] (int index)
{
	return arr[index];
}