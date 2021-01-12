#pragma once
#include <stdlib.h>
#include <string.h>

#include <utility>

template <class T>
class MyStack {
 private:
  T* arr;
  size_t len;
  size_t maxsize;

 public:
  explicit MyStack(const size_t maxsize) {
    this->maxsize = maxsize;
    len = 0;
    arr = new T[maxsize];
  }
  MyStack(const MyStack<T>& other) {
    len = other.len;
    maxsize = other.maxsize;
    arr = new T[maxsize];
    memcpy(arr, other.arr, len * sizeof(T));
  }
  ~MyStack() { delete[] arr; }
  T get() const { return arr[len - 1]; }
  T pop() {
    T elem = std::move(arr[len - 1]);
    len -= 1;
    return elem;
  }
  void push(T elem) {
    len += 1;
    arr[len - 1] = elem;
  }
  bool isFull() const { return len >= maxsize; }
  bool isEmpty() const { return len == 0; }
};
