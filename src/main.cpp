// Copyright 2021 Bodrov Egor
#include "MyStack.h"

#include <iostream>

int main() {

    MyStack <int> s(5);
    std::cout << s.get() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.isEmpty() << std::endl;

    s.push(10);
    std::cout << s.get() << std::endl;
    std::cout << s.isEmpty() << std::endl;

    s.push(9);
    s.push(8);
    std::cout << s.isFull() << std::endl;

    s.push(7);
    s.push(6);
    std::cout << s.isFull() << std::endl;
    std::cout << s.get() << std::endl;
    std::cout << s.pop() << std::endl;
    std::cout << s.get() << std::endl;

    MyStack <int> st(s);
    for (int i = 0; i < 4; i++) {
        std::cout << s.get() << " ";
        s.pop();
    }

    return 0;
}
