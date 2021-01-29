// STL018.cpp : 함수 객체로 콜백 함수 구현

#include <iostream>
#include <algorithm>
using namespace std;

//클라이언트 코드
class Functor01
{
public:
    void operator() (int n) // 원소를 그냥 출력
    {
        cout << n << " ";
    }
};
class Functor02
{
public:
    void operator() (int n) // 원소를 제곱해 출력
    {
        cout << n * n << " ";
    }
};
class Functor03
{
public:
    void operator() (int n) // 원소와 문자열을 출력
    {
        cout << "정수 : " << n << endl;
    }
};

int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };

    for_each(arr, arr + 5, Functor01());
    //임시 함수 객체(Functor01())을 만들어 함수로 전달
    cout << endl << endl;
    for_each(arr, arr + 5, Functor02());
    //임시 함수 객체(Functor02())을 만들어 함수로 전달
    cout << endl << endl;
    for_each(arr, arr + 5, Functor03());
    //임시 함수 객체(Functor03())을 만들어 함수로 전달

    // for_each()의 3번째 인자에 함수 객체를 전달한다.
    // for_each() 알고리즘은 사용자 정의 타입까지도 전달받을 수 있다.

    return 0;
}