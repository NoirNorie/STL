// STL005.cpp : 함수 호출 연산자 () 오버로딩
//

#include "stdafx.h"

struct FuncObject // 함수 객체
{
public:
    void operator()(int arg) const
    {
        cout << "정수 : " << arg << endl;
    }
};

void Print1(int arg) // 함수 호출
{
    cout << "정수 : " << arg << endl;
}


int main()
{
    void (*Print2)(int) = Print1; // 함수 포인터
    FuncObject Print3;

    Print1(10); // 함수 호출을 통한 정수 출력
    Print2(10); // 함수 포인터를 통한 정수 출력
    Print3(10); // 함수 객체를 통한 정수 출력
    
    Print3.operator()(10);
    // Print3의 경우 Print3.oprator()(10)과 동일하다.
    // 객체를 통하니까 객체처럼 사용이 가능한 것

    return 0;
}
