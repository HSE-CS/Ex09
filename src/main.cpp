// Copyright 2020 <Jiiijyyy>
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(10);
    st.push(rand_r());
    st.push(rand_r());
    st.push(rand_r());

    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    return 0;
}
