// Copyright 2020 ArinaMonicheva
#include "MyStack.h"
#include "time.h"
#include <iostream>

int main() {
  srand(time(0));

  MyStack<int> st(10);

  std::cout << "Full or empty: " << st.isFull() << ' ' << st.isEmpty() << std::endl;

  st.push(rand());
  st.push(rand());
  st.push(rand());

  std::cout << "Full or empty: " << st.isFull() << ' ' << st.isEmpty() << std::endl;

  std::cout << st.get() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.get() << std::endl;

  while(!st.isEmpty()) {
    std::cout << st.pop() << ' ';
  }

  std::cout << "Full or empty: " << st.isFull() << ' ' << st.isEmpty() << std::endl;

  while (!st.isFull()) {
    st.push(rand());
  }

  std::cout << "Full or empty: " << st.isFull() << ' ' << st.isEmpty() << std::endl;

  std::cout << st.get() << std::endl;

  MyStack<int> newSt(st);

  std::cout << newSt.get() << std::endl;
  std::cout << "Full or empty: " << newSt.isFull() << ' ' << newSt.isEmpty() << std::endl;


  while (!st.isEmpty()) {
    std::cout << st.pop() << ' ' << newSt.pop() << std::endl;
  }

  std::cout << "Full or empty: " << st.isFull() << ' ' << st.isEmpty() << std::endl;
  std::cout << "Full or empty: " << newSt.isFull() << ' ' << newSt.isEmpty() << std::endl;

  return 0;
}