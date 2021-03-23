// Copyright 2021 milalupehina
#include "MyStack.h"
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    MyStack<int> st(10);
    st.push(rand());
    st.push(rand());
    st.push(rand());

    while (!st.isEmpty())
        std::cout << st.pop() <<" ";
    return 0;
}
