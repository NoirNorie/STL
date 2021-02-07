// STL038.cpp : 컨테이너 기본 할당기

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int, allocator<int>> v;
    //vector<int, allocator<int>> v
    //2번 매개변수가 할당기를 인자로 받는다
    //1번은 저장 타입
    v.push_back(10);

    cout << *v.begin() << endl;

    set<int, less<int>, allocator<int>> s;
    //set<int, less<int> allocator<int>> s
    //3번 매개변수가 할당기를 인자로 받는다
    //1번은 저장 타입, 2번은 정렬 기준(조건자)

    s.insert(10);
    cout << *s.begin() << endl;

    return 0;
}