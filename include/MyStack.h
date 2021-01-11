// Created by Stanislav on 11/01/2021

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class T>
class MyStack {
 private:

  unsigned int size;
  unsigned int head;
  T *data;

 public:

  explicit MyStack(int size) : head(0), size(size), data(new T[size + 1]) {}

  MyStack(const MyStack &MyStack) {
    this->size = MyStack.size;
    this->head = MyStack.head;
    this->data = new T[MyStack.size + 1];
    for (auto i = 0; i < size; ++i) {
      this->data[i] = MyStack.data[i];
    }
  }

  ~MyStack() {
    delete[] this->data;
    this->size = 0;
    this->head = 0;
  }

  T get() const {
    return this->data[this->head];
  }

  void push(T element) {
    this->data[++this->head] = element;
  }

  T pop() {
    return this->data[this->head--];
  }

  bool isFull() const {
    return this->size == this->head;
  }

  bool isEmpty() const {
    return this->head == 0;
  }

};

#endif  // INCLUDE_MYSTACK_H_
