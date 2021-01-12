// Copyright 2021 Stifeev Nikita
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>
#include <cstdlib>

template <typename T>
class MyStack {
    T* values;
    size_t size;
    size_t top;
 public:
    explicit MyStack(size_t size);
    MyStack(const MyStack& stack);
    T get() const;
    void pop();
    void push(const T& value);
    bool isFull() const;
    bool isEmpty() const;
    ~MyStack();
};

template <typename T>
MyStack<T>::MyStack(size_t size) {
    this->size = size;
    this->top = 0;
    this->values = new T[size];
}

template <typename T>
MyStack<T>::MyStack(const MyStack& stack) {
    size = stack.size;
    top = stack.top;
    values = new T[size];
    for (size_t i = 0; i < top; i++)
        values[i] = stack.values[i];
}

template <typename T>
T MyStack<T>::get() const {
    if (isEmpty())
        throw std::runtime_error("stack is empty");
    return values[top - 1];
}

template <typename T>
void MyStack<T>::pop() {
    if (isEmpty())
        throw std::runtime_error("stack is empty");
    top--;
}

template <typename T>
void MyStack<T>::push(const T& value) {
    if (isFull())
        throw std::runtime_error("stack is full");
    values[top++] = value;
}

template <typename T>
bool MyStack<T>::isFull() const {
    return top == size;
}

template <typename T>
bool MyStack<T>::isEmpty() const {
    return top == 0;
}

template <typename T>
MyStack<T>::~MyStack() {
    delete[] values;
}

#endif  // INCLUDE_MYSTACK_H_
