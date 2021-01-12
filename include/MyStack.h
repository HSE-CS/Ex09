// Copyright 2020 Dev-will-work
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>
template <typename T>
class MyStack {
 public:
  explicit MyStack(int size) {
    try {
     if (size <= 0) throw 0;
     max_size = size;
      container = new T[size]{0};
    } catch (int low) {
      std::cerr << "Wrong size for stack\n";
      exit(1);
    } catch (...) {
      std::cerr << "Not enough memory for stack\n";
      exit(2);
    }
  }

  MyStack(const MyStack& that) {
    T* temp;
    if (this->container == nullptr) this->container = new T[that.max_size]{0};
    if (this->max_size == 0) this->max_size = that.max_size;
    if (that.top != nullptr) {
      temp = that.top;
      while (temp != nullptr) {
        this->top = temp;
        if (temp = that.container) temp = nullptr;
        else
          temp--;
      }
    }
  }  // copy

  ~MyStack() { delete[] container; }

  T get() const {
    try {
      if (top == nullptr) throw 0;
    } catch (int ex) { std::cerr << "can't get value from the empty stack\n";
      return 0;
      }
    return *top;
  }

  T pop() {
    try {
     if (top == nullptr) throw 0;
    } catch (int ex) { std::cerr << "can't pop from the empty stack\n";
    return 0;
    }
    T temp = *top;
    *top = 0;
    if (top == container) top = nullptr;
    else
      top--;
    return temp;
  }

  void push(T value) {
  if (top == nullptr) top = &container[0];
  else
    ++top;
  *top = value;
  }

  bool isFull () const {return top == container + max_size - 1;}

  bool isEmpty() const {return top == nullptr;}

 private:
  int max_size = 0;
  T* top = nullptr;
  T* container = nullptr;
};
#endif  // INCLUDE_MYSTACK_H_
