// Copyright 2021 Matveev Andrew da-da-ya
#pragma once
#ifndef MYSTACK_H_
#define MYSTACK_H_
#include <iostream>

template <class T>
class MyStack {
 private:
    size_t maxSize;
    size_t sizeNow;
    T* value;

 public:
    explicit MyStack(std::size_t count) {
        maxSize = count;
        sizeNow = 0;
        value = new T[maxSize+1];
    }

    explicit MyStack(const MyStack& copied) {
        this->sizeNow = copied.sizeNow;
        this->maxSize = copied.maxSize;
        this->value = new T[this->maxSize];
        for (size_t i = 0; i < this->maxSize; i++) {
            this->value[i] = copied.value[i];
        }
    }
    void push(T value) {
        if (isFull())
            return;
        this->value[sizeNow] = value;
        sizeNow++;
    }
    T pop() {
        if (!(isEmpty())) {
            sizeNow--;
            return value[sizeNow];
        }
    }
    bool isEmpty() {
        return sizeNow == 0;
    }
    bool isFull() {
        return sizeNow == maxSize;
    }
    ~MyStack() {
        delete[] value;
    }
};
#endif  //  !MYSTACK_H
