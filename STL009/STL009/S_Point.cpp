#include "stdafx.h"
#include "S_Point.h"

void Point::Print() const
{
	cout << x << ", " << y << endl;
}


// 메모리 연산자 오버로딩 구현
Point* Point_ptr::operator->() const
{
	return ptr;
}
Point& Point_ptr::operator*() const
{
	return *ptr;
}