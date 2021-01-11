// Copyright 2021 Stolbov Yaroslav

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack{
 private:
    unsigned int size;
    int top;
    T* data;

 public:
    explicit MyStack(unsigned int size) {
        data = new T[size];
        top = -1;
        this->size = size;
    }
    MyStack(const MyStack &myStack) {
        this->data = myStack.data;
        this->top = myStack.top;
        this->size = myStack.size;
    }
    ~MyStack() {
        delete[] data;
    }
    T get() const {
        if (isEmpty())
            throw "Stack is empty!";
        else
            return data[top];
    }
    T pop() {
        if (isEmpty()) {
            throw "Stack is empty!";
        } else {
            return data[--top];
        }
    }
    void push(T info) {
        if (isFull()) {
            throw "Stack overflow!";
        } else {
            top++;
            data[top] = info;
        }
    }
    bool isEmpty() const {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull() const {
        if (top == size)
            return true;
        else
            return false;
    }
};
#endif  // INCLUDE_MYSTACK_H_
