// Copyright 2020 Ryzhova
#include "MyStack.h"

int main() {
  MyStack<int> st(10);
  st.push(3);
  st.push(6);
  st.push(5);
  while (!st.isEmpty())
    std::cout << st.pop() << std::endl;
  std::cout << "Full: " << st.isFull() << std::endl;
  std::cout << "Empty: " << st.isEmpty() << std::endl;
  st.pop();
  while (!st.isEmpty())
    std::cout << st.pop() << std::endl;
  st.pop();
  std::cout << st.get() << std::endl;
  st.pop();
  std::cout << "Empty: " << st.isEmpty() << std::endl;
  return 0;
}
