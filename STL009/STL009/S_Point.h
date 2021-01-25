#pragma once
#include "stdafx.h"

class Point
{
	int x, y;

public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void Print() const;
};

// ����Ʈ ������ Ŭ����
class Point_ptr
{
	Point* ptr;
	
public:
	Point_ptr(Point* p) :ptr(p) {}
	~Point_ptr()
	{
		delete ptr;
	}

	//-> ������ �����ε�
	Point* operator->() const;
	Point& operator*() const;
};