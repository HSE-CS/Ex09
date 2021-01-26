// Copyright 2021 by shaidi
#ifndef INCLUDE_MYSTACK_H_ 
#define INCLUDE_MYSTACK_H_ 

template <typename T>

class MyStack {
 private:
    unsigned int size;
    unsigned int first = 0;
    T* num;

 public:
    explicit MyStack(unsigned int new_size) {
        size = new_size;
        num = new T[size];
    }

    MyStack(const MyStack& stack) {
        size = stack.size;
        first = stack.first;
        num = new T[size];
        for (unsigned int i = 0; i < first; ++i)
            num[i] = stack.num[i];
    }

    ~MyStack() {
        delete num;
    }

    T get() const {
        return num[first - 1];
    }

    T pop() {
        first--;
        return num[first];
    }

    void push(T n) {
        num[first] = n;
        first++;
    }

    bool isFull() const {
        if (first == size)
            return 1;
        else
            return 0;
    }

    bool isEmpty() const {
        if (first == 0)
            return 1;
        else
            return 0;
    }
};

#endif  // INCLUDE_MYSTACK_H_
