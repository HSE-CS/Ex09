#include <iostream>

#include "MyStack.h"

int main() {
  MyStack<int> s(10);
  s.push(10);
  s.push(20);
  s.push(30);

  std::cout << s.isFull() << '\n';
  std::cout << s.get() << '\n';
  std::cout << s.get() << '\n';
  std::cout << s.pop() << '\n';
  std::cout << s.pop() << '\n';
  std::cout << s.pop() << '\n';
  std::cout << s.isEmpty() << '\n';
}
