//STL029.cpp : STL ���� 1

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

	// ������ �����̳ʷ� ������� ����
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
		// �迭 ��� �����̳� = ������ []�� ����� �� �ִ�.
	}

	cout << endl;

	// �ݺ��� ���
	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
		// �ݺ��ڰ� ����Ű�� ���Ҹ� ������ �Ѵ�.
	}

	cout << endl;

	// ���� ���� �ݺ��� ���
	iter = v.begin(); // ���� ���� ����
	cout << iter[0] << endl;
	cout << iter[1] << endl;
	cout << iter[4] << endl;
	//  ������ [] ��� ����

	cout << endl;

	vector<int>::iterator iter2 = iter + 2;
	// ������ + ��� ����

	iter2 += 2;
	// ������ += ��� ����

	cout << *iter2 << endl;


	return 0;
}