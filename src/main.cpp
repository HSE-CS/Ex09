//  Copyright © 2021 Ksuvot. All rights reserved.
#include "MyStack.h"

int main() {
  MyStack<int> st(4);
  st.push(7);
  st.push(9);
  st.push(123);

  MyStack<int> st_1(st);
  while (!st_1.isEmpty())
    std::cout << st_1.pop() <<" ";

  std::cout << st.get() << std::endl;
  std::cout << st.isFull() << std::endl;
  std::cout << st.isEmpty() << std::endl;

  return 0;
}
