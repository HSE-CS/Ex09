// Copyright 2021 Islam Osmanov
#include <iostream>
#include "MyStack.h"
#include <string>


int main() {
  MyStack<int> Stack(3);
  Stack.push(19);
  Stack.push(20);
  std::cout << Stack.isFull() << std::endl;
  std::cout << Stack.get() << std::endl;
  Stack.push(1000);
  std::cout << Stack.isEmpty() << std::endl;
  std::cout << Stack.isFull() << std::endl;
  Stack.pop();
  std::cout << Stack.get() << std::endl;

  MyStack<std::string> OtherStack(2);
  OtherStack.push("Manchester United");
  OtherStack.push("Manchester United");
  OtherStack.pop();
  std::cout << OtherStack.isFull() << std::endl;
  return 0;
}
