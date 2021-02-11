// STL043.cpp : 시퀀스 컨테이너 - vector05
// vector의 참조와 할당

#include "stdafx.h"

int main()
{
    vector<int> v;

    for (int i = 0; i < 5; i++)
    {
        v.push_back(i * 10);
    }

    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v[0] << '\t' << v.front() << endl;
    // 첫번째 원소 참조
    cout << v[4] << '\t' << v.back() << endl;
    // 마지막 원소 참조

    // 참조로 값을 수정하는 것도 가능하다.
    v.front() = 100;
    v.back() = 500;

    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v[0] = 100; v[4] = 500; // []연산자는 범위 점검을 하지 않는다
    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.at(0) = 1000; v.at(4) = 5000; // at() 함수는 범위 점검을 한다
    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;

    //at() 함수는 범위 점검을 한다.
    //범위를 이탈한 값을 입력할 시 오류를 출력한다
    //[]연산자를 사용한다면 범위 점검 없이 메모리 접근 오류를 출력한다.
    try
    {
        cout << v.at(0) << endl;
        cout << v.at(3) << endl;
        cout << v.at(6) << endl;
    }
    catch (out_of_range& e)
    {
        cout << e.what() << endl;
    }
    //try, catch 구문
    cout << endl;


    //assign(n,x) : n개의 원소에 x 값을 할당한다

    vector<int> v1(5, 1);

    for (vector<int>::size_type i = 0 ; i < v1.size() ; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    v1.assign(5, 2);
    for (vector<int>::size_type i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}