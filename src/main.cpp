//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.

#include <stdio.h>
#include <iostream>
#include "MyStack.h"

int main() {
  MyStack<int> st(0);
  st.push(1);
  st.push(2);
  st.push(3);

  while (!st.isEmpty())
     std::cout << st.pop() <<" ";
  return 0;
}
