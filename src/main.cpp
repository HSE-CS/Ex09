// Copyright 2021 TimurZaytsev

#include <iostream>

#include "MyStack.h"


int main() {
  MyStack<int> stack(10);
  std::cout << stack.isEmpty() << std::endl;
  stack.push(1);
  std::cout << stack.isEmpty() << std::endl;
  std::cout << stack.get() << std::endl;
  stack.push(2);
  std::cout << stack.get() << std::endl;
  std::cout << stack.pop() << std::endl;
  std::cout << stack.get() << std::endl;
  MyStack<int> copy(stack);
  std::cout << copy.get() << std::endl;
  std::cout << copy.isFull() << std::endl;
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  copy.push(2);
  std::cout << copy.isFull() << std::endl;
}
