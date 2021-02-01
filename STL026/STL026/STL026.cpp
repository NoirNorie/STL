// STL026.cpp : 템플릿의 Less, Greater

#include <iostream>
#include <functional> //STL 내장 less, greater 포함 헤더
using namespace std;

template<typename T>
class Less
{
public:
    bool operator() (T a, T b)
    {
        return (a < b);
    }
};
template<typename T>
class Greater
{
public:
    bool operator() (T a, T b)
    {
        return (a > b);
    }
};

int main()
{
    //직접 정의한 less와 greater 사용
    cout << Less<int>() (10, 20) << endl;
    cout << Less<int>() (20, 10) << endl << endl;

    cout << Greater<int>() (10, 20) << endl;
    cout << Greater<int>() (20, 10) << endl << endl;

    //STL 내장 less와 greater 사용
    cout << less<int>() (10, 20) << endl;
    cout << less<int>() (20, 10) << endl << endl;

    cout << greater<int>() (10, 20) << endl;
    cout << greater<int>() (20, 10) << endl << endl;

    return 0;
}