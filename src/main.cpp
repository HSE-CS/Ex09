// Copyright 2021 by idpas
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    std::cout << st.isFull() << std::endl;

    std::cout << st.isEmpty() << std::endl;

    std::cout << st.get() << "    ";
    st.pop();
    std::cout << st.get() << std::endl;

    std::cout << st.get() << "    ";
    st.push(6);
    st.push(7);
    std::cout << st.get() << std::endl;

    return 0;
}
