// STL006.cpp : 함수 호출 연산자 () 오버로딩 2
//

#include "stdafx.h"

struct FuncObejct // 여러개의 인자를 받는 함수 호출 연산자의 오버로딩
{
public:
    void operator() (int arg) const
    {
        cout << "정수 : " << arg << endl;
    }
    void operator() (int arg1, int arg2) const
    {
        cout << "정수 : " << arg1 << ", " << arg2 << endl;
    }
    void operator() (int arg1, int arg2, int arg3) const
    {
        cout << "정수 : " << arg1 << ", " << arg2 << ", " << arg3 << endl;
    }
};


int main()
{
    FuncObejct print;
    print(10);
    print(10, 20);
    print(10, 20, 30);
    cout << endl;

    cout << "객체 생성 후 호출 (명시적 방법)" << endl;
    print.operator()(10);
    print.operator()(10, 20);
    print.operator()(10, 20, 30);
    cout << endl;

    cout << "임시 객체 호출 (암시적 방법)" << endl;
    FuncObejct() (10);
    FuncObejct() (10, 20);
    FuncObejct() (10, 20, 30);
    cout << endl;

    cout << "임시 객체 호출 (명시적 방법)" << endl;
    FuncObejct().operator()(10);
    FuncObejct().operator()(10, 20);
    FuncObejct().operator()(10, 20, 30);

    return 0;
 
}