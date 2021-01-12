// Copyright 2021 Artem Danyaev

#include "MyStack.h"
#include <iostream>
int main() {
  MyStack<int> st(4);
  std::cout << st.isEmpty() << std::endl;
  st.push(54);
  std::cout << st.isEmpty() << std::endl;
  std::cout << st.isFull() << std::endl;
  st.push(732);
  std::cout << st.get() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.pop() << std::endl;
  std::cout << st.isEmpty() << std::endl;
}