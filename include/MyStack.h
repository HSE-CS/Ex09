//  Copyright © 2021 Ksuvot. All rights reserved.

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>

template <typename T>
class MyStack {
 private:
  T* ptr;
  int size;
  int index;

 public:
  MyStack() {
    this->size = 0;
    this->index = -1;
    this->ptr = nullptr;
  }

  explicit MyStack(int size) : index(-1) {
    this->size = size;
    this->ptr = new T[size];
  }

  MyStack(const MyStack& my_stack) {
    this->index = my_stack.index;
    this->size = my_stack.size;
    this->ptr = new T[my_stack.size];
    for (unsigned i = 0; i < my_stack.size; i++)
      this->ptr[i] = my_stack.ptr[i];
  }

  ~MyStack() {
    if (this->size > 0) {
      delete[] ptr;
      this->size = 0;
      this->index = -1;
    }
  }

  T get()const {
    if (!this->isEmpty())
      return this->ptr[this->index];
    else
      throw "ERROR";
  }

  T pop() {
    if (this->isEmpty())
      throw "ERROR";
    T temp = this->ptr[this->size];
    --this->index;
    return temp;
  }

  void push(const T key) {
    if (this->isEmpty())
      throw "ERROR";
    else
      this->ptr[++this->index] = key;
  }

  bool isFull() const {
    return this->index == this->size - 1;
  }

  bool isEmpty() const {
    return this->index == -1;
  }
};

#endif  // INCLUDE_MYSTACK_H_
