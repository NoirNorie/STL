#include "stdafx.h"
#include "Point.h"

// ���׿����� + �����ε� ����
const Point Point::operator+(const Point& arg) const
{
	Point spot;
	spot.x = this->x + arg.x;
	spot.y = this->y + arg.y;
	// this �� �տ� �ִ� ����
	// arg�� �ڿ� �ִ� ����

	return spot;
}
// ���׿����� - �����ε� ����
const Point Point::operator-(const Point& arg) const
{
	Point spot;
	spot.x = this->x - arg.x;
	spot.y = this->y - arg.y;

	return spot;
}

// �� ���� �������� �����ε�
const bool Point::operator==(const Point& arg) const
{
	return (this->x == arg.x && this->y == arg.y) ? true : false;
}
const bool Point::operator!=(const Point& arg) const
{
	return !(*this == arg);
	// �����ϰ� == �����ڸ� �̿��ؼ� ������ �����ϴ�.
}


// ���׿����� ++ �����ε� ����
const Point& Point::operator++() // ����
{
	++x;
	++y;
	return *this;
}
const Point& Point::operator++(int) // ����
{
	Point spot(x, y);
	++x;
	++y;
	return spot;

	//// �̷��Ե� �ۼ� ������
	//Point tmp = *this;
	//++* this;
	//return tmp;
}

// ���׿����� -- �����ε� ����
const Point& Point::operator--() // ����
{
	--x;
	--y;
	return *this;
}
const Point& Point::operator--(int) // ����
{
	Point spot(x, y);
	--x;
	--y;
	return spot;
}

// []������ �����ε� ����
const int Point::operator[] (int index) const
{
	if (index == 0) return x;
	else if (index == 1) return y;
	else throw "Error";
}

// Ÿ�� ��ȯ ������ �����ε� ����
Point::operator int() const
{
	return x;
}


// Getter�� Setter ����
int Point::GetX() const
{
	return x;
}
int Point::GetY() const
{
	return y;
}
void Point::SetX(int _x)
{
	x = _x;
}
void Point::SetY(int _y)
{
	y = _y;
}

// ����Լ� ����
void Point::Print() const
{
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}