// STL023.cpp : 클래스 템플릿

#include "stdafx.h" //미리 컴파일된 헤더
#include "Array.h"  //커스텀 배열 클래스 헤더

int main()
{
    Array arr;
    
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);

    for (int i = 0; i < arr.Getsize(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl << endl;

    cout << "클래스 템플릿 사용" << endl;

    T_Array<int> iarr;
    iarr.Add(10);
    iarr.Add(20);
    iarr.Add(30);

    for (int i = 0; i < iarr.Getsize(); i++)
    {
        cout << iarr[i] << " ";
    }
    cout << endl << endl;

    T_Array<double> darr;
    darr.Add(10.11);
    darr.Add(20.22);
    darr.Add(30.33);

    for (int i = 0; i < darr.Getsize(); i++)
    {
        cout << darr[i] << " ";
    }
    cout << endl << endl;

    T_Array<string> sarr;
    sarr.Add("abc");
    sarr.Add("ABC");
    sarr.Add("Hello");

    for (int i = 0; i < sarr.Getsize(); i++)
    {
        cout << sarr[i] << " ";
    }
    cout << endl << endl;

    cout << "클래스 템플릿의 디폴트 매개변수 사용" << endl;

    TD_Array<> TDarr; //지정한 값이 없으므로 디폴트 값이 적용된다. (int, 100)
    TDarr.Add(10);
    TDarr.Add(20);
    TDarr.Add(30);

    for (int i = 0; i < TDarr.Getsize(); i++)
    {
        cout << TDarr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
