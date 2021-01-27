// STL012.cpp : 함수 포인터 1
//

#include <iostream>
using namespace std;

void Print(int n)
{
    cout << "정수 : " << n << endl;
}

int main()
{
    void (*pf)(int); // Print 함수의 함수 포인터 선언
    pf = Print; // 함수의 이름은 함수의 시작 주소이다.

    Print(10); // 일반적인 함수 호출
    pf(10); // 포인터를 사용한 함수 호출 1
    (*pf)(10); // 포인터를 사용한 함수 호출 2

    cout << endl;
    cout << Print << endl;
    cout << pf << endl;
    cout << *pf << endl;
    // 모두 동일한 함수의 시작 주소가 나타난다.
    // 함수의 이름인 Print가 함수의 시작 주소
    // 함수 포인터인 pf도 함수의 시작 주소를 나타낸다.

    return 0;
}