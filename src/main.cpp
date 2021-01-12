// Copyright 2021 by alexgiving
#include <iostream>
#include <cmath>
#include "MyStack.h"

int main() {
    MyStack<int> stack1(10);
    while (!stack1.isFull()) {
        stack1.push(std::rand() % 100);
    }
    MyStack<int> stack2(stack1);
    while (!stack2.isEmpty()) {
        std::cout << stack2.pop() << "\n";
    }

    unsigned int a = 123456789;
    unsigned int b = 0;
    std::cout << a << "\n";
    MyStack<int> tempStack(9);
    while (!tempStack.isFull()) {
        unsigned int element = a % 10;
        a /= 10;
        tempStack.push(element);
    }
    unsigned int i = 0;
    while (!tempStack.isEmpty()) {
        b += (unsigned int)(tempStack.pop() * pow(10, i));
        i++;
    }
    std::cout << b << "\n";

    return 0;
}
