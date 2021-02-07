// STL037.cpp : 함수 어댑터 not2
//not1 : 단항 연산의 의미를 반대로 만들어준다.
//not2 : 이항 연산의 의미를 반대로 만들어준다.

#include <iostream>
#include <functional> // not2가 정의된 곳
using namespace std;

int main()
{
    //less 임시 객체로 비교
    cout << less<int>()(10, 20) << endl;
    cout << less<int>()(20, 20) << endl;
    cout << less<int>()(20, 10) << endl;
    cout << endl;

    //not2 어댑터 사용
    cout << not2(less<int>())(10, 20) << endl;
    cout << not2(less<int>())(20, 20) << endl;
    cout << not2(less<int>())(20, 10) << endl;
    cout << endl;

    //less 객체로 비교
    less<int> l;
    cout << l(10, 20) << endl;
    cout << l(20, 20) << endl;
    cout << l(20, 10) << endl;
    cout << endl;

    cout << not2(l)(10, 20) << endl;
    cout << not2(l)(20, 20) << endl;
    cout << not2(l)(20, 10) << endl;
    cout << endl;

    return 0;
}