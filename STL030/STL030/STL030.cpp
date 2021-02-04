// STL030.cpp : STL 시작 2

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    // deque도 반복자를 사용할 수 있으며
    // 연산자 [], *, ++를 사용할 수 있다.
    deque<int>::iterator iter;
    for (iter = dq.begin(); iter != dq.end(); iter++)
    {
        cout << *iter << endl;
    }

    cout << endl;

    iter = dq.begin();
    cout << iter[0] << endl;
    
    cout << endl;

    deque<int>::iterator iter2 = iter;
    iter2 += 2;
    cout << *iter2 << endl;
}