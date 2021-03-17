// Copyright 2021 by Maxim

#include <iostream>
#include "MyStack.h"


int main() {
    MyStack<int> st(10);
    st.push(5);
    st.push(6);
    st.push(1);

    while (!st.isEmpty())
        std::cout << st.pop() << " ";
}
