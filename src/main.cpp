// Copyright 2021 Sozinov Kirill
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> my_st(10);
    my_st.push(1);
    my_st.push(2);
    my_st.push(3);
    my_st.push(4);

    while (!my_st.isEmpty())
        std::cout << my_st.pop() << " ";
    return 0;
}

