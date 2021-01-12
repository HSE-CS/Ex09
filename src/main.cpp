// Copyright 2021 Matveev Andrew 19PMI da-da-ya
#include "MyStack.h"

int main() {
    MyStack<int> stack(20);

    for (size_t i = 0; i < 20; i++) {
        stack.push(i);
    }
    std::cout << stack.isFull() << std::endl;

    while (!(stack.isEmpty())) {
        std::cout << stack.pop() << ' ';
    }
    std::cout << std::endl;
    return 0;
}
