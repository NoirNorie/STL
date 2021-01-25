// STL011.cpp : 타입 변환 연산자 오버로딩
// 타입 변환 연산자 오버로딩을 이용한 타입변환

#include "stdafx.h"
#include "Point.h"

int main()
{
    int n = 10;

    Point pt(2, 3);
    n = pt;
    // pt.operator int()를 암시적으로 호출한다.

    cout << n << endl;

    return 0;
}