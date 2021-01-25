// STL007.cpp : 배열 인덱스 연산자 [] 오버로딩
//

#include "stdafx.h"
#include "Point.h"

int main()
{
    Point pt(1, 2);
    pt.Print();

    cout << pt[0] << ", " << pt[1] << endl;
    // pt 객체에는 x = 1, y = 2 라는 값들이 존재함
    // pt[0]는 pt.operator[](0)로 호출되며 pt.x를 불러올 수 있게 된다.

    return 0;
}