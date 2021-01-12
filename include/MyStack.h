// Copyright by JGMax 2021

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template <typename T>
class MyStack {
 private:
    T* stack;
    unsigned int size;
    unsigned int fullness;

 public:
    explicit MyStack(unsigned int size) {
        this->fullness = 0;
        this->size = size;
        this->stack = new T[size];
    }

    MyStack(MyStack& obj) {
        fullness = obj.fullness;
        size = obj.size;
        stack = new T[size];
        for (int i = 0; i < fullness; i++) {
            stack[i] = obj.stack[i];
        }
    }

    ~MyStack() {
        delete[] stack;
    }

    bool isEmpty() const {
        return fullness <= 0;
    }

    bool isFull() const {
        return fullness >= size;
    }

    T get() const {
        if (!isEmpty()) {
            return stack[fullness - 1];
        } else {
            throw "Stack is empty";
        }
    }

    T pop() {
        T data = get();
        fullness--;
        return data;
    }

    void push(T data) {
        if (!isFull()) {
            fullness++;
            stack[fullness - 1] = data;
        } else {
            throw "Stack is full";
        }
    }
};

#endif // INCLUDE_MYSTACK_H_
