// STL054.cpp : 연관 컨테이너 -  set03
// set 멤버 함수 03

#include "stdafx.h"

int main()
{
    set<int> s1;

    s1.insert(50); s1.insert(30); s1.insert(80); s1.insert(40);
    s1.insert(40); s1.insert(10); s1.insert(70); s1.insert(90);

    set<int>::iterator iter1;

    for (iter1 = s1.begin(); iter1 != s1.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    /*
        count() : set 컨테이너 내부에 존재하는 원소의 개수를 반환하는 함수
        - 찾는 값이 없으면 0을 반환한다
    */

    cout << " 50의 개수 : " << s1.count(50) << endl;
    cout << "100의 개수 : " << s1.count(100) << endl;

    /*
        find() : 원소를 검색하는 set의 핵심 함수
        - 찾는 원소가 없는 경우 set의 end() 반복자를 반환한다.
        - 즉 반복자 != s.end()가 true일 경우 찾는 값이 있는 것
    */

    iter1 = s1.find(30);

    if (iter1 != s1.end())
    {
        cout << *iter1 << " 발견" << endl;
    }
    else
    {
        cout << "없음" << endl;
    }

    /*
        연관 컨테이너의 찾기 관련 멤버 함수는 == 연산자를 사용하지 않는다
        - 연관 컨테이너는 정렬 기준에 의해 key가 정렬되어 있어 정렬 기준 조건자를 사용해 찾기 연산을 수행한다.
        - s 컨테이너의 정렬 기준을 반환하는 멤버 함수가 key_comp()
        - 비교하는 두 원소 a와 b가 (!s.ey_comp()(a,b) && !s.key_comp()(b,a)) 인 경우 두 원소가 같다.
        -> 정렬 기준으로 a, b가 서로 앞서있지 않으면 같다고 판단하는 것
    */

    set<int, less<int>> s2;

    cout << (!s2.key_comp()(30, 50) && !s2.key_comp()(50, 30)) << endl;
    cout << (!s2.key_comp()(30, 30) && !s2.key_comp()(30, 30)) << endl;

    return 0;
}