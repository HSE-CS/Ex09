// Copyright 2020 Polina Lukicheva
#include <random>

#include "MyStack.h"
int main() {
  Stack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(3);
  while (!st.isEmpty()) std::cout << st.pop() << " ";
  Stack<int> st2(5);
  st2.push(1);
  st2.push(2);
  st2.push(3);
  std::cout << st2.get() << " ";
  st2.push(4);
  std::cout << st2.get() << " ";
  st2.push(5);
  std::cout << st2.get() << std::endl;
  std::cout << "Stack is full: " << st2.isFull() << std::endl;
  Stack<int> st3(st2);
  while (!st2.isEmpty()) std::cout << st2.pop() << " ";
  std::cout << std::endl;
  while (!st3.isEmpty()) std::cout << st3.pop() << " ";
  std::cout << std::endl << "Stack is empty: " << st2.isEmpty() << std::endl;
  return 0;
}
