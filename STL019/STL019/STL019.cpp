// STL019.cpp : 함수 객체 구현 1
// less 구현

#include <iostream>
#include <functional> //less<>, greater<>가 포함된 헤더
using namespace std;

typedef less<int> STL_Less;

bool Pred_less(int a, int b)
{
    return a < b;
}

class Less
{
public:
    bool operator() (int a, int b)
    {
        return a < b;
    }
};

int main()
{
    Less l;
    cout << Pred_less(10, 20) << endl;
    cout << Pred_less(20, 10) << endl;
    cout << endl << endl;
    
    //l 객체로 암시적 함수 호출
    cout << l(10, 20) << endl; 
    cout << l(20, 10) << endl << endl;

    //임시 객체로 암시적 함수 호출
    cout << Less() (10, 20) << endl;
    cout << Less() (20, 10) << endl << endl;

    //명시적 호출
    cout << l.operator()(10, 20) << endl;
    cout << Less().operator()(10, 20) << endl << endl;


    // STL 내장 less
    STL_Less sl;

    //sl 객체로 암시적 함수 호출
    cout << sl(10, 20) << endl;
    cout << sl(20, 10) << endl;

    //sl 객체로 명시적 함수 호출
    cout << sl.operator()(10, 20) << endl << endl;

    //임시 객체로 암시적 호출
    cout << STL_Less()(10, 20) << endl;
    cout << STL_Less()(20, 10) << endl << endl;
    
    //임시 객체로 명시적 호출
    cout << STL_Less().operator()(10, 20) << endl;

    return 0;
}