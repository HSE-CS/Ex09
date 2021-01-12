// Copyright 2021 Krissupervizz
#ifndef MYSTACK_H
#define MYSTACK_H
#define CRT_SECURE_NO_WARNINGS
#include <iostream>
template<class T>
class MyStack {
 private:
     long long size;
     long long max_size;
     T* stack;
 public:
     MyStack(int i) {//конструктор с одним параметром.
         this->size = 0;
         this->max_size = i;
         this->stack = new T[i];
     };
     MyStack(const MyStack& MyStack) {                  //конструктор копирования.
         this->max_size = MyStack.max_size;
         this->size = MyStack.size;
         this->stack = MyStack.stack;
     }
     ~MyStack() { //деструктор.
         delete[] this->stack;
     }	 	
     T get() const { //возвращение элемента на вершине стека(без изменения состояния последнего).
         if (!isEmpty()) {
             return this->stack[size-1];
         }
     };
     T pop() { //выталкивание элемента из стека.
         if (!isEmpty()) {
             this->size--;
             return this->stack[size];
         }
     }
     T push(T element) {                           //добавление элемента в стек.
         if (!isFull()) {
             this->stack[size] = element;
             this->size++;
             return element;
         }
         else return -1;
     }
     bool isFull() const { //проверка заполненности стека.
         if (this->size == this->max_size) return true;
         else return false;
     }
     bool isEmpty() const { //проверка пустоты стека.
         if (this->size == 0) return true;
         else return false;
     }
};


#endif MYSTACK_H