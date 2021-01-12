// Copyright 2021 Shabarshin Leonid
#include "MyStack.h"
#include <iostream>
int main() {
    MyStack<int> stack(5);
    stack.push(50);
    stack.push(1);
    stack.push(21);
    MyStack<int> new_stack(stack);
    std::cout << new_stack.get() << std::endl;
    std::cout << new_stack.isFull() << std::endl;
    new_stack.push(3);
    new_stack.push(10);
    std::cout << new_stack.isFull() << std::endl;
    while (!stack.isEmpty())
        std::cout << stack.pop() << ' ';
    std::cout << std::endl;
    return 0;
}