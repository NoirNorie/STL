// STL004.cpp : 연산자 오버로딩 - 전역 함수, friend 선언
//

#include "stdafx.h"

class EX_Point
{
    int x, y;
public:
    EX_Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
    void Print() const
    {
        cout << "x 값 : " << x << endl;
        cout << "y 값 : " << y << endl;
    }

    // friend 선언
    friend const EX_Point operator-(const EX_Point& argL, const EX_Point& argR);

    // Getter
    int GetX() const
    {
        return x;
    }
    int GetY() const
    {
        return y;
    }
};

// 전역 함수로 연산자 오버로딩을 구현
const EX_Point operator-(const EX_Point& argL, const EX_Point& argR)
{
    return EX_Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
}

//// 클래스 내부에서 friend 선언을 통해 접근 권한을 받은 경우
//const EX_Point operator-(const EX_Point& argL, const EX_Point& argR)
//{
//    return EX_Point(argL.x - argR.x, argL.y - argR.y);
//}

int main()
{
    EX_Point p1(2, 3), p2(5, 4);
    EX_Point p3;

    p3 = p1 - p2;
    p3.Print();

    return 0;
}