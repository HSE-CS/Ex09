// Copyright 2020 Daria Pavlova

#include "MyStack.h"
#include <iostream>

int main()
{
  MyStack<int> st(3);
  st.push(5);
  st.push(10);
  st.push(15);
  MyStack<int> st1(st);

  while(!st1.isEmpty())
    std::cout << st1.pop() <<" ";  //15 10 5

  std::cout << st.get() << std::endl;  //15

  std::cout << st.isFull() << std::endl;  //1 - true

  while(!st.isEmpty())
    std::cout << st.pop() <<" ";  //15 10 5
  std::cout << std::endl;

  MyStack<std::string> sentence(4);
  sentence.push("!");
  sentence.push("clear");
  sentence.push("is");

  std::cout << sentence.isFull() << std::endl;  //0 - false
  sentence.push("everything");
  std::cout << sentence.isFull() << std::endl;  //1 - true

  while(!sentence.isEmpty())
    std::cout << sentence.pop() <<" ";

  return 0;
}