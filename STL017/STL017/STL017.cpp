// STL017.cpp : 함수 객체 2

#include <iostream>
using namespace std;

class Adder
{
    int total;
public:
    explicit Adder(int n = 0) :total(n) {} // 암시적 형변환을 막음
    int operator() (int n)
    {
        return total += n;
    }
    // 클래스 내부에 정의되어 암묵적으로 인라인 함수가 된다.
    // operator()(int n)과 함수 시그니처가 같지만
    // 타입이 다른 함수 객체는 Adder 클래스 객체에 대입, 복사가 불가능하다.
};

int main()
{
    Adder add(0);

    cout << add(10) << endl;
    cout << add(20) << endl;
    cout << add(30) << endl;
    // 값이 누적된다.

    return 0;
}
