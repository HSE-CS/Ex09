// Copyright 2021 ArinaMonicheva
#include <ctime>
#include <iostream>
#include "MyStack.h"

int main() {
  srand(time(0));
  unsigned int *rSeed = 0;

  MyStack<int> st(10);

  std::cout << "Full or empty: " << st.isFull() << ' ';
  std::cout << st.isEmpty() << std::endl;

  st.push(rand_r(rSeed));
  *rSeed++;
  st.push(rand_r(rSeed));
  *rSeed++;
  st.push(rand_r(rSeed));
  *rSeed++;

  std::cout << "Full or empty: " << st.isFull() << ' ';
  std::cout << st.isEmpty() << std::endl;

  std::cout << st.get() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.get() << std::endl;

  while (!st.isEmpty()) {
    std::cout << st.pop() << ' ';
  }

  std::cout << "Full or empty: " << st.isFull() << ' ';
  std::cout << st.isEmpty() << std::endl;

  while (!st.isFull()) {
    st.push(rand_r(rSeed));
    *rSeed++;
  }

  std::cout << "Full or empty: " << st.isFull() << ' ';
  std::cout << st.isEmpty() << std::endl;

  std::cout << st.get() << std::endl;

  MyStack<int> newSt(st);

  std::cout << newSt.get() << std::endl;
  std::cout << "Full or empty: " << newSt.isFull() << ' ';
  std::cout << newSt.isEmpty() << std::endl;

  while (!st.isEmpty()) {
    std::cout << st.pop() << ' ' << newSt.pop() << std::endl;
  }

  std::cout << "Full or empty: " << st.isFull() << ' ';
  std::cout << st.isEmpty() << std::endl;
  std::cout << "Full or empty: " << newSt.isFull() << ' ';
  std::cout << newSt.isEmpty() << std::endl;

  return 0;
}
