// Copyright 2020 <Jiiijyyy>
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>

template <class Type>
class  MyStack {
private:
    int num_of_el = 0;
    int size;
    Type* stack;

public:
    explicit MyStack(int size) {
        this->size = size;
        stack = new Type[this->size];
    }
    MyStack(const MyStack& stack_prev) {
        this->size = stack_prev.size;
        this->nun_of_el = stack_prev.num_of_el;
        this->stack = new Type[size];
        int i = 0;
        while (i < size) {
            stack[i] = stack_prev.stack[i];
            i++;
        }
    }
    ~MyStack() {
        delete[] stack;
        size = 0;
        num_of_el = 0;
    }

    Type get() const;
    Type pop();
    Type push();
    Type isFull() const;
    Type isEmpty() const;
};

#endif  // INCLUDE_MYSTRING_H_