// Copyright 2021 Egor Trukhin
#include <iostream>

#include "MyStack.h"
// Stack:
// T* size - begin pointer
// uint32_t size - max count of elements (default = 1)
// uint32_t count - current count of elements

int main() {
  // Empty stack
  MyStack<int> st_empty;
  std::cout << "Stack (empty):" << std::endl;
  std::cout << "  Current count: " << st_empty.getCount() << std::endl;
  std::cout << "  Max count(size): " << st_empty.getSize() << std::endl;
  std::cout << "  Content: (top) ";
  while (!st_empty.isEmpty()) std::cout << st_empty.pop() << " ";
  std::cout << "(bot)" << std::endl << std::endl;

  // Non-empty stack
  MyStack<int> st(2);
  st.push(10);
  st.push(20);
  st.push(30);  // Auto resize to 4 (size *= 2)
  std::cout << "Stack (non-empty):" << std::endl;
  std::cout << "  Current count: " << st.getCount() << std::endl;
  std::cout << "  Max count(size): " << st.getSize() << std::endl;
  std::cout << "  Content: (top) ";
  while (!st.isEmpty()) std::cout << st.pop() << " ";
  std::cout << "(bot)" << std::endl << std::endl;

  // Copied stack
  st.push(10);
  st.push(20);
  st.push(30);
  MyStack<int> st_copy(st);
  std::cout << "Stack (copy):" << std::endl;
  std::cout << "  Current count: " << st_copy.getCount() << std::endl;
  std::cout << "  Max count(size): " << st_copy.getSize() << std::endl;
  std::cout << "  Content: (top) ";
  while (!st_copy.isEmpty()) std::cout << st_copy.pop() << " ";
  std::cout << "(bot)" << std::endl << std::endl;

  // Example
  std::cout << "Task: Reverse array with stack" << std::endl;
  int arr[5] = {1, 2, 3, 4, 5};
  MyStack<int> task;
  std::cout << " in: ";
  for (auto el : arr) {
    std::cout << el << " ";
    task.push(el);
  }
  std::cout << std::endl;
  std::cout << " out: ";
  while (!task.isEmpty()) std::cout << task.pop() << " ";
  std::cout << std::endl << std::endl;

  return 0;
}
