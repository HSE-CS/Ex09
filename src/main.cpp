// Copyright 2021 by Dolgopolov Alexey
#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> stack(3);
    stack.push(4);
    stack.push(2);
    stack.push(16);
    std::cout << "Get: " << stack.get() << std::endl;
    std::cout << "Full: " << stack.isFull() << std::endl;
    while (!stack.isEmpty()) {
        std::cout << stack.pop() << "\n";
    }
    std::cout << std::endl;
    std::cout << "Empty: " << stack.isEmpty() << std::endl;
    std::cout << std::endl;
    return 0;
}
