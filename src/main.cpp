// Copyright 2021 ch2oh
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << "number " << st.get() << std::endl;
    int x = st.pop();
    std::cout << "also number "<< x << std::endl;
    while (!st.isEmpty())
        std::cout << st.pop() << std::endl;
    return 0;
}
