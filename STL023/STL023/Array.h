#pragma once
#include "stdafx.h"

class Array
{
    int* buf;
    int size;       //원소의 개수
    int capacity;   //저장 가능한 메모리
public:
    explicit Array(int cap = 100) :buf(0), size(0), capacity(cap)
    {
        buf = new int[capacity];
    }//암시적 형변환을 막기위한 explicit 선언 생성자
    ~Array()
    {
        delete[] buf;
    }// 소멸자
    int operator[](int index) const;//연산자 [] 오버로딩

    void Add(int data); //원소를 추가하는 함수
    int Getsize() const; //배열의 크기를 리턴할 함수
};

//클래스 템플릿 T_Array 정의
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

    T operator[] (int index) const //연산자[] 오버로딩
    {
        return buf[index];
    }

    void Add(T data) //원소를 추가하는 함수
    {
        buf[size++] = data;
    }

    int Getsize() const //크기를 리턴하는 함수
    {
        return size;
    }
};

// 디폴트 값을 명시한 경우
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