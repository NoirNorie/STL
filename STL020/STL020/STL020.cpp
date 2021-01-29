// STL020.cpp : 함수 객체 구현 2
// plus, minus 구현

#include <iostream>
#include <functional> //plus<>, minus<> 헤더
using namespace std;

class Plus
{
public:
    int operator() (int a, int b) { return a + b; }
};
class Minus
{
public:
    int operator() (int a, int b) { return a - b; }

};

int main()
{
    cout << Plus()(10, 20) << endl;
    cout << Plus()(20, 10) << endl << endl;

    cout << Minus()(10, 20) << endl;
    cout << Minus()(20, 10) << endl << endl;

    // STL 내장 plus, minus
    cout << plus<int>() (10, 20) << endl;
    cout << plus<int>() (20, 10) << endl << endl;

    cout << minus<int>() (10, 20) << endl;
    cout << minus<int>() (20, 10) << endl << endl;

    return 0;

}