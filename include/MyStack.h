// Copyright 2020 GN
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>
#include <string.h>
template <class T>
class MyStack {
private:
    T* stack;
    long long size;
    long long position = 0;
public:
    explicit MyStack(long long size_) {
        size = size_;
        stack = new T[size];
    };
    MyStack(const MyStack& st) {
        size = st.size;
        stack = new T[size];
        memcpy(stack, st.stack, size);
        position = st.position;
    };
    ~MyStack() {
        delete[] stack;
	};
    T& get() {
        long long position_ = position - 1;
        return stack[position_];
    };
    long long getSize() {
        return size;
    };
    T& pop() {
        position--;
        return stack[position];
    };
    void push(double x) {
        if (position < size) {
            stack[position] = x;
            position++;
        }
        else if (position == size) {}
    }
    bool isFull() {
        if (position == size) {
           return true;
        }
        return false;
    };
    bool isEmpty() {
        if (position == 0) {
           return true;
        };
        return false;
    };
};
#endif // INCLUDE_MYSTACK_H_
