// STL044.cpp : 시퀀스 컨테이너 - vector06
// vector의 반복자 연산

#include "stdafx.h"

int main()
{
    vector<int> v;
    for (int i = 1; i < 6; i++)
    {
        v.push_back(i * 10);
    }

    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    //배열 기반 컨테이너인 vector, deque는 임의 접근 반복자가 제공된다
    // +, -, +=, -=, [] 연산자 사용이 가능하다

    //반복자 선언
    vector<int>::iterator iter;
    iter = v.begin();//시작 지점을 가리킨다
    cout << *(iter += 2) << endl;
    cout << *(iter -= 1) << endl;

    //일반 반복자
    vector<int>::iterator iter2 = v.begin();
    //상수 반복자
    vector<int>::const_iterator citer = v.begin();

    cout << *(++iter2) << endl;
    cout << *(++citer) << endl; //상수 참조도 이동이 가능하다

    *iter2 = 100;
    //*citer = 100; // 상수 반복자로는 원소를 변경시킬 수 없다.


    vector<int> v2;
    int arr[5] = { 10, 20, 30, 40, 50 };

    for (int i = 1; i < 6; i++)
    {
        v2.push_back(i * 10);
    }

    vector<int>::iterator iter3 = v2.begin();
    int* p = arr;
    cout << *iter3 << ", " << *p << endl;

    vector<int>::const_iterator citer2 = v2.begin();
    const int* cp = arr;
    cout << *citer2 << ", " << *cp << endl;

    const vector<int>::iterator iter_const = v.begin();
    int* const p_const = arr;
    cout << *iter_const << ", " << *p_const << endl;

    const vector<int>::const_iterator citer_const = v.begin();
    const int* const cp_const = arr;
    cout << *citer_const << ", " << *cp_const << endl;

    /*
        vector<int>::iterator iter
        - 다음 원소로 이동이 가능하고 원소의 변경이 가능한 반복자
        vector<int>::const_iterator citer
        - 다음 원소로 이동이 가능하고 원소의 변경이 불가능한 반복자
        const vector<int>::iterator iter_const
        - 다음 원소로 이동이 불가능하고 원소의 변경이 가능한 반복자
        const vector<int>::const_iterator citer_const
        - 다음 원소로 이동이 불가능하고 원소의 변경이 불가능한 반복자
    */

    vector<int> v3;
    for (int i = 1; i < 6; i++)
    {
        v3.push_back(i * 10);
    }

    //정방향 반복자
    vector<int>::iterator iter4;
    //역방향 반복자
    vector<int>::reverse_iterator riter;

    for (iter4 = v3.begin(); iter4 != v3.end(); iter4++)
    {
        cout << *iter4 << " ";
    }
    cout << endl;
    for (riter = v3.rbegin(); riter != v3.rend(); riter++)
    {
        cout << *riter << " ";
    }
    cout << endl;

    return 0;

}