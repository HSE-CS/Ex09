// Copyright 2021 Smirnov Grigory
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include<iostream>

template <class T>
class MyStack {
 private:
   int index = -1;
   int capacity;
   T* stack;
 public:
   explicit MyStack(int size) {
     if (size <= 0)
       throw "Incorrect size";
     else {
       stack = new T[size];
       capacity = size;
     }
   }
   ~MyStack() {
     delete []stack;
   }
   MyStack(const MyStack& for_copy) {
     stack = new T[for_copy.capacity];
     capacity = for_copy.capacity;
     index = for_copy.index;
     if (!for_copy.isEmpty())
       for (int i = 0; i < index + 1; i++)
         stack[i] = for_copy.stack[i];
   }
   bool isEmpty() const {
     return index == -1;
   }
   bool isFull() const {
     return index == capacity - 1;
   }
   T get() const {
     if (!isEmpty())
       return stack[index];
     else
       throw "Stack is empty";
   }
   void push(T element) {
     if (!isFull()) {
       index++;
       stack[index] = element;
     }
     else
       throw "Stack is full";
   }
   T pop() {
     if (!isEmpty()) {
       index--;
       return stack[index + 1];
     }
     else
       throw "Stack is empty";
   }
};
#endif  // INCLUDE_MYSTACK_H_
