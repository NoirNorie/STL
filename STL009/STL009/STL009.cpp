// STL009.cpp : *, -> 연산자 오버로딩

#include "stdafx.h"
#include "S_Point.h"

int main()
{
    Point_ptr p1 = new Point(2, 3); // 메모리 할당
    Point_ptr p2 = new Point(5, 5); // 메모리 할당

    p1->Print();
    p2->Print();
    // p1.operator->()->print()와 동일하게 동작한다.
    cout << endl;

    Point* p3 = new Point(2, 3); // 일반 포인터
    Point_ptr p4 = new Point(5, 5); // 스마트 포인터

    p3->Print();
    p4->Print();
    cout << endl;

    (*p3).Print(); // (*p3).Print();가 그대로 호출된다.
    (*p4).Print(); // p4.operator*().Print()가 호출된다.

    delete p3; // 일반 포인터는 메모리 할당 후 delete 연산이 필요하다.


    // 스마트 포인터의 경우 p1, p2의 소멸자에서 동적 메모리를 알아서 제거해준다.
    return 0;
}