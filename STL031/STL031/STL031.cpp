// STL031.cpp : STL 시작 3

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int>::iterator iter;
    iter = find(v.begin(), v.end(), 20);
    //find() : 범위 내에서 지정한 숫자를 찾는 알고리즘
    cout << *iter << endl;

    iter = find(v.begin(), v.end(), 100);
    // 찾는 값이없으면 v.end()에 반복자가 도달한다.
    if (iter == v.end())
    {
        cout << "Not Found" << endl;
    }
    

    list<int> lt;
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);

    sort(v.begin(), v.end());
    //순차 컨테이너인 vector는 sort 알고리즘을 적용할 수 있다.

    //sort(lt.begin(), lt.end());
    //list, 연관 컨테이너는 오류가 발생한다.

    return 0;
}