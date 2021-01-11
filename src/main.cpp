// Copyright 2021 Kuznetsov Mikhail

#include "MyStack.h"
#include <iostream>
#include <cstdlib>

int main() {
  MyStack<int> st(8);
  int start = 2021;
  while (!st.isFull()) {
    st.push(start++);
    std::cout << st.get() << " ";
  }
  MyStack<int> new_st(st);
  std::cout << std::endl;
  while (!new_st.isEmpty())
    std::cout << new_st.pop() << " ";
  return 0;
}
