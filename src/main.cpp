//  Copyright © 2021 Ksuvot. All rights reserved.
#include "MyStack.h"

int main() {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  std::cout << st.isEmpty() << std::endl;
  std::cout << st.isFull() << std::endl;
  std::cout << st.get() << std::endl;
  std::cout << st.pop() << std::endl;

  MyStack<int> st_copy(st);
  std::cout << st_copy.isEmpty() << std::endl;
  std::cout << st_copy.isFull() << std::endl;
  st_copy.push(6);
  std::cout << st_copy.isEmpty() << std::endl;
  std::cout << st_copy.isFull() << std::endl;

  while (!st_copy.isEmpty())
    st_copy.pop();

  std::cout << st_copy.isEmpty() << std::endl;
  std::cout << st_copy.isFull() << std::endl;

  return 0;
}
