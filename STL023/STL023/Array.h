#pragma once
#include "stdafx.h"

class Array
{
    int* buf;
    int size;       //������ ����
    int capacity;   //���� ������ �޸�
public:
    explicit Array(int cap = 100) :buf(0), size(0), capacity(cap)
    {
        buf = new int[capacity];
    }//�Ͻ��� ����ȯ�� �������� explicit ���� ������
    ~Array()
    {
        delete[] buf;
    }// �Ҹ���
    int operator[](int index) const;//������ [] �����ε�

    void Add(int data); //���Ҹ� �߰��ϴ� �Լ�
    int Getsize() const; //�迭�� ũ�⸦ ������ �Լ�
};

//Ŭ���� ���ø� T_Array ����
template<typename T>
class T_Array
{
    T* buf;
    int size;
    int capacity;
public:
    explicit T_Array(int cap = 100) :buf(0), size(0), capacity(cap)
    {
        buf = new T[capacity];
    }
    ~T_Array()
    {
        delete[] buf;
    }

    T operator[] (int index) const //������[] �����ε�
    {
        return buf[index];
    }

    void Add(T data) //���Ҹ� �߰��ϴ� �Լ�
    {
        buf[size++] = data;
    }

    int Getsize() const //ũ�⸦ �����ϴ� �Լ�
    {
        return size;
    }
};

// ����Ʈ ���� ����� ���
template<typename T = int, int capT = 100> 
class TD_Array
{
    T* buf;
    int size;
    int capacity;
public:
    explicit TD_Array(int cap = capT) : buf(0), size(0), capacity(cap)
    {
        buf = new T[capacity];
    }
    ~TD_Array()
    {
        delete[] buf;
    }
    T operator[](int index) const
    {
        return buf[index];
    }
    void Add(T data)
    {
        buf[size++] = data;
    }
    int Getsize() const
    {
        return size;
    }
};