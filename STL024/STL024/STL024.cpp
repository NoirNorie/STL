// STL024.cpp : 특수화 클래스 템플릿

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class ObjectInfo
{
    T data;
public:
    ObjectInfo(const T& d): data(d) {}

    void Print()
    {
        cout << "타입 : " << typeid(data).name() << endl;
        //typeid() : 해당 타입의 정보를 알려주는 함수
        cout << "크기 : " << sizeof(data) << endl;
        //sizeof() : 해당 타입의 크기를 알려주는 함수
        cout << "값   : " << data << endl;
        cout << endl;
    }
};

//string 타입의 특수화 버전 클래스 템플릿
template<>
class ObjectInfo<string>
{
    string data;
public:
    ObjectInfo(const string& d) :data(d) {}

    void Print()
    {
        cout << "타입        : " << "string" << endl;
        cout << "문자열 길이 : " << data.size() << endl;
        cout << "값          : " << data << endl;
        cout << endl;
    }
};

int main()
{
    ObjectInfo<int> d1(10);
    d1.Print();
    ObjectInfo<double> d2(5.5);
    d2.Print();
    ObjectInfo<string> d3("Hello");
    d3.Print();
    //string 타입만 길게 출력된다
    //string 타입은 클래스 템플릿으로 typedef로 되어있다.
    //-> string 타입에 대한 특수화 클래스 템플릿이 필요함

    return 0;
}