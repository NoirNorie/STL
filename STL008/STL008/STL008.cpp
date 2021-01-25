// STL008.cpp : 배열 인덱스 연산자 [] 오버로딩 2
//

#include "stdafx.h"
#include "Array.h"

int main()
{
	Array ar(10);
	ar.Add(10);
	ar.Add(20);
	ar.Add(30);

	for (int i = 0; i < ar.Size(); i++)
	{
		cout << ar[i] << endl;
		// ar.operator[] (i) 와 동일함
	}

	cout << ar[0] << endl; // ar.operator[](int)를 호출
	cout << endl;

	const Array& ar2 = ar;
	cout << ar2[0] << endl;
	cout << endl;

	ar[0] = 100; // ar.operator[] (int)를 호출
	// 변경이 가능함

	//ar2[0] = 100; // 변경이 불가능한 const

	cout << ar[0] << endl;

	return 0;
}