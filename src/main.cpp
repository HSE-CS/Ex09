// Copyright 2020 Konina Tatiana
#include "MyStack.h"
#include <stdlib.h>
#include <iostream>
int main() {
  MyStack <int> myStack(5);
  // заполняем стек
  std::cout << "PUSH:\n";
  int ct = 0;
  while (ct++ != 5) {
    int temp;
    std::cin >> temp;
    myStack.push(temp);
  }
  myStack.printStack();  // вывод стека на экран
  std::cout << "\nDEL:\n";
  myStack.pop();  // удаляем элемент из стека
  myStack.pop();  // удаляем элемент из стека
  myStack.printStack();  // вывод стека на экран
  MyStack<int> st(10);
  std::cout << st.isEmpty() << true << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack2(10);
  myStack2.push(5);
  std::cout << myStack2.isEmpty() << false << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack3(10);
  myStack3.push(5);
  myStack3.pop();
  std::cout << myStack3.isEmpty() << true << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack4;
  std::cout << myStack4.isEmpty() << true << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack5(10);
  myStack5.push(5);
  MyStack<int> myStack5_1 = myStack5;
  std::cout << 5 <<  myStack5_1.get() << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack6(10);
  myStack6.push(5);
  myStack6.push(6);
  myStack6.push(7);
  std::cout << 7 << myStack6.get() << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack7(10);
  myStack7.push(5);
  myStack7.push(6);
  myStack7.push(7);
  myStack7.pop();
  std::cout << 6 << myStack7.get() << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack8(3);
  myStack8.push(5);
  myStack8.push(6);
  myStack8.push(7);
  std::cout << true << myStack8.isFull() << std::endl;
  std::cout << "------------------------" << std::endl;
  MyStack<int> myStack9(3);
  myStack9.push(5);
  myStack9.push(6);
  std::cout << false << myStack9.isFull() << std::endl;
  std::cout << "------------------------" << std::endl;
    return 0;
}

