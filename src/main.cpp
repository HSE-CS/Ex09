// Copyright 2020 PolinaPanina
#include "MyStack.h"
#include <iostream>

int main() {
  MyStack<int> st(10);
  st.push(1);
  st.push(3);
  st.push(5);
  st.push(9);
  while (!st.isEmpty())
     std::cout << st.pop() << " ";
  return 0;
}
