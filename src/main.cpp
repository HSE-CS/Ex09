// Copyright 2020 GHA Test Team
#include "MyStack.h"


int main() {
  MyStack<int> st(10);
  st.push(rand());
  st.push(rand());
  st.push(rand());
  while (!st.isEmpty())
    std::cout << st.pop() << " ";
  std::cout << "END: " << st.pop() << " ";
  return 0;
}
