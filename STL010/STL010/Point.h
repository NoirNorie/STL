#pragma once
#include "stdafx.h"

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	// �����ڸ� ���� ����ȯ�� ������� �ʴ� ����� ȣ�⸸ �����ϵ��� �Ѵ�.
	
	// ���� �������� �����ε�
	const Point operator+(const Point& arg) const;
	const Point operator-(const Point& arg) const;

	// �� ���� �������� �����ε�
	const bool operator==(const Point& arg) const;
	const bool operator!=(const Point& arg) const;

	// ���� ������ ++�� �����ε�
	const Point& operator++(); // ����
	const Point& operator++(int); // ����

	// ���� ������ --�� �����ε�
	const Point& operator--(); // ����
	const Point& operator--(int); // ����

	// [] ������ �����ε�
	const int operator[] (int index) const;

	// Getter�� Setter
	int GetX() const;
	int GetY() const;
	void SetX(int _x);
	void SetY(int _y);

	// ����Լ�
	void Print() const;
};
