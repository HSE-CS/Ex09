// Copyright 2020 GHA Test Team
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>
#include <string>


template <typename T>
class MyStack {
 private:
  size_t max_size;
  size_t cur_size;
  T* stack;
 public:
  MyStack() {
    max_size = 0;
    cur_size = 0;
    stack = nullptr;
  }

  explicit MyStack(size_t size) {
    max_size = size;
    cur_size = 0;
    stack = new T[size];
  }

  MyStack(MyStack* other_stack) {
    max_size = other_stack->max_size;
    cur_size = other_stack->cur_size;
    stack = new T[max_size];
    for (size_t i = 0; i < cur_size; i++) {
      stack[i] = other_stack->stack[i];
    }
  }

  ~MyStack() {
    delete[] stack;
  }

  T get() const {
    if (!isEmpty())
      return stack[cur_size - 1];
    else
      return NULL;
  }

  bool isEmpty() const {
    return !bool(cur_size);
  }

  bool isFull() const {
    return cur_size == max_size;
  }

  T pop() {
    if (!isEmpty())
      return stack[--cur_size];
    else
      return NULL;
  }

  void push(T element) {
    stack[cur_size++] = element;
  }
};
#endif  // INCLUDE_MYSTACK_H_
