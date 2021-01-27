// STL014.cpp : 함수 포인터 3
// 객체와 주소로 멤버 함수 호출

#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
    void Print() const
    {
        cout << x << ", " << y << endl;
    }
    void PrintInt(int n) const
    {
        cout << "테스트 정수 : " << n << endl;
    }
};


int main()
{
    Point pt(2, 3);
    Point* p = &pt;

    void (Point::*pf1)() const; //멤버 함수의 포인터 선언
    pf1 = &Point::Print;

    void (Point:: * pf2)(int) const; //멤버 함수의 포인터 선언
    pf2 = &Point::PrintInt;

    pt.Print();
    pt.PrintInt(10);
    cout << endl;

    //객체로 멤버 함수 포인터를 사용해 호출
    (pt.*pf1)();
    (pt.*pf2)(10);
    cout << endl;

    //주소로 멤버 함수 포인터를 사용해 호출
    (p->*pf1)();
    (p->*pf2)(10);

    return 0;
}