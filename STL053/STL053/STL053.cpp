// STL053.cpp : 연관 컨테이너 - set02
// set의 멤버 함수 02

#include "stdafx.h"

int main()
{
    set<int, greater<int>> s1;
    /*
        set의 디폴트 정렬 기준 : pred = less
        - 기본 정렬 기준은 템플릿 매개변수를 통해 변경할 수 있다.
        - greater 조건자로 변경 시 내림차순으로 정렬된다.
    */ 

    s1.insert(50); s1.insert(30); s1.insert(80); s1.insert(40); s1.insert(10);
    s1.insert(70); s1.insert(90);


    set<int, greater<int>>::iterator g_iter; // 내림차순으로 출력할 반복자

    for (g_iter = s1.begin(); g_iter != s1.end(); g_iter++)
    {
        cout << *g_iter << " ";
    }
    cout << endl;

    // 그냥 반복자를 사용해도 내림차순으로 출력되기는 함
    set<int>::iterator iter;
    for (iter = s1.begin(); iter != s1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    /*
        set은 사용 중인 정렬 기준 조건자를 반환하는 멤버 함수 key_comp()와 value_comp()가 지원된다.
        - 정렬 기준은 typedef 내장 멤버 형식인 key_compare, value_compare
        - set은 저장 원소인 key와 value의 타입이 같다.
        - 사용자가 직접 조건자를 만들어 set의 정렬 기준으로 사용할 수 있다.
    */

    set<int, less<int>> s_less;
    set<int, greater<int>> s_greater;

    s_less.insert(50); s_less.insert(80); s_less.insert(30);
    s_greater.insert(50); s_greater.insert(80); s_greater.insert(20);

    set<int, less<int>>::key_compare l_cmp = s_less.key_comp();
    set<int, greater<int>>::key_compare g_cmp = s_greater.key_comp();

    // 정렬 기준 조건자를 반환
    cout << l_cmp(10, 20) << endl; // l_cmp(10, 20) : 10 < 20 의 bool 값을 반환함
    cout << g_cmp(10, 20) << endl; // g_cmp(10, 20) : 10 > 20 의 bool 값을 반환함

    cout << "key_compare type : " << typeid(s_less.key_comp()).name() << endl;
    cout << "key_compare type : " << typeid(s_greater.key_comp()).name() << endl;
    cout << "value_compare type : " << typeid(s_less.value_comp()).name() << endl;
    cout << "value_compare type : " << typeid(s_greater.value_comp()).name() << endl;


    return 0;
}