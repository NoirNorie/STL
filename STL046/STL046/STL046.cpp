// STL046.cpp : 시퀀스 컨테이너 - deque01
// deque

#include "stdafx.h"

int main()
{
	deque<int> dq1;
	
	//push_back : 뒤쪽에 값을 삽입하는 함수
	for (deque<int>::size_type i = 1; i <= 10; i++)
	{
		dq1.push_back(i * 10);
	}

	for (deque<int>::size_type i = 0; i < dq1.size(); i++)
	{
		cout << dq1[i] << " ";
	}
	cout << endl << endl;

	//vector와 deque 비교
	cout << "vector와 deque의 비교" << endl;
	vector<int> v(4, 100);
	deque<int> dq(4, 100);

	v.push_back(200);
	dq.push_back(200);

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	for (deque<int>::size_type i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << " ";
	}
	cout << endl << endl;

	/*
		결과는 동일하게 출력된다
		- vector는 새로운 원소가 추가될 경우 메모리 블록을 재할당 후 이전 원소를 복사하고 새로운 원소를 추가한다
		- deque는 새로운 메모리 블록을 할당하고 새로운 원소를 추가한다
	*/


	//deque의 push_front 함수
	cout << "push_front 함수" << endl;
	deque<int> dq2;

	for (deque<int>::size_type i = 1; i < 6; i++)
	{
		dq2.push_back(i * 10);
	}

	for (deque<int>::size_type i = 0; i < dq2.size(); i++)
	{
		cout << dq2[i] << " ";
	}
	cout << endl;

	dq2.push_front(100);
	dq2.push_front(200);

	for (deque<int>::size_type i = 0; i < dq2.size(); i++)
	{
		cout << dq2[i] << " ";
	}
	cout << endl << endl;

	/*
		vector와 deque는 배열 기반 컨테이너로 임의 접근 반복자를 지원한다
		따라서 +, -, +=, -=, [] 연산자를 모두 수행할 수 있다.
	*/

	cout << "임의 접근 반복자" << endl;
	
	deque<int> dq3;

	for (deque<int>::size_type i = 1; i < 6; i++)
	{
		dq3.push_back(i * 10);
	}

	deque<int>::iterator iter;
	for (iter = dq3.begin(); iter != dq3.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	iter = dq3.begin() + 2;
	cout << *iter << endl;

	iter += 2;
	cout << *iter << endl;

	iter -= 3;
	cout << *iter << endl;

	return 0;
}