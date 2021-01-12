// Copyright 2020 Konina Tatiana
#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
int main() {
  MyStack<int> st(10);
  st.push(rand());
  st.push(rand());
  st.push(rand());

  while (!st.isEmpty())
      std::cout << st.pop() << " ";
  MyStack <int> myStack(5);

  // ��������� ����
  std::cout << "PUSH:\n";
  int ct = 0;
  while (ct++ != 5)
  {
    int temp;
    std::cin >> temp;
    myStack.push(temp);
  }

  myStack.printStack(); // ����� ����� �� �����

  std::cout << "\nDEL:\n";

  myStack.pop(); // ������� ������� �� �����
  myStack.pop(); // ������� ������� �� �����
  myStack.printStack(); // ����� ����� �� �����
	return 0;
}



