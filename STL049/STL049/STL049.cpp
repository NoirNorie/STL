// STL049.cpp : 시퀀스 컨테이너 - list02
// 시퀀스 컨테이너 vector, deque, list 비교

#include "stdafx.h"

int main()
{
	//vector
	vector<int> v;
	for (vector<int>::size_type i = 1; i < 6; i++)
		v.push_back(i * 10);

	//deque
	deque<int> dq;
	for (deque<int>::size_type i = 1; i < 6; i++)
		dq.push_back(i * 10);
	
	//list
	list<int> lt;
	for (deque<int>::size_type i = 1; i < 6; i++)
		lt.push_back(i * 10);

	vector<int>::iterator vector_iter = v.begin();
	++vector_iter; // 2번째 원소를 가리키는 vector의 반복자

	deque<int>::iterator deque_iter = dq.begin();
	deque_iter += 2; // 3번째 원소를 가리키는 deque의 반복자

	list<int>::iterator list_iter = lt.begin();
	++list_iter; // 2번째 원소를 가리키는 list의 반복자

	vector_iter = v.insert(vector_iter, 600);
	deque_iter = dq.insert(deque_iter, 500);
	list_iter = lt.insert(list_iter, 400);

	cout << "vector의 반복자 값 : " << *vector_iter << endl;
	cout << "deque의 반복자 값  : " << *deque_iter << endl;
	cout << "list의 반복자 값   : " << *list_iter << endl;

	cout << "vector : ";
	for (vector_iter = v.begin(); vector_iter != v.end(); vector_iter++)
		cout << *vector_iter << " ";
	cout << endl;

	cout << "deque : ";
	for (deque_iter = dq.begin(); deque_iter != dq.end(); deque_iter++)
		cout << *deque_iter << " ";
	cout << endl;

	cout << "list : ";
	for (list_iter = lt.begin(); list_iter != lt.end(); list_iter++)
		cout << *list_iter << " ";
	cout << endl;

	/*
		vector는 insert를 수행한 경우 다음 원소부터 모두 뒤로 밀려나게 된다.
		- 할당된 메모리 공간이 부족해지면 메모리 재할당이 발생한다.

		deque는 vector의 단점을 보완하므로 미리 여러개의 메모리 블록이 존재하므로 메모리 재할당이 없다.

		list는 insert를 수행한 경우 노드 하나만을 삽입하면 된다.
		- 반복자들이 무효화되지 않는다.
	*/

	return 0;
}