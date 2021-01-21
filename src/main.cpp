// Copyright 2021 Grachev Alexander
//
// Created by Grachev Alexander on 12.01.2021.
//

#include <iostream>
#include "../include/MyStack.h"

int main() {
    MyStack<int> st(4);
    st.push(1);
    st.push(2);
    st.push(3);

    std::cout << st.get() << std::endl;

    std::cout << st.pop() << std::endl;
    std::cout << st.pop() << std::endl;

    st.push(45);
    std::cout << st.get() << std::endl;

    return 0;
}
