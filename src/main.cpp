// Copyright 12.01.21 DenisKabanov

#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(rand());
    st.push(rand());
    st.push(rand());
    MyStack<int> st2(st);
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << std::endl;
    std::cout << st2.get() << std::endl;
    st2.push(rand());
    while (!st2.isEmpty())
        std::cout << st2.pop() << " ";
    return 0;
}
