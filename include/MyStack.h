// Copyright 2021 Vadukk
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <string.h>

template <typename T>
class MyStack {
  T* ar;
  int capacity;
  int top;

 public:
  explicit MyStack(int capacity) : capacity(capacity), top(-1) {
    ar = new T[capacity];
  }

  MyStack(const MyStack& other) {
    ar = new T[other.capacity];
    memcpy(ar, other.ar, sizeof(T) * capacity);
    top = other.top;
  }

  ~MyStack() {
    delete[] ar;
  }

  void push(T val) {
    top++;
    ar[top] = val;
  }

  T pop() {
    T res = ar[top];
    top--;
    return res;
  }

  bool isFull() const {
    return top >= capacity - 1;
  }

  bool isEmpty() const {
    return top <= -1;
  }

  T get() const {
    return ar[top];
  }
}

#endif  // INCLUDE_MYSTACK_H_
