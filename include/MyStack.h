//Copyright 2020 VladimirUspensky

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_


template<class T>
class MyStack {
 private:
    int size{};
    int maxSize{};
    T *stack;

 public:
    explicit MyStack(int len) {
        this->maxSize = len;
        this->size = 0;
        this->stack = new T[len];
    }
    MyStack(const MyStack &newStack) {
        this->maxSize = newStack.maxSize;
        this->size = newStack.size;
        this->stack = newStack.stack;
    }
    ~MyStack() {
        delete[] this->stack;
    }
    bool isFull() const {
        if (this->size == this->maxSize) return true;
        return false;
    }
    bool isEmpty() const {
        if (this->size == 0) return true;
        return false;
    }
    T get() {
        if (this->size > 0) return this->stack[size - 1];
        return -1;
    }
    T pop() {
        if (this->size > 0) {
            this->size--;
            return this->stack[size];
        }
        return -1;
    }
    T push(T el) {
        if (this->size != this->maxSize) {
            this->stack[size] = el;
            this->size++;
            return el;
        }
        return -1;
    }
};


#endif  //  INCLUDE_MYSTACK_H_
