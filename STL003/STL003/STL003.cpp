// STL003.cpp : 연산자 오버로딩
//

#include "stdafx.h" // 미리 컴파일된 헤더
#include "Point.h" // 점의 정의

int main()
{
    Point p1(2, 3), p2(4, 5);
    Point result1, result2; // 결과 값을 담을 공간
    Point result3;

    // 이항 연산자 + 사용
    cout << "이항연산자 +" << endl;
    result3 = p2 + p1;
    result3.Print();

    // 이항 연산자 - 사용
    cout << "이항연산자 -" << endl;
    result3 = p2 - p1;
    result3.Print();

    cout << "단항연산자 ++" << endl;
    cout << "연산 전 p1 : " << p1.GetX() << ", " << p1.GetY() << endl;

    result1 = ++p1;
    // result1 = p1.operator++() 과 동일함
    result1.Print();

    cout << "단항연산자 --" << endl;
    cout << "연산 전 p1 : " << p1.GetX() << ", " << p1.GetY() << endl;

    result1 = --p1;
    // result1 = p1.operator++() 과 동일함
    result1.Print();

    cout << "단항연산자 ++(후위)" << endl;
    cout << "연산 전 p2 : " << p2.GetX() << ", " << p2.GetY() << endl;

    result2 = p2++;
    // result2 = p2.oprator++(0) 과 동일함
    // 더미값인 0을 입력해야 후위 연산으로 동작함
    result2.Print();

    cout << "연산 후 p2 : " << p2.GetX() << ", " << p2.GetY() << endl;

    cout << "단항연산자 --(후위)" << endl;
    cout << "연산 전 p2 : " << p2.GetX() << ", " << p2.GetY() << endl;

    result2 = p2--;
    // result2 = p2.oprator++(0) 과 동일함
    // 더미값인 0을 입력해야 후위 연산으로 동작함
    result2.Print();

    cout << "연산 후 p2 : " << p2.GetX() << ", " << p2.GetY() << endl;


    // 논리 이항연산자 오버로딩

    Point a1(2, 3), a2(3, 4), a3(2, 3);

    if (a1 == a2) cout << "같음" << endl;
    else cout << "다름" << endl;

    if (a1 == a3) cout << "같음" << endl;
    else cout << "다름" << endl;

    if (a1 != a2) cout << "다름" << endl;
    else cout << "같음" << endl;

    return 0;
}