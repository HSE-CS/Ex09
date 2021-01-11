// Copyright 2020 Bogomazov
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template< type Typ>
class MyStack {
 private:
    int stackSize;
    Typ* stackArray;
 public:
    explicit MyStack(int size);
    MyStack(const MyStack &stack);
    ~MyStack();
    void push(Typ el);
    Typ pop();
    Typ get();
    bool isFull();
    bool isEmpty();
}
#endif INCLUDE_MYSTACK_H_