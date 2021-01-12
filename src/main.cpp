// Copyright 2021 Uskova
#include <iostream>
#include "MyStack.h"

int main()
{
    MyStack<int> st(4);
    std::cout << "Push 1" << std::endl;
    st.push(1);
    std::cout << "Push 2" << std::endl;
    st.push(2);
    std::cout << "Push rand" << std::endl;
    st.push(rand());
    std::cout << "Get: " << st.get() << std::endl;
    int k = st.pop();
    std::cout << "Pop: " << k << std::endl;
    std::cout << "Get: " << st.get() << std::endl;
    std::cout << "Push 3" << std::endl;
    st.push(3);
    std::cout << "Full: " << st.isFull() << std::endl;
    std::cout << "Push 4" << std::endl;
    st.push(4);
    std::cout << "Full: " << st.isFull() << std::endl;
    std::cout << "Pop all: " << std::endl;
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << std::endl;
    std::cout << "Empty: " << st.isEmpty() << std::endl;
    return 0;
}
