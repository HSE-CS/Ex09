#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> stack(10);
    stack.push(10);
    stack.push(3);
    stack.push(-1);

    std::cout << stack.get() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.pop() << std::endl;
    std::cout << stack.isFull() << std::endl;
    std::cout << stack.isEmpty() << std::endl;
    return 0;
}
