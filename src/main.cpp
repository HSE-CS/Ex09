// Copyright 2021 КЉраюшкина …катерина

#include "Stack.h"
#include <iostream>
#include <string>

int main() {
  Stack<int> st(5);
  int ct = 0;
  int num; 
  while (ct++ < 5) {
    std :: cin >> num;
    st.push(num); }
  st.printStack();
  std :: cout << "\n";
  st.pop();
  st.printStack();
  std :: cout << "\n";
  std :: cout << st.take() << "\n";
  std :: cout << st.isFull() << "\n";
  std :: cout << st.isEmpty()<< "\n";
  return 0;
}