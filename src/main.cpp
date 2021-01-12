// Copyright 2021 Kartseva Mariya
#include "MyStack.h"
#include <iostream>

int main() {
    MyStack<int> st(5);

    st.push(1284);
    st.push(967583);
    st.push(938847485);
    st.push(52334234);
    st.push(1343423);

    while (!st.isEmpty()) std:: cout << st.pop() << " ";

    return 0;
}
