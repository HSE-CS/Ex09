// Copyright 2020 Stanislav Stoianov

#include <iostream>
#include "../include/MyStack.h"

int main() {
  MyStack<int> stack(1);
  stack.push(42);
  std::cout << stack.isFull();
  return 0;
}
