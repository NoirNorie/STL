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

// 읽기만 지원하는 const 함수
int Array::operator[] (int index) const
{
	return arr[index];
}

// 읽기 쓰기 모두 지원하는 비 const 함수
int& Array::operator[] (int index)
{
	return arr[index];
}