// Copyright 2021 Vadukk
#include "MyStack.h"

#include <cstdlib>
#include <ctime>

using std::cout;
using std::srand;
using std::time;
using std::rand_r;

int main() {
  srand((unsigned) time(nullptr));

  MyStack<int> st(10);
  int val1 = rand_r();
  int val2 = rand_r();
  int val3 = rand_r();
  st.push(val1);
  cout << val1 << " pushed" << endl;
  st.push(val2);
  cout << val2 << " pushed" << endl;
  st.push(val3);
  cout << val3 << " pushed" << endl;

  while (!st.isEmpty()) {
    std::cout << st.pop() << " popped" << endl;
  }
  return 0;
}
