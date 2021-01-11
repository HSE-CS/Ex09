// Created by Stanislav on 11/01/2021

#include <iostream>
#include "../include/MyStack.h"

int main() {
  MyStack<int> Mystack(1);
  Mystack.push(42);
  std::cout << Mystack.isFull();
  return 0;
}