// Copyright 2021 Igumnova Natasha
#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(100);
    st.push(2);
    st.push(13);
    MyStack<int> st2(st);
    std::cout << st2.get() << "\n";
    std::cout << st2.isFull() << "\n";
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    return 0;
}
