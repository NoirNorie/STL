// STL013.cpp : 함수 포인터 2

#include <iostream>
using namespace std;

void Print()
{
    cout << "정적 함수 Print() 호출" << endl;
}

//정적 함수 포인터 사용
void Static_Print(int n)
{
    cout << "전역 함수 : " << n << endl;
}

namespace Static_A
{
    void Print(int n)
    {
        cout << "namespace 전역 함수 : " << n << endl;
    }
}

class Point
{
public:
    void Print()
    {
        cout << "멤버 함수 Print() 호출" << endl;
    }

    static void Static_Print(int n)
    {
        cout << "Point 클래스 static 멤버 함수 : " << n << endl;
    }
};


int main()
{
    Point pt;
    Point* p = &pt;

    Print();    // 정적 함수 호출
    pt.Print(); // 객체로 멤버 함수 호출
    p->Print(); // 주소로 멤버 함수 호출

    cout << endl;
    cout << "정적 함수 포인터" << endl;

    void (*pf)(int); // 정적 함수의 포인터를 선언

    Static_Print(10);       // 전역 함수 호출
    Static_A::Print(10);    // namespace Static_A의 전역 함수 호출
    Point::Static_Print(10); // Point 클래스의 static 멤버 함수 호출

    pf = Static_Print;
    pf(10); // 함수 포인터로 전역 함수 호출
    pf = Static_A::Print;
    pf(10); // 함수 포인터로 namespace Static_A의 전역 함수 호출
    pf = Point::Static_Print;
    pf(10); // 함수 포인터로 Point 클래스의 static 멤버 함수 호출

    return 0;

}