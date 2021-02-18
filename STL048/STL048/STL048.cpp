// STL048.cpp : 시퀀스 컨테이너 - list01

#include "stdafx.h"

int main()
{
    list<int> lt;
    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt.push_back(i * 10);
        // list의 뒤쪽에 값을 추가
    }

    list<int>::iterator iter; // list의 반복자
    for (iter = lt.begin(); iter != lt.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    // list의 앞쪽에 값을 추가
    lt.push_front(100);
    lt.push_front(200);

    for (iter = lt.begin(); iter != lt.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;
    //앞 뒤로 값을 삽입하는 것은 vector, deque와 동일하다.

    list<int> lts;
    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lts.push_back(i * 10);
    }

    list<int>::iterator iter1 = lts.begin();
    list<int>::iterator iter2;
    ++iter1;
    ++iter1;

    cout << "iter1이 가리키는 원소 제거" << endl;
    iter2 = lts.erase(iter1);

    for (iter1 = lts.begin(); iter1 != lts.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    cout << "iter2 = " << *iter2 << endl;

    iter1 = iter2;
    iter2 = lts.insert(iter1, 300);

    //iter1은 iter1 != lts.end()로 모든 원소를 출력하는 방법도 가능하다.
    for (iter1 = lts.begin(); iter1 != lts.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;
    cout << "iter2 = " << *iter2 << endl;

    /*
    list의 가장 큰 특징 중 하나는 순차열 중간에 원소를 삽입, 제거해도
    상수 시간 복잡도의 수행 성능을 보인다.
    배열 기반 컨테이너인 vector와 deque처럼 원소를 밀어내지 않고
    노드를 서로 연결하기만 하면 되기 때문

    노드 기반 컨테이너의 삽입, 제거 동작은 반복자를 무효화시키지 않는다.
    - 반복자가 가리키는 원소 자체가 제거되지 않는 한 반복자가 가리키는 원소는 그대로 존재한다.
    - 배열 기반 컨테이너의 반복자는 원소의 삽입과 제거 동작이 발생하면 메모리가 재할당되거나
    - 원소가 이동할 수 있으므로 반복자가 무효화된다.
    */

    return 0;
}