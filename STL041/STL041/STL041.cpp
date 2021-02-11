// STL041.cpp : 시퀀스 컨테이너 - vector03
// vector의 생성자

#include "stdafx.h"

int main()
{
	vector<int> v1(5); //size = 5에 0으로 초기화된 vector
	for (int i = 10; i < 60; i+=10)
	{
		v1.push_back(i);
	}

	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	vector<int> v2(5, 10); //생성자의 2번 인자는 원소의 초기값을 의미한다
	for (vector<int>::size_type i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl << endl;

	vector<int> v3;
	for (int i = 10; i < 60; i += 10)
	{
		v3.push_back(i);
	}
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;

	v3.resize(10);
	// 크기를 10으로 변화시키고 남은 공간은 0으로 초기화
	// 두번째 인자의 디폴트 값은 0으로 따로 지정한다면 그 값으로 초기화된다.
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;

	v3.resize(5); // 크기를 5로 변화시킨다. capacity는 변화 없다
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;

	v3.clear(); // vector를 비우는 함수
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	cout << "size : " << v3.size() << " capacity : " << v3.capacity() << endl;

	if (v3.empty()) //vector가 비었는지 확인하는 함수
	{
		cout << "원소가 없음" << endl;
	}

	return 0;

}