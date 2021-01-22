#pragma once
#include "stdafx.h"

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	
	// 이항 연산자 + 의 오버로딩
	const Point operator+(const Point & arg) const;
	
	// Getter와 Setter
	int GetX() const;
	int GetY() const;
	void SetX(int _x);
	void SetY(int _y);

	// 출력함수
	void Print() const;
};
