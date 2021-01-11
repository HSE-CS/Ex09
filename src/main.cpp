// Copyright 2021 Stolbov Yaroslav
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(0);
    st.push(2);
    st.pop();
    st.push(24);
    std::cout << st.get();
    return 0;
}
