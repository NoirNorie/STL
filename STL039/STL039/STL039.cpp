// STL039.cpp : 시퀀스 컨테이너 - vector01
// vector에 값 삽입과 typedef

#include "stdafx.h"

int main()
{
    vector<int> v; //빈 vector 생성

    //vector에 값 삽입
    for (int i = 10; i < 60; i += 10)
    {
        v.push_back(i);
    }

    //vector 값 출력
    for (int i = 0; i < v.size() ; i++)
    {
        cout << v[i] << " "; // [] 연산자로 배열과 동일하게 참조가 가능하다
    }
    cout << endl;

    //경고 없이 값을 출력하는 방법
    //int 타입인 i, size()함수의 반환 타입인 unsigned int 타입이 맞지 않아 경고가 출력된다.
    //unsigned int i로 선언하거나 size()를 int 타입으로 변환해도 되긴 하다
    //vector 내에 typedef화 된 멤버 형식을 사용한다
    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "vector에 typedef화 된 멤버 형식 : ";
    cout << typeid(vector<int>::size_type).name() << endl;
    //vector<int>::size_type : vector의 크기, 첨자 형식을 위한 typedef 멤버 형식
    //typeid(T) : T에 대한 typeinfo 객체를 리턴

    vector<int>::iterator iter; //벡터를 순회할 반복자
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}