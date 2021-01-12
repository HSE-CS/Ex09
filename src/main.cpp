// Copyright 12.01.21 DenisKabanov

#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(1);
    st.push(2);
    st.push(15);
    MyStack<int> st2(st);
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << std::endl;
    std::cout << st2.get() << std::endl;
    st2.push(99);
    while (!st2.isEmpty())
        std::cout << st2.pop() << " ";
    return 0;
}
