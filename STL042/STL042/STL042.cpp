// STL042.cpp : 시퀀스 컨테이너 - vector04
// swap을 사용한 할당 메모리 제거

#include "stdafx.h"

int main()
{
	vector<int> v(5);

	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

	vector<int>().swap(v);
	// 기본 생성자로 만든 임시 vector객체와 v를 swap
	// swap 멤버 함수는 모든 컨테이너가 제공한다
	// 컨테이너 사이의 원소를 교환할 때 사용한다.
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
	// swap 방법을 사용해서 할당된 메모리(capacitiy)를 제거한다.

	vector<int> v1;
	for (int i = 0; i < 3; i++)
	{
		v1.push_back(i * 10);
	}

	vector<int> v2;
	for (int i = 0; i < 3; i++)
	{
		v2.push_back(i * 100);
	}

	cout << "swap() 전" << endl;

	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << '\t' << v2[i] << endl;
	}
	cout << endl;

	v1.swap(v2);
	cout << "swap() 후" << endl;
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << '\t' << v2[i] << endl;
	}
	cout << endl;


	return 0;
}