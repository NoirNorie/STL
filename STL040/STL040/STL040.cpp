// STL040.cpp : 시퀀스 컨테이너 - vector02
// 크기를 반환하는 3개의 멤버 함수

#include "stdafx.h"

int main()
{
    vector<int> v;

    for (int i = 10; i < 60; i += 10)
    {
        v.push_back(i);
    }

    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "저장 원소의 개수 : "<< v.size() << endl;
    cout << "실제 할당된 메모리 공간의 크기 : " << v.capacity() << endl;
    //capacity()는 vector만 가지고 있는 멤버 함수
    //vector는 배열 기반 컨테이너 + 원소를 컨테이너에 계속 추가할 수 있는 컨테이너
    //메모리 재할당과 관련된 성능 문제를 보완하려고 만들어진 개념
    //미리 넉넉한 메모리를 확보해 재할당과 이전 원소를 복사하는데 드는 비용을 줄인다.
    cout << "컨테이너가 담을 수 있는 최대 원소 개수 : " << v.max_size() << endl;


    vector<int> v2;

    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(10);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(20);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(30);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(40);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(50);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(60);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(70);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(80);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(90);
    cout << "size : " << v2.size() << " capacity : " << v2.capacity() << endl;
    v2.push_back(100);

    //메모리 확장 정책에 따라 메모리 재할당 수행 시 이전 메모리 크기의 1/2만큼을 더 할당한다
    //메모리 확장 정책은 컴파일러마다 다르다.

    for (vector<int>::size_type i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;
}
