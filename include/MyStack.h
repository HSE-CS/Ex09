// Copyright 2021 valvarl

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

#include <cstddef>
#include <vector>

template<typename T>
class MyStack {
 private:
    std::vector<T> *stack_;
    size_t size_;
 public:
    explicit MyStack(size_t N) : stack_(new std::vector<T>()), size_(N) {}
    MyStack(const MyStack &myStack) : stack_(myStack.stack_), size_(myStack.size_) {}
    virtual ~MyStack() { delete stack_; }
    T get() const { return stack_->back(); }
    T pop() {
        T x = get();
        stack_->pop_back();
        return x;
    }
    void push(T x) { stack_->push_back(x); }
    [[nodiscard]] bool isFull() const {
        return stack_->size() == size_;
    }
    [[nodiscard]] bool isEmpty() const { return stack_->empty(); }
};


#endif  // INCLUDE_MYSTACK_H_
