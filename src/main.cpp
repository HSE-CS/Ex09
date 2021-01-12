// Copyright 2021 KarMashanova

#include "MyStack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  MyStack<int> st(5);
  int ct = 0;
  int num;
  while (ct++ < 5)
  {
	cin >> num;
	st.push(num); 
  }
  cout << endl;
  st.printStack();
  cout << "\n";
  st.pop();
  st.printStack();
  cout << "\n";
  cout << st.isEmpty()<< "\n";
  cout << st.isFull() << "\n";
  cout << st.get() << "\n";
  return 0;
}
