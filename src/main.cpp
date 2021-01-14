// Copyright 2021 Alex Tatsenko
#include<iostream>
#include"MyStack.h"

int main() {
    MyStack<int> stack_1(3);
    MyStack<int> stack_2(stack_1);
    stack_1.push(11);
    stack_1.push(23);
    std::cout << stack_1.isEmpty() << std::endl;
    std::cout << stack_1.isFull() << std::endl;
    std::cout << stack_1.get() << std::endl;
    std::cout << stack_1.pop() << std::endl;
    std::cout << stack_1.get() << std::endl;
    std::cout << stack_1.pop() << std::endl;
    stack_1.push(33);
    std::cout << stack_1.get() << std::endl;
    return 0;
}
