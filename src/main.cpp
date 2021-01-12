// Copyright 2020 <Jiiijyyy>
#include "MyStack.h"
#include <iostream>

int main()
{
    MyStack<int> st(10);
    st.push(rand());
    st.push(rand());
    st.push(rand());

    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    return 0;
}