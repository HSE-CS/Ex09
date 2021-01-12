// Copyright 2021 SharunovEvgeny
//
// Created by sharg on 12.01.2021.
//
#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> st{};
    while (!st.isFull()) {
        st.push(10);
        std::cout << st.get() << std::endl;
    }
    MyStack<int> st2(12);
    while (!st.isEmpty()) {
        st2.push(12);
        std::cout << st.pop() << std::endl;
    }
    std::cout << st2.pop() << std::endl;
}

