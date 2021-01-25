#include "stdafx.h"
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
// 이항연산자 - 오버로딩 구현
const Point Point::operator-(const Point& arg) const
{
	Point spot;
	spot.x = this->x - arg.x;
	spot.y = this->y - arg.y;

	return spot;
}

// 논리 이항 연산자의 오버로딩
const bool Point::operator==(const Point& arg) const
{
	return (this->x == arg.x && this->y == arg.y) ? true : false;
}
const bool Point::operator!=(const Point& arg) const
{
	return !(*this == arg);
	// 간단하게 == 연산자를 이용해서 구현이 가능하다.
}


// 단항연산자 ++ 오버로딩 구현
const Point& Point::operator++() // 전위
{
	++x;
	++y;
	return *this;
}
const Point& Point::operator++(int) // 후위
{
	Point spot(x, y);
	++x;
	++y;
	return spot;

	//// 이렇게도 작성 가능함
	//Point tmp = *this;
	//++* this;
	//return tmp;
}

// 단항연산자 -- 오버로딩 구현
const Point& Point::operator--() // 전위
{
	--x;
	--y;
	return *this;
}
const Point& Point::operator--(int) // 후위
{
	Point spot(x, y);
	--x;
	--y;
	return spot;
}

// []연산자 오버로딩 구현
const int Point::operator[] (int index) const
{
	if (index == 0) return x;
	else if (index == 1) return y;
	else throw "Error";
}

// 타입 변환 연산자 오버로딩 구현
Point::operator int() const
{
	return x;
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