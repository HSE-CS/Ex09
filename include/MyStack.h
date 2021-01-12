// Copyright 2020 Daria Pavlova

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template <typename  T>
class MyStack {
 private:
  T *stack;
  unsigned int capacity;
  unsigned int top;

 public:
  explicit MyStack(unsigned int new_capacity) :
                                                top(-1),
                                                capacity(new_capacity),
                                                stack(new T[new_capacity]) {}

  MyStack(const MyStack& old_stack) {
      this->capacity = old_stack.capacity;
      this->top = old_stack.top;
      this->stack = new T[old_stack.capacity];
      for (unsigned int i = 0; i < this->capacity; i++)
        this->stack[i] = old_stack.stack[i];
  }

  ~MyStack() {
      if (this->capacity > 0) {
      delete[] stack;
      this->capacity = 0;
      this->top = -1;
    }
  }

  T get() const {
    if (!this->isEmpty())
      return this->stack[this->top];
    else
      throw "Stack is empty";
  }

  T pop() {
    if (this->isEmpty())
      throw "Stack is empty";

    T tmp = this->stack[this->top];
    this->top--;

    return tmp;
  }

  void push(T elem) {
    if (this->isFull())
      throw "Stack is full";

    this->top++;
    this->stack[this->top] = elem;
  }

  bool isFull() const {
    return this->top == this->capacity - 1;
  }

  bool isEmpty() const {
    return this->top == -1;
  }
};

#endif  // INCLUDE_MYSTACK_H_
