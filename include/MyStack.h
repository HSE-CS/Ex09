//  Copyright 2020 GHA created by Klykov Anton

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>
#include <typeinfo>

template<typename T>
class MyStack {
 private:
    T* stack;
    size_t length{0};
    bool isChar{false};

 public:
    ~MyStack() {
        delete[] stack;
        stack = nullptr;
    }
    explicit MyStack(T _value) {
        if (typeid(_value).name() == typeid(char).name()) {
            isChar = true;
            length++;
            stack = new T[length + 1];
            stack[length - 1] = _value;
            stack[length] = '\0';
        } else {
            isChar = false;
            length++;
            stack = new T[length];
            stack[length - 1] = _value;
        }
    }
    MyStack(const MyStack& Stack) {
        length = Stack.length;
        if (isChar) {
            stack = new T[length + 1];
            for (size_t i = 0; i <= length; ++i) {
                stack[i] = Stack.stack[i];
            }
        } else {
            stack = new T[length];
            for (size_t i = 0; i < length; ++i) {
                stack[i] = Stack.stack[i];
            }
        }
    }
    T get() const {
        if (length != 0) {
            return stack[length - 1];
        }
    }
    T pop() {
        if (isChar) {
            T last = stack[length - 1];
            length--;
            T* _tempStack = new T[length + 1];
            if (length == 0) {
                stack[length] = '\0';
            }
            for (int i = 0; i < length; ++i) {
                _tempStack[i] = stack[i];
            }
            _tempStack[length] = '\0';
            delete[] stack;
            stack = _tempStack;
            _tempStack = nullptr;
            return last;
        } else {
            T last = stack[length - 1];
            length--;
            T* _tempStack = new T[length];
            for (int i = 0; i < length; ++i) {
                _tempStack[i] = stack[i];
            }
            delete[] stack;
            stack = _tempStack;
            _tempStack = nullptr;
            return last;
        }
    }
    void push(T _value) {
        if (isChar) {
            length++;
            T* _tempStack = new T[length + 1];
            for (int i = 0; i < length - 1; ++i) {
                _tempStack[i] = stack[i];
            }
            _tempStack[length - 1] = _value;
            _tempStack[length] = '\0';
            delete[] stack;
            stack = _tempStack;
            _tempStack = nullptr;
        } else {
            length++;
            T* _tempStack = new T[length];
            for (int i = 0; i < length - 1; ++i) {
                _tempStack[i] = stack[i];
            }
            _tempStack[length - 1] = _value;
            delete[] stack;
            stack = _tempStack;
            _tempStack = nullptr;
        }
    }
    [[nodiscard]] size_t isFull() const {
        return length;
    }
    [[nodiscard]] bool isEmpty() const {
        if (length == 0) {
            return true;
        } else {
            return false;
        }
    }
};

#endif  //  INCLUDE_MYSTACK_H_
