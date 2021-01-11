// Copyright 2021 by me
#include <iostream>
#include <random>
#include "../include/MyStack.h"

int main() {
    MyStack<int> test1(10);
    while (!test1.isFull()) {  // fill stack with random numbers
        test1.push(std::rand() % 100);
    }
    MyStack<int> test2(test1);  // copy stack
    while (!test1.isEmpty()) {  // check if it worked
        std::cout << test1.get() << " ";  // and test get function
        std::cout << test1.pop() << " ";  // and pop
        std::cout << test2.pop() << "\n";
    }
    int a[10];  // reverse array with stack
    for (size_t i = 0; i < 10; ++i) {
        a[i] = std::rand() % 10;
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    MyStack<int> test3(10);
    for (auto i : a) {
        test3.push(i);
    }
    for (size_t i = 0; i < 10; ++i) {
        a[i] = test3.pop();
        std::cout << a[i] << " ";
    }  // check if array is reversed
    return 0;
}
