// Copyright 2021 Sozinov Kirill
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template <typename T> class MyStack {
 private:
     T *data;
     unsigned int size;
     unsigned int top_index;

 public:
     MyStack() {
         this->data = nullptr;
         this->size = 0;
         this->top_index = -1;
     }
     explicit MyStack(unsigned int value) {
         this->size = value;
         this->data = new T[size];
         this->top_index = -1;
     }
     MyStack(MyStack &st) {
         this->size = st.size;
         this->data = st.data;
         this->top_index = size - 1;
     }
     ~MyStack() {
         delete[] data;
     }
     void push(T value) {
         ++top_index;
         if (top_index < this->size)
             data[top_index] = value;
         else
             throw "Index is out of bounds!";
     }
     T& pop() {
         --top_index;
         if (top_index >= 0)
             return data[top_index];
         else
             throw "Stack has already empty!";
     }
     T get() const {
         if (top_index)
             return data[top_index];
         return 0;
     }
     bool isFull() const {
         return top_index == this->size + 1;
     }
     bool isEmpty() const {
         return !(top_index + 1);
     }
};
#endif  // INCLUDE_MYSTACK_H_
