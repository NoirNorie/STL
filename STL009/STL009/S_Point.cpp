#include "stdafx.h"
#include "S_Point.h"

void Point::Print() const
{
	cout << x << ", " << y << endl;
}


// �޸� ������ �����ε� ����
Point* Point_ptr::operator->() const
{
	return ptr;
}
Point& Point_ptr::operator*() const
{
	return *ptr;
}