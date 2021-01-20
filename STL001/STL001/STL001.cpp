#include "stdafx.h"

class Point
{
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	// 예제1.2 연산자 오버로딩
	Point operator+(const Point& arg) 
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;
		// this = 앞에 더해지는 객체
		// arg = 뒤에 더할 객체

		return pt;
	}
	
	void Print() const // 출력 함수
	{
		cout << "x값 : " << x << endl;
		cout << "y값 : " << y << endl;
	}
};

//// 예제 1.1
//int main()
//{
//	int n1 = 10, n2 = 20;
//	cout << n1 + n2 << endl;
//	return 0;
//}

// 예제 1.2
int main()
{
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 + p2;
	// 컴파일러가 p1.operator+(p2)로 해석해서 출력
	p3.Print();

	p3 = p1.operator+(p2);
	p3.Print();
	// 결과는 동일함

	return 0;
}