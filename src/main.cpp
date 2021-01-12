// Copyright 2021 Vadukk
#include "MyStack.h"

#include <cstdlib>
#include <ctime>

int main() {
  unsigned seed = (unsigned) std::time(nullptr);

  MyStack<int> st(10);
  int val1 = std::rand_r(&seed);
  int val2 = std::rand_r(&seed);
  int val3 = std::rand_r(&seed);
  st.push(val1);
  std::cout << val1 << " pushed" << std::endl;
  st.push(val2);
  std::cout << val2 << " pushed" << std::endl;
  st.push(val3);
  std::cout << val3 << " pushed" << std::endl;

  while (!st.isEmpty()) {
    std::cout << st.pop() << " popped" << std::endl;
  }
  return 0;
}
