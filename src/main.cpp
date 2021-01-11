// Copyright 2021 Ex09 TiNa
#include "MyStack.h"
#include <iostream>

int main() {
  MyStack<int> st(5);
  int temp = 0;
  for (int i = 0; i < 5; i++) {
    std::cin >> temp;
    st.push(temp);
  }

  while (!st.isEmpty())
    std::cout << st.pop() << " ";
  return 0;
}
