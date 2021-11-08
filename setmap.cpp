#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
	cout << '\n' << "set" << '\n';
	// multiset은 중복 원소 허용
	set<int> s;
	s.insert(10); s.insert(100); s.insert(15);
	s.insert(10);
	s.insert(19); s.insert(25); s.insert(60);

	// 존재 여부 파악
	if (s.find(15) != s.end()) cout << "find" << '\n';
	else cout << "not found" << '\n';

	// 제거: 성공 시 1, 실패 시 0
	cout << s.erase(15) << '\n';
	cout << s.erase(20) << '\n';
	// multiset의 경우 erase를 하면 해당 값 모두가 지워진다.

	// 내용 전체 출력 
	for (auto e : s) cout << e << '\n';

	// 반복자
	cout << '\n' << "반복자" << '\n';
	set<int>::iterator it1 = s.begin();
	it1++; 
	auto it2 = next(it1);// 반복자 진행
	it2 = prev(it1); // 반복자 역행

	// 원하는 위치만큼 반복자 역행, 진행 가능
	//advance(it2, -2); 
	//advance(it2, 2);

	auto it3 = s.lower_bound(-20); // 입력 값과 가장 가까운 값
	auto it4 = s.upper_bound(-20);
	// multiset의 경우 lower_bound는 가장 왼쪽의 원소, upper_bound는 가장 오른쪽의 원소를 반환한다
	// 만약 lower_bound와 upper_bound가 같다면 해당 원소는 없는 것

	//auto it4 = s.find(15); // 만약 찾는 값이 없다면 오류가 난다.
	//auto it4 = s.find(100);

	cout << *it1 << '\n';
	cout << *it2 << '\n';
	cout << *it3 << '\n';
	cout << *it4 << '\n'; 

	// map은 키 값 쌍, multimap은 중복 원소 허용
	cout << '\n' << "map" << '\n';
	map<string, int> m;
	m["hi"] = 123;
	m["bkd"] = 1000;
	m["gogo"] = 165;

	cout << m.size() << '\n';

	m["hi"] = 7; // -> m["hi"] = 123을 대체한다.

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