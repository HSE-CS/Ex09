// Copyright 2021 Stifeev Nikita
#include "MyStack.h"

int main() {
    MyStack<int> stack(10);
    for (int i = 0; i < 10; i++) {
        int value = rand_r() % 10;
        std::cout << "Push " << value << std::endl;
        stack.push(value);
    }
    std::cout << std::endl << "Stack content: ";
    while (!stack.isEmpty()) {
        std::cout << stack.get() << " ";
        stack.pop();
    }
    std::cout << std::endl;
}
