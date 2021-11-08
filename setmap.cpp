#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
	cout << '\n' << "set" << '\n';
	// multiset�� �ߺ� ���� ���
	set<int> s;
	s.insert(10); s.insert(100); s.insert(15);
	s.insert(10);
	s.insert(19); s.insert(25); s.insert(60);

	// ���� ���� �ľ�
	if (s.find(15) != s.end()) cout << "find" << '\n';
	else cout << "not found" << '\n';

	// ����: ���� �� 1, ���� �� 0
	cout << s.erase(15) << '\n';
	cout << s.erase(20) << '\n';
	// multiset�� ��� erase�� �ϸ� �ش� �� ��ΰ� ��������.

	// ���� ��ü ��� 
	for (auto e : s) cout << e << '\n';

	// �ݺ���
	cout << '\n' << "�ݺ���" << '\n';
	set<int>::iterator it1 = s.begin();
	it1++; 
	auto it2 = next(it1);// �ݺ��� ����
	it2 = prev(it1); // �ݺ��� ����

	// ���ϴ� ��ġ��ŭ �ݺ��� ����, ���� ����
	//advance(it2, -2); 
	//advance(it2, 2);

	auto it3 = s.lower_bound(-20); // �Է� ���� ���� ����� ��
	auto it4 = s.upper_bound(-20);
	// multiset�� ��� lower_bound�� ���� ������ ����, upper_bound�� ���� �������� ���Ҹ� ��ȯ�Ѵ�
	// ���� lower_bound�� upper_bound�� ���ٸ� �ش� ���Ҵ� ���� ��

	//auto it4 = s.find(15); // ���� ã�� ���� ���ٸ� ������ ����.
	//auto it4 = s.find(100);

	cout << *it1 << '\n';
	cout << *it2 << '\n';
	cout << *it3 << '\n';
	cout << *it4 << '\n'; 

	// map�� Ű �� ��, multimap�� �ߺ� ���� ���
	cout << '\n' << "map" << '\n';
	map<string, int> m;
	m["hi"] = 123;
	m["bkd"] = 1000;
	m["gogo"] = 165;

	cout << m.size() << '\n';

	m["hi"] = 7; // -> m["hi"] = 123�� ��ü�Ѵ�.

	if (m.find("hi") != m.end()) cout << "find" << '\n';
	else cout << "not found" << '\n';

	for (auto e : m)
		cout << e.first << " " << e.second << '\n';

	m.erase("bkd");

	for (auto e : m)
		cout << e.first << " " << e.second << '\n';

	auto mt1 = m.find("gogo");
	cout << mt1->first << " " << mt1->second << '\n';

	return 0;
}