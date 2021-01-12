// Copyright 2020 ArinaMonicheva

#ifndef MYSTACK_MYSTACK_H_
#define MYSTACK_MYSTACK_H_

#include <iostream>

template <typename S>
class MyStack {
 private:
  S* stackArray;
  int stackSize;
  int lastIn;

 public:
  explicit MyStack(unsigned int needSize) {
    if (needSize > 0) {
      stackArray = new S[needSize];
	}
    stackSize = needSize;
    lastIn = -1;
  }

  MyStack(MyStack &otherStack) {
    stackArray = new S[otherStack.stackSize];
    stackSize = otherStack.stackSize;
    lastIn = otherStack.lastIn;
    for (int i = 0; i < stackSize; i++) {
      stackArray[i] = otherStack.stackArray[i];
    }
  }

  ~MyStack() {
    delete[] stackArray;
  }

  S get() const {
    if (lastIn != -1) {
      return stackArray[lastIn];
    }
	//throw "ERR: empty stack";
  }

  S pop() {
    if (lastIn != -1) {
      return stackArray[lastIn--];
    }
	//throw "ERR: empty stack";
  }

  void push(S newElement) {
    if (lastIn < stackSize - 1) {
      stackArray[++lastIn] = newElement;
	  return;
    }
	//throw "ERR: full stack";
  }

  bool isFull() const {
    return lastIn == stackSize - 1;
  }

  bool isEmpty() const {
    return lastIn == -1;
  }

};

#endif // MYSTACK_MYSTACK_H_