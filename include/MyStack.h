// Copyright 2021 by Maxim

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
template<typename Type>
class MyStack {
 private:
    int top_idx;
    bool is_empty;
    int size;
    Type *pointer;

 public:
    explicit MyStack(int size) {
        this->size = size;
        this->pointer = new Type[size];
        this->is_empty = false;
        if (size == 0) {
            this->is_empty = true;
        }
        top_idx = 0;
    }

    MyStack(const MyStack<Type> &my_stack) {
        this->size = my_stack.size;
        this->top_idx = my_stack.top_idx;
        pointer = new Type[this->size];
        for (int i = 0; i < my_stack.size; i++) {
            pointer[i] = my_stack[i];
        }
    }

    ~MyStack() {
        delete[]pointer;
    }

    void push(const Type type) {
        if (top_idx < size) {
            pointer[top_idx] = type;
            top_idx += 1;
        }
    }

    Type pop() {
        if (top_idx > 0) {
            return pointer[--top_idx];
        }
        return 0;
    }

    Type get() const {
        return pointer[top_idx - 1];
    }

    bool isFull() const {
        return top_idx >= size;
    }

    bool isEmpty() const {
        return top_idx == 0;
    }
};
#endif  // INCLUDE_MYSTACK_H_
