// Copyright dash 2021
#include <iostream>
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_


template <class T>
class MyStack {
 private:
    int size, top;
    T* stack;

 public:
    explicit MyStack(int nsize) {
        size = nsize;
        stack = new T[size];
        top = 0;
    }

    MyStack(const MyStack& copied) {
        size = copied.size;
        stack = new T[size];
        top = copied.top;
        for (int i = 0; i < size; ++i) {
            stack[i] = copied.stack[i];
        }

    }

    ~MyStack()
    {
        delete[] stack;
    }

    T get() const {
        if (top <= 0) {
            return 0;
        }
        else {
            return stack[top - 1];
        }
    }

    T pop() {
        if (top <= 0) {
            return 0;
        }
        else {
            top--;
            return stack[top];
        }
    }

    void push(T assert) {
        if (top < size) {
            stack[top] = assert;
            ++top;
        }
    }

    bool isFull() const {
        if (top == size) {
            return true;
        }
        return false;
    }
   

        bool isEmpty() const {
            if (top == 0){
                return true;
        }
            return false;
    }

};

#endif // INCLUDE_MYSTACK_H_