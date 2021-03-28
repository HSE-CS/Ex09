// Copyright 2021 by Roman Burtsev

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack{
 private:
    unsigned int t_size;
    int top;
    T* values;

 public:
    explicit MyStack(unsigned int t_size) {
        values = new T[t_size];
        top = -1;
        this->t_size = t_size;
    }
    MyStack(const MyStack& MyStack) {
        this->values = MyStack.values;
        this->top = MyStack.top;
        this->t_size = MyStack.t_size;
    }
    ~MyStack() {
        delete[] values;
    }
    T get() const {
        if (isEmpty())
            throw "Stack is empty";
        else
            return values[top];
    }
    T pop() {
        if (isEmpty())
            throw "Stack is empty";
        else
            return values[--top];
    }
    void push(T value) {
        if (isFull()) {
            throw "Stack overflow";
        } else {
            top++;
            values[top] = value;
        }
    }
    bool isFull() const {
        if (top == t_size)
            return true;
        else
            return false;
    }
    bool isEmpty() const {
        if (top == -1)
            return true;
        else
            return false;
    }
};
#endif  // INCLUDE_MYSTACK_H_
