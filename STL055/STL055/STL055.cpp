// STL055.cpp : 연관 컨테이너 - set04
// set의 멤버 함수

#include "stdafx.h"

int main()
{
    /*
        lower_bound(), upper_bound()
        - 찾은 원소의 순차열 구간(반복자 쌍)으로 반환하는 멤버 함수
        - lower_bound() : 찾은 원소의 시작 반복자 반환
        - upper_bound() : 찾은 원소의 다음 원소를 가리키는 반복자
        -> lower_bound()와 upper_bound()가 같은 경우 찾는 원소가 없는 것
        -> set보다는 multiset, multimap에서 더 유용하다
    */

    set<int> s1;
    s1.insert(50); s1.insert(30); s1.insert(80); s1.insert(40);
    s1.insert(10); s1.insert(70); s1.insert(90);

    set<int>::iterator iter1;
    for (iter1 = s1.begin(); iter1 != s1.end(); iter1++)
    {
        cout << *iter1 << " ";
    }
    cout << endl;

    set<int>::iterator iter_lower; // lower_bound();
    set<int>::iterator iter_upper; // upper_bound();

    iter_lower = s1.lower_bound(30);
    iter_upper = s1.upper_bound(30);

    cout << *iter_lower << endl;
    cout << *iter_upper << endl;

    iter_lower = s1.lower_bound(55);
    iter_upper = s1.upper_bound(55);

    if (iter_lower != iter_upper)
    {
        cout << "발견" << endl;
    }
    else
    {
        cout << "없음" << endl;
    }
    cout << endl;

    /*
        equal_range() : lower_bound()와 upper_bound()의 반복자 쌍을 pair 객체로 반환하는 함수
    */

    pair<set<int>::iterator, set<int>::iterator> iter_pair; // 반복자 쌍의 pair 객체

    iter_pair = s1.equal_range(30);

    cout << *iter_pair.first << endl;
    cout << *iter_pair.second << endl;
    /*
        찾는 원소가 30이므로 [30, 40)으로 반복자 구간이 생성된다.
    */


    iter_pair = s1.equal_range(55);
    if (iter_pair.first != iter_pair.second)
        cout << "있음" << endl;
    else
        cout << "없음" << endl;

    return 0;
}