// Copyright 2020 Dumarevskaya
#include "MyStack.h"

int main()
{
  MyStack<int> st(10);
  st.push(2);
  st.push(2);
  st.push(3);
  MyStack<int> st2(st);
  std::cout << st2.getSize() << std::endl;
  while(!st2.isEmpty())
    std::cout << st2.pop() <<" ";
  return 0;
}