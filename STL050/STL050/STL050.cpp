// STL050.cpp : 시퀀스 컨테이너 - list03
// list 멤버 함수

#include "stdafx.h"

bool Predicate(int n) // 단항 조건자
{
    return (10 <= n && n <= 30);
}


int main()
{
    list<int> lt;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt.push_back(i * 10);
    }
    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt.push_back(i * 10);
    }

    cout << "remove() 함수 사용" << endl;
    list<int>::iterator iter;
    for (iter = lt.begin(); iter != lt.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt.remove(10); // list 내의 10이라는 원소를 모두 제거한다.
    lt.remove(30); // list 내의 30이라는 원소를 모두 제거한다.

    for (iter = lt.begin(); iter != lt.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    cout << "remove_if() 함수 사용" << endl;
    // remove_if() 함수
    list<int> lt2;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt2.push_back(i * 10);
    }
    lt2.push_back(10);

    for (iter = lt2.begin(); iter != lt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    
    lt2.remove_if(Predicate);
    cout << "조건 : 10보다 크고 30보다 작은 원소를 모두 제거" << endl;

    for (iter = lt2.begin(); iter != lt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    cout << "splice() 함수" << endl;
    /*
        노드 기반 컨테이너인 list는 splice() 함수를 사용해 다른 list의 순차열을 잘라 붙이는 것이 가능하다.
    */

    list<int> slt1;
    list<int> slt2;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        slt1.push_back(i * 10);
        slt2.push_back(i * 100);
    }

    cout << "slt1 : ";
    for (iter = slt1.begin(); iter != slt1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "slt2 : ";
    for (iter = slt2.begin(); iter != slt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "splice() 함수 적용" << endl;
    iter = slt1.begin();
    ++iter; ++iter; // list 컨테이너는 += 연산자를 사용할 수 없다.

    slt1.splice(iter, slt2); // 반복자가 가리키는 위치에 slt2가 가리키는 모든 원소를 잘라 붙인다.

    cout << "slt1 : ";
    for (iter = slt1.begin(); iter != slt1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "slt2 : ";
    for (iter = slt2.begin(); iter != slt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;
    // splice() 함수는 말 그대로 잘라 붙인다
    // 범위를 지정하지 않는 경우 list 내의 모든 원소를 잘라서 붙인다.

    cout << "범위를 지정한 splice() 함수" << endl;
    
    list<int> slt3;
    list<int> slt4;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        slt3.push_back(i * 10);
        slt4.push_back(i * 100);
    }

    list<int>::iterator iter1;
    list<int>::iterator iter2;

    cout << "slt3 : ";
    for (iter1 = slt3.begin(); iter1 != slt3.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    cout << "slt4 : ";
    for (iter2 = slt4.begin(); iter2 != slt4.end(); iter2++)
    {
        cout << *iter2 << " ";
    }
    cout << endl << endl;

    cout << "splice() 함수 적용" << endl;
    iter1 = slt3.begin();
    ++iter1; ++iter1;

    iter2 = slt4.begin();
    ++iter2;

    slt3.splice(iter1, slt4, iter2); // iter1이 가리키는 위치에 slt4의 iter2가 가리키는 원소를 잘라 붙인다.

    cout << "slt3 : ";
    for (iter1 = slt3.begin(); iter1 != slt3.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    cout << "slt4 : ";
    for (iter2 = slt4.begin(); iter2 != slt4.end(); iter2++)
    {
        cout << *iter2 << " ";
    }
    cout << endl << endl;


    slt3.splice(slt3.end(), slt4, slt4.begin(), slt4.end()); //1번 인자가 가리키는 위치에 2번 list 컨테이너의 3번 인자의 위치부터 4번 인자 까지의 값을 잘라 붙인다.
    cout << "splice() 함수 적용" << endl;
    cout << "slt3 : ";
    for (iter1 = slt3.begin(); iter1 != slt3.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    cout << "slt4 : ";
    for (iter2 = slt4.begin(); iter2 != slt4.end(); iter2++)
    {
        cout << *iter2 << " ";
    }
    cout << endl << endl;

    return 0;
}