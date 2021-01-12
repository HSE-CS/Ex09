// Copyright 2021 Schenikova
#include "MyStack.h"
#include <iostream>

int main()
{
    MyStack<int> st(10);
    st.push(2);
    st.push(3);
    st.push(5);

    while(!st.isEmpty())
       std::cout << st.pop() <<" ";
    return 0;
}