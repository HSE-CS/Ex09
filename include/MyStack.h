// Copyright 2020 valvarl

#ifndef EX09_MYSTACK_H
#define EX09_MYSTACK_H

#include <cstddef>
#include <vector>

template<typename T>
class MyStack {
 private:
    std::vector<T> *stack_;
 public:
    explicit MyStack(size_t N) : stack_(new std::vector<T>(N)) {}
    MyStack(const MyStack &myStack) : stack_(myStack.stack_) {}
    virtual ~MyStack() { delete stack_; }
    T get() const { return stack_->back(); }
    T pop() {
        T x = get();
        stack_->pop_back();
        return x;
    }
    void push(T x) { stack_->push_back(x); }
    [[nodiscard]] bool isFull() const { return stack_->size() == stack_->capacity(); }
    [[nodiscard]] bool isEmpty() const { return stack_->empty(); }
};


#endif //EX09_MYSTACK_H
