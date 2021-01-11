// Copyright 2020 Baklanov
#include "MyStack.h"
#include <iostream>
#include <random>

int main() {
  MyStack<int> st(10);
  st.push(12);
  st.push(32);
  st.push(421);

  while (!st.isEmpty())
    std::cout << st.pop() << " ";
    return 0;
}
