// Copyright NikDemoShow 2020
#include "MyStack.h"
#include <iostream>

int main() {
    /*
    size_t sz{ 10 };
    MyStack<int> st(sz);
    for (size_t i{ 0 }; i < sz; ++i) {
        int el = rand();
        st.push(el);
        std::cout << el << ' ';
    }
    std::cout << std::endl;
    MyStack<int> copy_st(st);
    while (!copy_st.isEmpty())
        std::cout << copy_st.pop() << ' ';
        */
    MyStack<char> st(5);
    std::cout << st.get();
    return 0;
}