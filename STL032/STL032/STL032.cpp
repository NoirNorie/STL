// STL032.cpp : 함수 객체

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<int>::iterator iter; // 반복자 선언

    sort(v.begin(), v.end(), less<int>()); // 오름차순 정렬
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>()); // 내림차순 정렬
    //sort(v.rbegin(), v.rend()); 
    //어댑터를 사용해서 이렇게도 할 수 있다.
    
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}