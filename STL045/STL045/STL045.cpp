// STL045.cpp : 시퀀스 컨테이너 - vector07
// vector의 멤버 함수들

#include "stdafx.h"

int main()
{
	cout << "insert 멤버 함수" << endl;

	vector<int> v;
	
	for (int i = 1; i < 6; i++)
	{
		v.push_back(i * 10);
	}
	
	vector<int>::iterator iter1 = v.begin() + 2;
	vector<int>::iterator iter2;

	iter2 = v.insert(iter1, 100);
	// insert(1번 인자, 2번 인자)
	// 1번 인자(반복자)가 가리키는 위치에 2번 인자 값을 삽입, 해당 위치를 가리키는 반복자를 리턴

	for (iter1 = v.begin(); iter1 != v.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;
	
	cout << "iter2 값 : " << *iter2 << endl;


	vector<int>::iterator iter3 = v.begin() + 2;

	// 다른 버전의 insert 함수
	v.insert(iter3, 3, 200);
	for (iter1 = v.begin(); iter1 != v.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl << endl;

	vector<int> v2;
	v2.push_back(100); v2.push_back(200); v2.push_back(300);

	vector<int>::iterator iter4 = v2.begin() + 1;

	//구간을 삽입하는 것도 가능하다
	v2.insert(iter4, v2.begin(), v2.end());

	for (iter4 = v2.begin(); iter4 != v2.end(); iter4++)
	{
		cout << *iter4 << " ";
	}
	cout << endl << endl;

	/*
		vector의 insert 멤버 함수
	 
		반복자 = vector.insert(1번 인자(반복자), 2번 인자(값))
		- 1번 인자가 가리키는 위치에 2번 인자의 값을 삽입 후 해당 위치를 가리키는 반복자를 리턴한다
		
		vector.insert(1번 인자(반복자), 2번 인자(수), 3번 인자(값))
		- 1번 인자가 가리키는 위치에 2번 인자 만큼 3번 인자인 값을 삽입한다.

		vector.insert(1번 인자(반복자), 2번 인자(vector 시작 지점), 3번 인자(vector 끝 지점))
		- 1번 인자가 가리키는 위치에 2번 인자부터 3번 인자까지의 구간을 삽입한다.
	*/

	cout << "erase 멤버 함수" << endl;

	vector<int> ve1;
	for (int i = 1; i < 6; i++)
	{
		ve1.push_back(i * 10);
	}

	vector<int>::iterator eiter1;
	vector<int>::iterator eiter2;

	for (eiter1 = ve1.begin(); eiter1 < ve1.end(); eiter1++)
	{
		cout << *eiter1 << " ";
	}
	cout << endl;

	eiter1 = ve1.begin() + 2;
	eiter2 = ve1.erase(eiter1);
	//erase(1번 인자(반복자)) : 반복자가 가리키는 위치의 원소를 제거한 후 다음 원소를 가리키는 반복자를 리턴

	for (eiter1 = ve1.begin(); eiter1 < ve1.end(); eiter1++)
	{
		cout << *eiter1 << " ";
	}
	cout << endl;
	cout << "삭제에 사용한 반복자가 가리키는 곳 : " << *eiter2 << endl;
	cout << endl << endl;

	//erase(1번 인자(vector 시작 지점), 2번 인자(vector 끝 지점))
	eiter2 = ve1.erase(ve1.begin() + 1, ve1.end() - 1);

	for (eiter1 = ve1.begin(); eiter1 != ve1.end(); eiter1++)
	{
		cout << *eiter1 << " ";
	}
	cout << endl;
	cout << "삭제의 사용한 반복자가 가리키는 곳 : " << *eiter2 << endl;
	cout << endl << endl;

	/*
		반복자 = vector.erase(1번 인자 (반복자))
		- 반복자가 가리키는 위치의 원소를 제거한 후 다음 원소를 가리키는 반복자를 리턴

		반복자 = vector.erase(1번 인자 (시작 지점), 2번 인자 (끝 지점))
		- 1번 인자부터 2번 인자까지의 구간에 들어있는 모든 원소를 제거한 후 다음 원소를 가리키는 반복자를 리턴

		* 마지막 원소를 제거하는 경우 존재하지 않는 위치를 가리키게 되어 출력 시 주의
	*/

	cout << "assign 멤버 함수" << endl;

	vector<int> va1;
	for (int i = 1; i < 6; i++)
	{
		va1.push_back(i * 10);
	}

	vector<int> va2(va1.begin(), va1.end());

	vector<int>::iterator aiter;

	for (aiter = va2.begin(); aiter != va2.end(); aiter++)
	{
		cout << *aiter << " ";
	}
	cout << endl;

	vector<int> va3;
	va3.assign(va1.begin(), va1.end());
	//vector.assign(시작지점, 끝 지점) : 해당 구간을 새로운 vector에 할당

	for (aiter = va3.begin(); aiter != va3.end(); aiter++)
	{
		cout << *aiter << " ";
	}
	cout << endl << endl;

	cout << "연산자" << endl;

	vector<int> vc1; vector<int> vc2;
	for (int i = 1; i < 6; i++)
	{
		vc1.push_back(i * 10);
	}
	vc2.push_back(10); vc2.push_back(20); vc2.push_back(50);

	if (vc1 == vc2)		cout << "vc1 == vc2" << endl;
	// vector의 모든 원소가 같으면 true, 아니면 false 리턴

	if (vc1 != vc2)		cout << "vc1 != vc2" << endl;
	// vector의 원소 중 하나라도 다른 원소가 있다면 true, 모두 같다면 true

	if (vc1 < vc2)		cout << "vc1 < vc2" << endl;
	// vector의 모든 원소를 비교하며 큰 원소가 있다면 true, 아니면 false 리턴
	// vector의 원소 수를 비교하는 것이 아닌 원소 개개의 크기를 비교하는 것

	return 0;
}