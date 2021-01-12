// Copyright 2021 Krissupervizz
#include "MyStack.h"

int main()
{
    MyStack<int> st(4);
    std::cout<<st.push(rand())<<std::endl;
    std::cout << st.push(rand()) << std::endl;
    std::cout << st.push(rand()) << std::endl;

    while (!st.isEmpty())
        std::cout << st.pop() << " ";

    std::cout << st.isEmpty() << std::endl;
    std::cout << st.push(rand()) << std::endl;
    std::cout << st.push(rand()) << std::endl;
    std::cout << st.push(rand()) << std::endl;
    std::cout << st.push(rand()) << std::endl;
    std::cout << st.isFull() << std::endl;

    std::cout << st.get() << std::endl;

    return 0;
}