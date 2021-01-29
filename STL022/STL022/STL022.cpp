// STL022.cpp : 함수 템플릿 2

#include <iostream>
using namespace std;

class Point
{
    int x, y;
public:
    explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
    void Print() const
    {
        cout << x << ", " << y << endl;
    }
};

//일반화 함수 템플릿
template<typename T>
void Print(T a)
{
    cout << a << endl;
}

//특수화 함수 템플릿
template<>
void Print(Point a)
{
    cout << "Print() 함수의 특수화 : ";
    a.Print();
}
//void Print<Point>(Point a) //명시적으로는 이렇게 생겼다.
//{
//    cout << "Print() 함수의 특수화 : ";
//    a.Print();
//}

//템플릿의 인자에 타입 뿐만 아니라 정수 등도 가능하다
//이 경우 사용할 때는 명시적인 방법으로 호출해야한다.
template<typename T, int size>
void Print_Array(T* arr)
{
    for (int i = 0; i < size; i++)
    {
        cout << "[ " << i << " ] : " << arr[i] << endl;
    }
    cout << endl;
}

int main()
{
    int arr1[5] = { 10, 20, 30, 40, 50 };
    Print_Array<int, 5>(arr1); //명시적 호출 방법

    double arr2[5] = { 10.5, 20.5, 30.5, 40.5, 50.5 };
    Print_Array<double, 5>(arr2);

    int n = 10;
    double d = 2.5;
    Point pt(2, 3);

    //일반화 함수 호출
    Print(n);
    Print<int>(n);
    Print(d);
    Print<double>(d);
    //특수화 함수 호출
    Print(pt);
    
    //명시적 함수 호출
    Print<int>(n);
    Print<double>(d);
    Print<Point>(pt);

    return 0;
}
