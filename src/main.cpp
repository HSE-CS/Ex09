// Copyright 2021 Smirnov Grigory
#include "MyStack.h"
#include <ctime>
int main()
{
  srand(time(NULL));
  MyStack<int> st(2);
  std::cout << st.isEmpty() << " ";
  st.push(rand());
  st.push(rand());
  std::cout << st.isFull() << " ";
  std::cout << st.isEmpty() << std::endl;
  std::cout << st.get() << std::endl;
  MyStack<int> cp(st);
  std::cout << st.get() << std::endl;
  while (!st.isEmpty())
    std::cout << st.pop() << " ";
  MyStack<int> cp2(st);
  std::cout << std::endl << st.isEmpty() << " ";
  return 0;
}