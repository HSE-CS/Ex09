// Copyright 2021 Shabarshin Leonid
#include <iostream>
#include <new>
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_


template<class T>
class MyStack {
public:
    explicit MyStack(int _size) {
        size = _size;
        store = new T[size];
    }
    MyStack(const MyStack& copy) {
        size = copy.size;
        store = new T[size];
        for (int i = 0; i < size; i++) {
            store[i] = copy.store[i];
        }
        top = copy.top;
    }
    ~MyStack() {
        delete[] store;
    }

    T get() const {
        return store[top - 1];
    }
    T pop() {
        if (top == 0) {
            return 0;
        }
        else {
            top--;
            return store[top];
        }
    }
    void push(T value) {
        if (top < size) {
            store[top] = value;
            top++;
        }
    }
    bool isFull() const {
        if (top == size)
            return true;
        else
            return false;
    }

    bool isEmpty() const {
        if (top == 0)
            return true;
        else
            return false;
    }

private:
    int size;
    int top;
    T* store;
};

#endif  // INCLUDE_MYSTACK_H_
