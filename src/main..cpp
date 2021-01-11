// Copyright 2021 Egor Buzanov

#include <cstdlib>
#include <iostream>

#include "../include/MyStack.h"

int main() {
  MyStack<int> st(10);
  st.push(rand());
  st.push(rand());
  st.push(rand());

  MyStack<int> new_stack(st);

  while (!st.isEmpty()) {
    std::cout << st.pop() << " ";
  };

  std::cout << std::endl;
  std::cout << new_stack.get() << " " << new_stack.isFull() << std::endl;
  while (!st.isEmpty()) {
    std::cout << st.pop() << " ";
  };
  std::cout << std::endl;

  return 0;
}
