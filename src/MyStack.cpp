#include "MyStack.h"
#include<iostream>

template <typename T>
MyStack<T>::MyStack(int s)
{
    size = s > 0 ? s: 10;
    stackPtr = new T[size];
    top = -1;
}

template <typename T>
MyStack<T>::~MyStack()
{
    delete [] stackPtr;
}

template <typename T>
bool MyStack<T>::isFull()
{
    if (top == size - 1)
      return true;
    return false;
}

template <typename T>
bool MyStack<T>::isEmpty()
{
    if (top == -1)
      return true;
    return false;
}

template <typename T>
T MyStack<T>::get()
{
    if (top == - 1)
      return NULL;
    return stackPtr[top];
}


template <typename T>
bool MyStack<T>::push(const T value)
{
    if (top == size - 1)
        return false;

    top++;
    stackPtr[top] = value;

    return true;
}

template <typename T>
bool MyStack<T>::pop()
{
    if (top == - 1)
        return false;

    stackPtr[top] = 0;
    top--;

    return true;
}
