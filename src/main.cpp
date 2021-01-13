// Copyright 2021 Shirokov Alexander

#include <iostream>
#include "MyStack.h"

int main() {
  MyStack <int> st(7);
  std::cout << st.get() << std::endl;
  std::cout << st.isEmpty() << std::endl;
  st.push(1);
  std::cout << st.get() << std::endl;
  std::cout << st.isEmpty() << std::endl;
  st.push(2);
  st.push(3);
  st.push(4);
  std::cout << st.isFull() << std::endl;
  st.push(5);
  st.push(6);
  st.push(7);
  std::cout << st.get() << std::endl;
  std::cout << st.isFull() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.get() << std::endl;
  MyStack <int> stack(st);
  for (int i = 0; i < 6; i++) {
    std::cout << stack.get() << " ";
    stack.pop();
  }

  return 0;
}
