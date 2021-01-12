// Copyright 2021 Bekina Svetlana
#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(rand());
    st.push(rand());
    st.push(rand());

    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << std::endl;
    MyStack<int> new_st(4);
    new_st.push(0);
    new_st.push(20);
    new_st.pop();
    new_st.pop();
    std::cout << new_st.pop() << std::endl;
    return 0;
}