#pragma once
#include "stdafx.h"

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	
	// 이항 연산자의 오버로딩
	const Point operator+(const Point& arg) const;
	const Point operator-(const Point& arg) const;

	// 논리 이항 연산자의 오버로딩
	const bool operator==(const Point& arg) const;
	const bool operator!=(const Point& arg) const;

	// 단항 연산자 ++의 오버로딩
	const Point& operator++(); // 전위
	const Point& operator++(int); // 후위

	// 단항 연산자 --의 오버로딩
	const Point& operator--(); // 전위
	const Point& operator--(int); // 후위

	// [] 연산자 오버로딩
	const int operator[] (int index) const;

	// Getter와 Setter
	int GetX() const;
	int GetY() const;
	void SetX(int _x);
	void SetY(int _y);

	// 출력함수
	void Print() const;
};
