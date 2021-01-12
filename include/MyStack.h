  // Copyright DB 2021

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <iostream>

template <class T>
class MyStack {
 private:
     unsigned int length;
     unsigned int position;
     T* stack;

 public:
     MyStack() {
         length = 0;
         position = 0;
         stack = nullptr;
     }
     explicit MyStack(unsigned int size) {
         stack = new T[size];
         length = size;
     }
     MyStack(const MyStack& my_st) {
         length = my_st.length;
         position = my_st.position;
         stack = new T[length];
         for (int i = 0; i < length; ++i) {
             stack[i] = my_st.stack[i];
         }
     }
     bool isFull() {
         if (position == length) {
             return true;
         } else {
             return false;
         }
     }
     bool isEmpty() {
         if (position == 0) {
             return true;
         } else {
             return false;
         }
     }
     ~MyStack() {
         delete[] stack;
     }
     T& get() {
         int position_ = position - 1;
         return stack[position_];
     }
     int getSize() {
         return length;
     }
     T& pop() {
         position -= 1;
         return stack[position];
     }
     void push(double x) {
         if (position < length) {
             stack[position] = x;
             position++;
         }
     }
};
#endif  // INCLUDE_MYSTACK_H_
