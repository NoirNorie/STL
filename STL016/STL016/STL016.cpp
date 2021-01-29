// STL016.cpp : 함수 객체 1
//

#include <iostream>
using namespace std;

void Print() //전역 함수
{
    cout << "전역 함수" << endl;
}

class Functor //함수자
{
public:
    void operator() () //연산자() 오버로딩
    {
        cout << "함수 객체" << endl;
    }
    void operator() (int a, int b) //매개변수 리스트를 가질 수 있다.
    {
        cout << "함수 객체 " << a << ", " << b << endl;
    }
};

int main()
{
    Functor functor;

    Print();    //전역 함수 호출
    functor();  //멤버 함수 호출
    functor.operator()();   //functor()와 동일하게 동작한다.

    functor(10, 20);
    functor.operator()(10, 20);

    return 0;
}