// Copyright 2021 Grachev Alexander
//
// Created by Grachev Alexander on 12.01.2021.
//

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>

template <class T>
class MyStack{
 private:
    T* stack;
    int size;
    int top;

 public:
    explicit MyStack(int rSize) {
        size = rSize;
        top = -1;
        stack = new T[size];
    }

    explicit MyStack(const MyStack& rStack) {
        size = rStack.size;
        top = rStack.top;
        stack = new T[rStack.size];
        for (int i = 0; i < rStack.size; i++)
            stack[i] = rStack.stack[i];
    }

    ~MyStack() { delete[] stack; }

    bool isFull() const { return (top == size); }

    bool isEmpty() const { return (top == -1); }

    T get() {
        if (!isEmpty()) { return stack[top]; }
    }

    T pop() {
        if (!isEmpty()) {
            this->top--;
            return stack[top];
        }
    }

    T push(T val) {
        if (!isFull()) {
            this->top++;
            stack[top] = val;
        }
    }
};

#endif  // INCLUDE_MYSTACK_H_
