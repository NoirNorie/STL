#pragma once
#include "stdafx.h"

class Array
{
	int* arr;
	int size;
	int capacity;

public:
	Array(int cap = 100) :arr(0), size(0), capacity(cap)// 생성자
	{
		arr = new int[capacity];
	}
	~Array() // 소멸자
	{
		delete[] arr;
	}

	void Add(int data); // 데이터 추가 함수
	int Size() const; // 크기를 반환하는 함수

	// [] 연산자 오버로딩
	int operator[](int index) const;
	// const 함수: 읽기 연산만 가능함
	int& operator[] (int index);
	// 비 const 함수: 읽기 쓰기 모두 가능함

};