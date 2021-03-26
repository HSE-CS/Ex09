// Copyright 2021 by shaidi
#include <iostream>

#include "MyStack.h"

int main() {
  MyStack<int> st(3);
  st.push(4);
  st.push(10);
  st.push(15);

  std::cout << st.isFull() << std::endl;

  std::cout << st.isEmpty() << std::endl;

  std::cout << st.get() << "    ";
  st.pop();
  std::cout << st.get() << std::endl;

  return 0;
}