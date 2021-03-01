// Copyright 2021 Krayushkina

#include "MyStack.h"
#include <iostream>
#include <string>

int main() {
  MyStack<int> st(5);
  int ct = 0;
  int num;
  while (ct++ < 5) {
    std :: cin >> num;
    st.push(num); }
  st.printMyStack();
  std :: cout << "\n";
  st.pop();
  st.printMyStack();
  std :: cout << "\n";
  std :: cout << st.take() << "\n";
  std :: cout << st.isFull() << "\n";
  std :: cout << st.isEmpty()<< "\n";
  return 0;
}
