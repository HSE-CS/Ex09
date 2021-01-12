//  Copyright 2021 AndreyBakurskii
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>

template <class T>
class MyStack {
 private:
  int head;
  int capacity;
  T* stack;

 public:
  explicit MyStack(int cap) {
    this->head = 0;
    this->capacity = cap;
    this->stack = new T[cap];
  }

  MyStack(const MyStack& Stack) {
    this->head = Stack.head;
    this->capacity = Stack.capacity;
    this->stack = new T[Stack.capacity];

    for (int i = 0; i < this->capacity; i++) {
      this->stack[i] = Stack.stack[i];
    }
  }

  ~MyStack() {
    delete[] stack;
    head = 0;
    capacity = 0;
  }

  T get() const {
    if (!isEmpty()) {
      return stack[head - 1];
    }
    std::cout << "Error! Stack is empty!\n";
    return 0;
  }

  T pop() {
    if (!isEmpty()) {
      T value = stack[head - 1];
      head--;
      return value;
    }
    std::cout << "Error! Stack is empty!\n";
    return 0;
  }
  void push(T new_elem) {
    if (!isFull()) {
      stack[head] = new_elem;
      head++;
    } else {
      std::cout << "Error! Stack is full!\n";
    }
  }
  bool isFull() const { return (head == capacity); }
  bool isEmpty() const { return (head == 0); }
};

#endif  // INCLUDE_MYSTACK_H_
