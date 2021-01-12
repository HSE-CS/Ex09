// Copyright 2021 Tyulin Igor
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> stek(3);
    stek.push(12);
    stek.push(44);
    stek.push(11);
    std::cout << stek.get() << std::endl;
    stek.pop();
    std::cout << stek.get() << std::endl;
    stek.pop();
    std::cout << stek.get() << std::endl;
    return 0;
}
