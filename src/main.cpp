// Copyright 2021 Kuznetsov Mikhail

#include "MyStack.h"
#include <iostream>
#include <stdlib.h>

int main() {
  MyStack<int> st(8);
  while(!st.isFull()) {
    st.push(rand());
    std::cout << st.get() << " ";
  }
  MyStack<int> new_st(st);
  std::cout << std::endl;
  while(!new_st.isEmpty())
    std::cout << new_st.pop() << " ";
  return 0;
}
