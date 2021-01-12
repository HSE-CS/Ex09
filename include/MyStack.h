// Copyright NikDemoShow 2020
#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_

template<class T>
class MyStack {
private:
  size_t size;
  size_t top;
  T* arr;
public:
  explicit MyStack(const size_t n_size): size(n_size), top(0) {
    arr = new T[size];
  }
  MyStack(const MyStack& n_MyStack) : size(n_MyStack.size), top(n_MyStack.top) {
    arr = new T[size];
    for (size_t i{ 0 }; i < size; ++i) {
      arr[i] = n_MyStack.arr[i];
    }
  }
  ~MyStack(){
    delete[] arr;
  }
  T get() const {
    if (!(*this).isEmpty()) {
      return arr[top - 1];
    }
    return 0;
  }
  T pop() {
    if (!(*this).isEmpty()) {
      top--;
      return arr[top];
    }
    return 0;
  }
  void push(T el) {
    if (!(*this).isFull()) {
      top++;
      arr[top - 1] = el;
    }
  }
  bool isFull() const {
    return top == size;
  }
  bool isEmpty() const {
    return !top;
  }
};

#endif