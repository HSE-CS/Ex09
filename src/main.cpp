// Copyright 2021 Galex

#include <iostream>
#include "MyStack.h"

int main() {
  MyStack<char> my_stack(10);
  std::cout << my_stack.isEmpty();
  my_stack.push('a');
  std::cout << my_stack.isEmpty();
  my_stack.push('b');
  my_stack.push('c');
  my_stack.push('d');
  std::cout << my_stack.get();
  std::cout << my_stack.pop();
  std::cout << my_stack.pop();
  std::cout << my_stack.pop();
  std::cout << my_stack.pop();
  std::cout << my_stack.pop();
}
