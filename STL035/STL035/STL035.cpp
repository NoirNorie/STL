// STL035.cpp : STL 시작 7
// 역방향 반복자

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //정방향 반복자(기본 반복자)
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    //역방향 반복자(어댑터)
    vector<int>::reverse_iterator riter;
    
    //역방향이므로 정방향에서 모든게 반대
    //rbegin()은 맨 뒤, rend()는 맨 처음의 앞
    for (riter = v.rbegin(); riter != v.rend(); riter++)
    {
        cout << *riter << " ";
    }
    cout << endl;

    return 0;

}
