// Copyright 2021 Nikolaev Ivan

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyStack.h"


int main() {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << st.get() << std::endl;
    MyStack<int> st2(st);
    st.push(4);
    st.push(5);
    std::cout << st2.pop() << std::endl;
    std::cout << st2.pop() << std::endl;
    return 0;
}