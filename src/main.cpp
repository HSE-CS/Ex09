

// Copyright 2021 ArtyomLavrov


#include <iostream>
#include "MyStack.h"


int main() {
 MyStack<int> stack(10);
 stack.push(1);
 std::cout << stack.get() << std::endl;
 stack.push(2);
 std::cout << stack.get() << std::endl;
 std::cout << stack.pop() << std::endl;
 std::cout << stack.get() << std::endl;
 MyStack<int> stack2(stack);
 std::cout << stack2.get() << std::endl;
}
