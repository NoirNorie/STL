// STL015.cpp : 클라이언트 코드와 서버 코드

#include <iostream>
#include <algorithm>
using namespace std;


//서버 코드
void For_each(int* begin, int* end, void (*pf)(int)) // 함수 포인터 사용
{
    while (begin != end)
    {
        pf(*begin++); // 클라이언트 함수 호출
    }
}

//클라이언트 코드
void Print1(int n)
{
    cout << n << " ";
}

void Print2(int n)
{
    cout << n * n << " ";
}

void Print3(int n)
{
    cout << "정수 : " << n << endl;
}


int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };

    // algorithm에 내장된 for_each 미사용

    For_each(arr, arr + 5, Print1); // Print1() 콜백 함수의 주소를 전달
    cout << endl << endl;
    
    For_each(arr, arr + 5, Print2); // Print2() 콜백 함수의 주소를 전달
    cout << endl << endl;

    For_each(arr, arr + 5, Print3); // Print3() 콜백 함수의 주소를 전달

    // algorithm에 내장된 for_each 사용
    cout << endl;
    cout << "내장함수 사용" << endl;

    for_each(arr, arr + 5, Print1);
    cout << endl << endl;

    for_each(arr, arr + 5, Print2);
    cout << endl << endl;

    for_each(arr, arr + 5, Print3);


    return 0;
}