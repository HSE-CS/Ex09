// Copyright 2020 Baklanov
#include "MyStack.h"
#include <iostream>
#include <random>

int main()
{
  MyStack<int> st(10);
  st.push(rand());
  st.push(rand());
  st.push(rand());

  while (!st.isEmpty())
    std::cout << st.pop() << " ";
    return 0;
}
