#include "MyStack.h"

#include <iostream>

int main() {
    MyStack<int> stack(1);
    std::cout << "Stack initialized, empty=" << stack.isEmpty() << std::endl;

    stack.push(5);
    std::cout << "pushed value=" << stack.get() << std::endl;
    stack.push(6);
    std::cout << "pushed value=" << stack.get() << std::endl;
    stack.push(4);
    std::cout << "pushed value=" << stack.get() << std::endl;
    stack.pop();
    std::cout << "stack popped, current top is " << stack.get() << std::endl;

    return 0;
}
