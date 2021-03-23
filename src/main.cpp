// Copyright 2021 milalupehina
#include "MyStack.h"
#include <stdlib.h>
#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    MyStack<int> st(10);
    st.push(1234);
    st.push(4356);
    st.push(7890);

    while (!st.isEmpty())
        std::cout << st.pop() <<" ";
    return 0;
}
