// Copyright Roman Balayan @ 2021

#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> test(5);
    test.push(1);
    test.push(2);
    test.push(0);

    while (!test.isEmpty())
        std::cout << test.pop() << " ";
    return 0;
}