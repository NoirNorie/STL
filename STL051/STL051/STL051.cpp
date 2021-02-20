// STL051.cpp : 시퀀스 컨테이너 - list04
// list 멤버 함수 2

#include "stdafx.h"

// sort()의 사용자 정의 조건자를 위한 클래스
class Greater
{
public:
    bool operator () (int left, int right) const
    {
        return left > right;
    }
};

// unique()의 조건자를 위한 함수
bool Predicate(int first, int second)
{
    return (second - first <= 0);
}

int main()
{

    // reverse() 함수 : list 순차열을 반대로 뒤집는다.
    cout << "reverse() 함수" << endl;

    list<int> lt1;
    list<int>::iterator iter;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt1.push_back(i * 10);
    }

    for (iter = lt1.begin(); iter != lt1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt1.reverse();

    cout << "reverse() 함수 적용" << endl;
    for (iter = lt1.begin(); iter != lt1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    // unique() 함수 : list 내의 원소를 중복되지 않게 하나씩만 남긴다.

    list<int> lt2;
    
    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt2.push_back(i * 10);
        lt2.push_back(i * 10);
    }

    for (iter = lt2.begin(); iter != lt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt2.unique();
    cout << "unique() 함수 적용" << endl;
    for (iter = lt2.begin(); iter != lt2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    // unique() 함수 조건자
    // - unique() 함수에 이항 조건자를 인자로 줘 연속한 두 원소를 인자로 받아 조건자가 참이면 원소를 제거한다.

    list<int> lt3;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        lt3.push_back(i * 10);
        lt3.push_back(i * 10);
    }

    for (iter = lt3.begin(); iter != lt3.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt3.unique(Predicate);

    cout << "unique() 함수 적용" << endl;
    cout << "조건 : (뒤 원소 - 앞 원소)의 결과가 0보다 작거나 같으면 원소를 제거한다." << endl;    
    for (iter = lt3.begin(); iter != lt3.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    /*
        sort() 함수 : 정렬을 수행하는 함수
        - list는 양방향 반복자를 지원하기 때문에 임의 접근 반복자를 사용하는 sort() 알고리즘을 사용할 수 없다.
        - list에서는 자체 정렬 멤버 함수로 sort()가 제공된다.
    */

    list<int> lt4;
    
    lt4.push_back(30); lt4.push_back(20); lt4.push_back(50);
    lt4.push_back(10); lt4.push_back(40);

    for (iter = lt4.begin(); iter != lt4.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "sort() 함수 적용" << endl;
    lt4.sort();
    for (iter = lt4.begin(); iter != lt4.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    /*
        sort() 함수 조건자 : 조건자 대로 정렬을 수행하는 함수
        - sort() 함수는 디폴트로 오름차순 정렬을 수행한다.
        - 조건자 버전을 사용하면 정렬 기준을 바꿀 수 있다.
    */

    list<int> lt5;

    lt5.push_back(30); lt5.push_back(20); lt5.push_back(50);
    lt5.push_back(10); lt5.push_back(40);

    for (iter = lt5.begin(); iter != lt5.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt5.sort(greater<int>()); // 조건자 greater를 사용해 내림차순 정렬
    cout << "내림차순 : ";
    for (iter = lt5.begin(); iter != lt5.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt5.sort(less<int>()); // 조건자 less를 사용해 오름차순 정렬
    cout << "오름차순 : ";
    for (iter = lt5.begin(); iter != lt5.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    lt5.sort(Greater()); // 사용자 정의 조건자를 사용해 내림차순 정렬
    cout << "내림차순 : ";
    for (iter = lt5.begin(); iter != lt5.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    /*
        merge() 함수 : 두개의 list를 합병하는 함수
        - 합병은 정렬된 두 list를 하나의 정렬된 list로 합병
        - 두 list는 정렬되어 있어야 한다.
        - slice() 함수를 사용하면 편하다.
    */

    list<int> m1;
    list<int> m2;

    for (list<int>::size_type i = 1; i < 6; i++)
    {
        m1.push_back(i * 10);
    }

    for (list<int>::size_type i = 0; i < 5; i++)
    {
        m2.push_back(5 + (i*10));
    }

    cout << "list 1 : ";
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    
    cout << "list 2 : ";
    for (iter = m2.begin(); iter != m2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    m1.merge(m2);
    cout << "list 합병" << endl;

    cout << "list 1 : ";
    for (iter = m1.begin(); iter != m1.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "list 2 : ";
    for (iter = m2.begin(); iter != m2.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    /*
        merge() 함수 조건자 : list가 다른 정렬 기준이 사용된 경우 merge 함수도 다른 기준을 사용해야 한다.
        - 정렬 기준이 다를 경우 merge() 함수는 오류를 출력함
    */

    list<int> m3;
    list<int> m4;

    m3.push_back(30); m3.push_back(20); m3.push_back(50);
    m3.push_back(10); m3.push_back(40);

    m3.sort(Predicate);

    m4.push_back(45); m4.push_back(35); m4.push_back(25);
    m4.push_back(15); m4.push_back(5);

    cout << "list 1 : ";
    for (iter = m3.begin(); iter != m3.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "list 2 : ";
    for (iter = m4.begin(); iter != m4.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    
    cout << "list 합병" << endl;
    m3.merge(m4, greater<int>());

    cout << "list 1 : ";
    for (iter = m3.begin(); iter != m3.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    cout << "list 2 : ";
    for (iter = m4.begin(); iter != m4.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    return 0;

    /*
        list는 시퀀스 컨테이너며 노드 기반 컨테이너로
        순차열 중간에 삽입, 제거가 빈번하게 발생하며 원소의 상대적 순서가 중요하면 list 컨테이너를 사용한다.
        
        list는 이중 연결 리스트 구조로 구성되어 있으며 노드 기반 컨테이너로 []연산자, at() 멤버 함수를 사용할 수 없다.
        또한 vector, deque는 임의 접근 반복자가 지원되지만 list는 양방향 반복자를 지원하므로 +=, -= 연산자를 사용할 수 없다.
    */

}