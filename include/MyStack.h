// Copyright 2021 by Dolgopolov Alexey

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack{
private:
    unsigned int size;
    int head;
    T* values;
public:
    explicit MyStack(unsigned int size) {
        values = new T[size];
        head = -1;
        this->size = size;
    }
    MyStack(const MyStack& MyStack) {
        this->values = MyStack.values;
        this->head = MyStack.head;
        this->size = MyStack.size;
    }
    ~MyStack() {
        delete[] values;
    }
    T get() const {
        if (isEmpty())
            throw "Stack is empty";
        else
            return values[head];
    }
    T pop() {
        if (isEmpty())
            throw "Stack is empty";
        else
            return values[--head];
    }
    void push(T value) {
        if (isFull()) {
            throw "Stack overflow";
        }
        else {
            head++;
            values[head] = value;
        }
    }
    bool isFull() const {
        if (head == size)
            return true;
        else
            return false;
    }
    bool isEmpty() const {
        if (head == -1)
            return true;
        else
            return false;
    }
};
#endif  // INCLUDE_MYSTACK_H_
