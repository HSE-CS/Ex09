// Copyright 2021 Golovanov  


#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(5);
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    std::cout << st.isFull() << std::endl;
    std::cout << st.isEmpty() << std::endl;
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << std::endl;
    std::cout << st.isFull() << std::endl;
    std::cout << st.isEmpty() << std::endl;
    MyStack<int> sm(3);
    sm.push(9);
    std::cout << sm.isFull() << std::endl;
    sm.push(8);
    std::cout << sm.isFull() << std::endl;
    sm.push(7);
    std::cout << sm.isFull() << std::endl;
    MyStack<int> sp(4);
    std::cout << sp.isEmpty() << std::endl;
    sp.push(2);
    sp.push(8);
    sp.push(0);
    sp.push(5);
    sp.pop();
    std::cout << sp.isEmpty() << std::endl;
    sp.pop();
    std::cout << sp.isEmpty() << std::endl;
    sp.pop();
    std::cout << sp.isEmpty() << std::endl;
    sp.pop();
    std::cout << sp.isEmpty() << std::endl;
    MyStack<int> si(2);
    si.push(8);
    si.push(2);
    std::cout << si.get() << " ";
    si.pop();
    std::cout << si.get() << " ";
    return 0;
}
