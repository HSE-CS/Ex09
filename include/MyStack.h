// Copyright 2021 Nikolaev Ivan

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <iostream>

template <class T>
class MyStack {
   public:
      explicit MyStack(int size) {
          stack = new T[size];
          this->size = size;
      }

      MyStack(const MyStack &stackToCopy) {
          this->count = stackToCopy.count;
          this->size = stackToCopy.size;
          this->stack = new T[stackToCopy.size];
          for (int i = 0; i < stackToCopy.count; i++) {
              this->stack[i] = stackToCopy.stack[i];
          }
      }

      T get() const {
          if (isEmpty()) {
              throw "Stack is empty";
          }
          int index = this->count - 1;
          return stack[index];
      }
      T pop() {
          if (isEmpty()) {
              throw "Stack is empty";
          }
          count -= 1;
          return stack[count];
      }
      void push(T el) {
          if (isFull()) {
              throw "Stack is full";
          }
          stack[count] = el;
          count += 1;
      }
      bool isFull() const {
          return (count == size);
      }
      bool isEmpty() const {
          return (count == 0);
      }

   private:
      T* stack;
      int count = 0;
      int size = 0;
};

#endif // INCLUDE_MYSTACK_H_
