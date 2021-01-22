// STL002.cpp : 연산자 오버로딩, 상수화
//

#include "stdafx.h"
#include "Point.h" // 점에 대한 정의

int main()
{
    const Point p1(0, 0); // 상수화 객체
    Point p2(2, 3); // 비상수화 객체

    p1.Print();
    p2.Print();

    cout << "p1의 x값 = " << p1.GetX() << endl;
    cout << "p2의 y값 = " << p2.GetY() << endl;

    // 상수화 객체는 상수화 멤버 함수만 호출할 수 있다.
    //p1.SetX(5); // 컴파일러에서 띄워주는 기능도 안된다.

    // 비상수화 객체는 상관 없이 사용 가능함
    p2.SetX(5);
    p2.SetY(5);

    p2.Print();

    return 0;
}