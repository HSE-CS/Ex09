// Copyright 2020 Bogomazov
#include<iostream>
#include "../include/MyStack.h"
int main() {
    unsigned int seed = time(NULL);
    MyStack<int> st(10);
    st.push(rand_r(&seed));
    st.push(rand_r(&seed));
    st.push(rand_r(&seed));

    while (!st.isEmpty())
       std::cout << st.pop() <<" ";
    return 0;
}
