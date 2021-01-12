// Copyright 2021 Egor Trukhin
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <cstdlib>

template <typename T>
class MyStack {
 private:
  T* stack;
  uint32_t size;
  uint32_t count;

 public:
  explicit MyStack(uint32_t size = 1) {
    this->size = size;
    this->count = 0;
    this->stack = new T[size];
  }
  MyStack(const MyStack& orig) {
    this->size = orig.size;
    this->count = orig.count;
    this->stack = new T[this->size];
    memcpy(this->stack, orig.stack, (size_t)(orig.size * sizeof(T)));
  }
  ~MyStack() { delete[] this->stack; }

  bool isEmpty() const { return this->count == 0; }
  bool isFull() const { return this->count == this->size; }

  void push(T el) {
    if (this->isFull()) {
      this->size *= 2;
      this->stack = (T*)realloc(this->stack, (size_t)(this->size * sizeof(T)));
    }
    this->stack[this->count++] = el;
  }

  T pop() {
    if (!this->isEmpty()) return this->stack[--this->count];
  }

  T get() const {
    if (!this->isEmpty()) return this->stack[this->count - 1];
  }

  // For testing
  uint32_t getSize() { return this->size; }
  uint32_t getCount() { return this->count; }
};

#endif  // INCLUDE_MYSTACK_H_
