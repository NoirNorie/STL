#include "stdafx.h"
#include "Array.h"

void Array::Add(int data)
{
    buf[size++] = data;
}//���Ҹ� �߰��ϴ� �Լ�

int Array::operator[](int index) const
{
    return buf[index];
}//������ [] �����ε�

int Array::Getsize() const
{
    return size;
}//ũ�⸦ ��ȯ�ϴ� �Լ�


//Ŭ���� ���ø� ��� �Լ�
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