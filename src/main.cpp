// 2021 Copyright Dev-will-work
#include "MyStack.h"

int main() {
  MyStack<int> st(5);
  MyStack<int> cc(st);
  for (size_t i = 0; i < 5; i++) {
    st.push(i);
  }
  std::cout << st.get() << std::endl;
  for (size_t i = 0; i < 5; i++) {
  std::cout << st.pop() << std::endl;
  }
  std::cout << st.isFull() <<std::endl;
  std::cout << st.isEmpty() <<std::endl;
}
