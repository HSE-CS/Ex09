//  Copyright 2021 Dmitry Vargin
#include "../include/MyStack.h"

int main() {
    MyStack<int> stack(5);
    stack.push(32);
    stack.push(-5);
    stack.push(1);
    stack.push(0);
    stack.push(-46354);
    std::cout << "Create stack and push 2 elements:" << std::endl;
    stack.printStack();

    std::cout << "Get last element:" << std::endl;
    std::cout << stack.get() << std::endl << std::endl;

    std::cout << "Pop last element: " << std::endl;
    std::cout << "removed element: " << stack.pop() << std::endl;
    stack.printStack();

    std::cout << "Copy constructor:" << std::endl;
    MyStack<int> copy_stack(stack);
    copy_stack.printStack();

    std::cout << "Is it empty? - " << copy_stack.isEmpty() << std::endl;
    std::cout << "Is it full? - " << copy_stack.isFull() << std::endl;

    std::cout << "After push 1 element" << std::endl;
    copy_stack.push(10);
    std::cout << "Is it empty? - " << copy_stack.isEmpty() << std::endl;
    std::cout << "Is it full? - " << copy_stack.isFull() << std::endl;

    while (!copy_stack.isEmpty())
        copy_stack.pop();
    std::cout << "After push all elements" << std::endl;
    std::cout << "Is it empty? - " << copy_stack.isEmpty() << std::endl;
    std::cout << "Is it full? - " << copy_stack.isFull() << std::endl;

    return 0;
}
