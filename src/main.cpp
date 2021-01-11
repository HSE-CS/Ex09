// Copyright 2020 Kasyanov
#include <iostream>
#include "../include/MyStack.h"

int main() {
    MyStack<int> stack_1(5);
    std::cout << stack_1.isEmpty() << '\n';
    stack_1.push(5);
    stack_1.push(8);
    std::cout << stack_1.get() << '\n';
    stack_1.push(7);
    stack_1.push(6);
    std::cout << stack_1.isFull() << '\n';
    stack_1.push(4);
    std::cout << stack_1.isFull() << '\n';
    MyStack<int> stack_2(stack_1);
    std::cout << stack_2.pop() << '\n';
    stack_2.push(4);
    return 0;
}
