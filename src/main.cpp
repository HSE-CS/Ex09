// Copyright 2021 Ilya Tatsenko
#include<iostream>
#include"MyStack.h"

int main() {
    MyStack<std::string> st1(5);
    MyStack<std::string> st3(st1);
    st1.push("+");
    st1.push("-");
    st1.push("*");
    st1.push("9");
    st1.push("4");
    std::cout << std::endl;

    // for (int i = 0; i < 5; i++)
    // {
        std::cout << st1.get() << std::endl;
    // }

    std::cout << st1.isEmpty() << std::endl;
    std::cout << st1.isFull() << std::endl;
    std::cout << st1.get() << std::endl;
    std::cout << st1.pop() << std::endl;
    std::cout << st1.get() << std::endl;
    std::cout << st3.pop() << std::endl;
    std::cout << st3.get() << std::endl;
}