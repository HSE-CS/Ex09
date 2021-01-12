//  Copyright 2021 Dmitry Vargin
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include "iostream"

template <class T>
class MyStack{
 private:
     int max_length;
     int length = 0;
     T *arr;

 public:
     explicit MyStack(int max_length) {
         this->max_length = max_length;
         this->arr = new T[max_length];
     }

     MyStack(const MyStack<T> &stack) {
          this->max_length = stack.max_length;
          this->length = stack.length;
         this->arr = new T[stack.max_length];
         for (int i = 0; i < stack.max_length; ++i) {
             this->arr[i] = stack.arr[i];
         }
     }

     ~MyStack() {
         delete[] this->arr;
     }

     T get() const {
         return this->arr[this->length-1];
     }

     T pop() {
         return this->arr[--this->length];
     }

     void push(T element) {
         this->arr[length++] = element;
     }

     bool isFull() const {
         return this->length == this->max_length;
     }

     bool isEmpty() const {
         return this->length == 0;
     }

     void printStack() const {
         std::cout << "Stack:" << std::endl;
         for (int i = 0; i < this->length; ++i) {
             std::cout << this->arr[i] << ' ';
         }
         std::cout << "\n\n";
     }
};

#endif  // INCLUDE_MYSTACK_H_
