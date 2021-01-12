// Copyright 2021 mkhorosh
#include <iostream>
#include "MyStack.h"

int main() {
  MyStack<int> st(10);
  st.push(111);
  st.push(222);
  st.push(333);
  while (!st.isEmpty())
    std::cout << st.pop() << " ";
  std::cout << std::endl;

  MyStack<char> ch(10);
  ch.push('1');
  ch.push('4');
  while (!ch.isEmpty())
    std::cout << ch.pop() << " ";
  std::cout << std::endl;

  ch.push('q');
  MyStack<char> newch(ch);
  ch.pop();
  while (!newch.isEmpty())
    std::cout << newch.pop() << " ";
  std::cout << std::endl;
  std::cout << newch.isFull() << std::endl;
  return 0;
}
