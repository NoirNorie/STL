//STL029.cpp : STL 시작 1

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	// 시퀀스 컨테이너로 순차대로 접근
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
		// 배열 기반 컨테이너 = 연산자 []를 사용할 수 있다.
	}

	cout << endl;

	// 반복자 사용
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
		// 반복자가 가리키는 원소를 역참조 한다.
	}

	cout << endl;

	// 임의 접근 반복자 기능
	iter = v.begin(); // 시작 원소 지정
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[4] << endl;
	//  연산자 [] 사용 가능

	cout << endl;

	vector<int>::iterator iter2 = iter + 2;
	// 연산자 + 사용 가능

	iter2 += 2;
	// 연산자 += 사용 가능

	cout << *iter2 << endl;


	return 0;
}