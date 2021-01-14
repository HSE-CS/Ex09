// Copyright 2021 Krissupervizz
#include "MyStack.h"

int main() {
    MyStack<int> st(4);
    std::cout << st.push(1) << std::endl;
    std::cout << st.push(2) << std::endl;
    std::cout << st.push(3) << std::endl;

    while (!st.isEmpty())
        std::cout << st.pop() << " ";

    std::cout << st.isEmpty() << std::endl;
    std::cout << st.push(9) << std::endl;
    std::cout << st.push(8) << std::endl;
    std::cout << st.push(7) << std::endl;
    std::cout << st.push(6) << std::endl;
    std::cout << st.isFull() << std::endl;

    std::cout << st.get() << std::endl;

    return 0;
}
