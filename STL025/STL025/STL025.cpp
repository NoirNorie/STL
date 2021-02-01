// STL025.cpp : STL 템플릿 예제

#include <iostream>
#include <string>
using namespace std;

// 정수일 때만 사용 가능한 함수
// begin, end는 각각 시작과 끝 주소, (*pf)(int)는 함수의 포인터
void For_each(int* begin, int* end, void (*pf)(int))
{
    while (begin != end)
    {
        pf(*begin++);
    }
}
void PrintInt(int n)
{
    cout << n << " ";
}

//컴파일러는 클라이언트 코드를 보고 TFor_each()함수 템플릿의 두 인스턴스를 만들어낸다.
template<typename IterT, typename Func>
void TFor_each(IterT begin, IterT end, Func pf)
{
    while (begin != end)
    {
        pf(*begin++);
    }
}
//두 함수는 타입만 다르다 -> 템플릿 함수로 만들 수 있다.
void TPrintInt(int data)
{
    cout << data << " ";
}
void TPrintString(string data)
{
    cout << data << " ";
}

template<typename T>
void Print(T data)
{
    cout << data << " ";
}

//함수 객체 버전
template<typename T>
class PrintFunctor
{
public:
    string sep;// 출력 구분자에 대한 정보를 담는다
    explicit PrintFunctor(const string& s = " ") :sep(s) {}
    void operator()(T data) const
    {
        cout << data << sep;
    }
};


int main()
{
    int arr[5] = { 10, 20, 30, 40, 50 };
    For_each(arr, arr + 5, PrintInt); //정수일때만 사용 가능한 함수
    cout << endl << endl;

    //템플릿 함수 사용
    int Tarr[5] = { 10, 20, 30, 40 , 50 };
    TFor_each(Tarr, Tarr + 5, TPrintInt);
    //명시적인 호출 : TFor_each<int*, void (*)(int)>(Tarr, Tarr+5, PrintInt);
    cout << endl << endl;

    string Sarr[5] = { "AB", "ABC", "ABCD", "ABCEDFG", "TP" };
    TFor_each(Sarr, Sarr + 5, TPrintString);
    //명시적인 호출 : TFor_each<int*, void (*)(string)>(Sarr, Sarr+5, PrintString);
    cout << endl << endl;

    //템플릿으로 만든 함수 사용
    //컴파일러가 템플릿 매개변수를 유추하지 못한다
    //명시적으로 매개변수의 인자를 정해줘야 한다.
    int TParr[5] = { 10, 20, 30, 40, 50 };
    TFor_each(TParr, TParr + 5, Print<int>);
    cout << endl << endl;

    string SParr[5]{ "AB", "ABC", "ABCD", "ABCEDFG", "TP" };
    TFor_each(SParr, SParr + 5, Print<string>);
    cout << endl << endl;
    
    //함수 객체 사용 버전
    int FFarr[5] = { 10, 20, 30, 40, 50 };
    TFor_each(FFarr, FFarr + 5, PrintFunctor<int>());
    cout << endl << endl;

    string SFarr[5]{ "AB", "ABC", "ABCD", "ABCEDFG", "TP" };
    TFor_each(SFarr, SFarr + 5, PrintFunctor<string>("*\n"));
    //함수 객체는 부가정보를 가질 수 있다
    //정수는 디폴트 출력 구분자로 공백("")을 사용
    //문자열은 출력 구분자로 "*\n"을 사용한다.
    cout << endl << endl;

    return 0;
}