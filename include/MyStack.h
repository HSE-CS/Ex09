// Copyright by Roman Burtsev 19SE-1

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack{
 private:
    unsigned int lenght;
    int top;
    T* values;

 public:
    explicit MyStack(unsigned int length) {
        values = new T[length];
        top = -1;
        this->length = length;
    }
    MyStack(const MyStack& MyStack) { 

        this->values = MyStack.values;
        this->top = MyStack.top;
        this->length = MyStack.length;
    }
    ~MyStack() {
        delete[] values;
    }
    T get() const {
        if (isEmpty()){
            throw "Stack is empty";
        }
        else{
            return values[top];
        }
    }
    T pop() {
        if (isEmpty()){
            throw "Stack is empty";
        }
        else{
            return values[--top];
        }
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
        if (top == length)
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
#endif