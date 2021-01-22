#include "Point.h"

// 이항연산자 + 오버로딩 구현
const Point Point::operator+(const Point& arg) const
{
	Point spot;
	spot.x = this->x + arg.x;
	spot.y = this->y + arg.y;
	// this 는 앞에 있는 숫자
	// arg는 뒤에 있는 숫자

	return spot;
}

// Getter와 Setter 구현
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

// 출력함수 구현
void Point::Print() const
{
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}