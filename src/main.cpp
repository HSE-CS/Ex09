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

  unsigned int seed = 16;

  while (!s.isFull()) {
    int r = rand_r(&seed) % 100;
    std::cout << r << ' ';
    s.push(r);
  }
  std::cout << '\n';
  while (!s.isEmpty()) {
    std::cout << s.pop() << ' ';
  }
  std::cout << '\n';
  return 0;
}
