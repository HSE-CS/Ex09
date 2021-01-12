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

    Type get() const {
        return stack[num_of_el - 1];
    }

    Type pop() {
        Type temp = stack[num_of_el - 1];
        Type* update_stack = new Type[num_of_el - 1];
        for (int i = 0; i < num_of_el - 1; i++)
            update_stack[i] = stack[i];
        delete[] stack;
        num_of_el--;
        stack = update_stack;
        return temp;
    }

    void push(Type element) {
        stack[num_of_el] = element;
        num_of_el++;
    }

    bool isFull() const {
        return num_of_el == size;
    }
    bool isEmpty() const {
        return num_of_el == 0;
    }
};

#endif  // INCLUDE_MYSTRING_H_