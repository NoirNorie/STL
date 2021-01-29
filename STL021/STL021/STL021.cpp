// STL021.cpp : 함수 템플릿 1

#include <iostream>
using namespace std;

// 함수 템플릿 사용 사용
template<typename T>
void Print(T a, T b)
{
    cout << a << ", " << b << endl;
}

//매개변수가 2개인 함수 템플릿
template<typename T1, typename T2>
void Print2(T1 a, T2 b)
{
    cout << a << ", " << b << endl;
}

//템플릿을 지정하는 다른 방법
template<class C>
void Swap(C &a, C &b) //참조형으로 해야 바뀐다
{
    C tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    Print(10, 20);          //정수에도 대응
    Print(10.5, 20.4);      //실수에도 대응
    Print("ABC", "DEF");    //문자열에도 대응

    //명시적 타입 지정
    Print<int>(10, 20);
    Print<double>(10, 20);
    Print<const char*>("ABC", "DEF");


    Print2(10, 10.5);   // 정수 실수 2개에 대응할 수 있다.
    Print2(10.5, 10);

    //명시적 타입 지정
    Print2<int, double>(10, 20.5);

    int n1 = 10;
    int n2 = 200;

    cout << "변환 전 : " << n1 << ", " << n2 << endl;
    Swap(n1, n2);
    cout << "변환 후 : " << n1 << ", " << n2 << endl;

    return 0;
}