// Copyright 2021 Sozinov Kirill

#include "MyStack.h"
#include <iostream>

int main()
{
    MyStack<int> my_st(10);
    my_st.push(rand());
    my_st.push(rand());
    my_st.push(rand());
    my_st.push(rand());

    while (!my_st.isEmpty())
        std::cout << my_st.pop() << " ";
    return 0;
}

