#include "stdafx.h"
#include "Array.h"

void Array::Add(int data)
{
    buf[size++] = data;
}//원소를 추가하는 함수

int Array::operator[](int index) const
{
    return buf[index];
}//연산자 [] 오버로딩

int Array::Getsize() const
{
    return size;
}//크기를 반환하는 함수


//클래스 템플릿 멤버 함수
//template<typename T>
//T T_Array<T>::operator[] (int index) const
//{
//    return buf[index];
//}
//
//template<typename T>
//void T_Array<T>::Add(T data)
//{
//    buf[size++] = data;
//}
//
//template<typename T>
//int T_Array<T>::Getsize() const
//{
//    return size;
//}