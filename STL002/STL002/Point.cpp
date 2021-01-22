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