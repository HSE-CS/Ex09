// Copyright 2020 Stanislav Stoianov

#include "../include/MyStack.h"
#include <iostream>

int main() {
  MyStack<int> stack(1);
  stack.push(42);
  std::cout << stack.isFull();
  return 0;
}
