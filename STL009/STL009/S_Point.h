#pragma once
#include "stdafx.h"

class Point
{
	int x, y;

public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print() const;
};

// 스마트 포인터 클래스
class Point_ptr
{
	Point* ptr;
	
public:
	Point_ptr(Point* p) :ptr(p) {}
	~Point_ptr()
	{
		delete ptr;
	}

	//-> 연산자 오버로딩
	Point* operator->() const;
	Point& operator*() const;
};