// STL034.cpp : STL 시작 6

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack<int, vector<int>> st;

    //push : 데이터를 추가 입력
    st.push(10);
    st.push(20);
    st.push(30);

    //top : 스택의 맨 위에 있는 값을 리턴
    cout << st.top() << endl;
    //pop : 스택의 맨 위에 있는 값을 제거
    st.pop();

    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();

    //empty : 스택이 비었는지 확인
    if (st.empty())
    {
        cout << "empty" << endl;
    }

    return 0;
}