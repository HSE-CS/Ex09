// Copyright [2020] <Olesya Nikolaeva>

#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    while (st.isEmpty() == 0) {
        std::cout << st.pop() << " ";
    }
    return 0;
}
