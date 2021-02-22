// STL052.cpp : 연관 컨테이너 - set01
// set의 멤버 함수 - insert()

#include "stdafx.h"

/*
    연관 컨테이너는 균형 이진 트리를 사용하므로 찾기 연산에 뛰어난 성능을 보인다 (log 시간 복잡도)
    - find(), lower_bound(), upper_bound(), equal_range(), count()

    insert() 멤버 함수를 이용한 삽입도 log 시간 복잡도를 가진다.
    - insert()
*/

int main()
{
    set<int> s;

    s.insert(70); s.insert(90); s.insert(30);
    s.insert(60); s.insert(10); s.insert(40);

    set<int>::iterator iter;
    for (iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    // set을 출력하는 경우 자동으로 정렬되어 출력된다.

    //// 중복된 원소를 삽입해도 전부 출력하는 결과에는 변화가 없다.
    //// set은 원소의 중복이 반영되지 않는다.
    //s.insert(50);
    //s.insert(50);

    for (iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    // insert 멤버 함수 호출 시 반환값(pair 객채)으로 실패를 확인할 수 있다
    // 1번 인자는 삽입된 원소의 위치를 가리키는 반복자
    // 2번 인자는 성공, 실패를 나타내는 bool 값이다.

    pair<set<int>::iterator, bool> pr;

    pr = s.insert(50); // 이미 존재하는 원소 50을 삽입
    s.insert(20);
    s.insert(80);

    if (true == pr.second) cout << *pr.first << " : 성공" << endl;
    else cout << *pr.first << " : 중복" << endl;

    for (iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    pr = s.insert(50); // 이미 존재하는 원소 50을 삽입

    if (true == pr.second) cout << *pr.first << " : 성공" << endl;
    else cout << *pr.first << " : 중복" << endl;

    for (iter = s.begin(); iter != s.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}