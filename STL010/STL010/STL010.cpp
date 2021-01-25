// STL010.cpp : 타입 변환 연산자 오버로딩
// 생성자를 이용한 타입 변환

#include "stdafx.h"
#include "Point.h"

int main()
{
    Point pt;
    pt.Print();

    // pt = 10;
    // explicit 키워드로 암시적 호출이 불가능하다.

    pt = Point(10);// 명시적으로만 생성자 호출이 가능하다.
    pt.Print();

    return 0;
}