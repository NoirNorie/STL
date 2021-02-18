// STL047.cpp : 시퀀스 컨테이너 - deque02
// deque의 함수

#include "stdafx.h"

int main()
{
	deque<int> dq;

	for (deque<int>::size_type i = 1; i < 6; i++)
	{
		dq.push_back(i * 10);
	}

	deque<int>::iterator iter1;
	deque<int>::iterator iter2;

	// vector와 멤버 함수가 많이 비슷하다.
	for (iter1 = dq.begin(); iter1 < dq.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	iter1 = dq.begin() + 2;
	iter2 = dq.insert(iter1, 500);
	cout << *iter2 << endl;

	for (iter1 = dq.begin(); iter1 != dq.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	return 0;

	/*
		deque는 시퀀스 컨테이너, 배열 기반 컨테이너로 vector와 유사한 특징을 갖는 컨테이너로 임의 접근 반복자를 갖는다.
		vector와의 차이점은 메모리 정책으로 하나의 메모리 블록이 아니라 여러 메모리 블록에 나뉘어 저장된다.
		
		deqeue는 앞,뒤로 원소의 추가가 가능하며 배열 기반 컨테이너의 특징을 가지면서도 vector보다 효율적으로 동작한다.
		- 배열 후방에 원소 삽입, 제거 : push_back(), pop_back()
		- 배열 전방에 원소 삽입, 제거 : push_front(), pop_front()

		deque는 시퀀스 기반 컨테이너로 원소가 상대적인 위치(순서)를 갖게된다.
		- insert, erase 멤버 함수를 호출한다면 삽입, 제거될 위치의 모든 원소를 밀어내야 한다.
		- 비효율적으로 동작하지만 vector보다는 효율적이다.
		-> vector는 모든 원소를 뒤쪽으로만 밀어내야 하지만 deque는 앞뒤로 밀어낼 수 있다.

		deque도 vector와 갖게 at()과 [] 연산자를 지원한다.
		- at()과 [] 연산자 모두 동일한 동작을 수행하짐나 at()은 유효범위 검사를 수행해 안전, [] 연산자는 속도가 조금 더 빠르다.
	*/
}