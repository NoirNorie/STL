// STL028.cpp : Pair 클래스
// STL에서 데이터 쌍을 표현할 때 항상 사용하는 클래스
// 두 객체를 하나의 객체로 취급할 수 있게 두 객체를 묶어주는 역할을 한다.

#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;
    Pair(const T1& ft, const T2& sd):first(ft), second(sd){}
};

int main()
{
    //구현한 버전
    Pair<int, int> p1(10, 20);
    cout << p1.first << ", " << p1.second << endl;

    Pair<int, string> p2(1, "one");
    cout << p2.first << ", " << p2.second << endl;

    //STL 내장 pair
    pair<int, int> p3(10, 20);
    cout << p3.first << ", " << p3.second << endl;

    pair<string, int> p4("one", 1);
    cout << p4.first << ", " << p4.second << endl;

    return 0;
}