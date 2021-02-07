// STL036.cpp : 정방향 반복자와 역방향 반복자

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    //vector에 값 삽입
    for (int i = 10; i < 60; i += 10)
    {
        v.push_back(i);
    }

    //정방향 반복자
    vector<int>::iterator base_iter = v.begin() + 3;

    //역방향 반복자
    vector<int>::reverse_iterator riter(base_iter);
    
    //같은 곳을 지정했지만 실제 가리키는 값이 다르다
    cout << "정방향 : " << *base_iter << endl;
    cout << "역방향 : " << *riter << endl;
    cout << endl << endl;

    vector<int>::iterator iter;

    cout << "정방향 출력 : ";
    for (iter = v.begin(); iter != base_iter; iter++)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;

    cout << "역방향 출력 : ";
    for (riter; riter != v.rend() ; riter++)
    {
        cout << *riter << " ";
    }
    cout << endl << endl;
    return 0;
}