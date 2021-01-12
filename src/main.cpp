// copyright 2021 Elizaveta D.
#include "MyStack.h"

int main() {
    MyStack<int> st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    MyStack<int> st2(st);
    std::cout << st.get() << " ";
    std::cout << st.isFull() << "\n";
    st2.pop();
    std::cout << st2.get() << " ";
    std::cout << st2.isFull() << "\n";
    std::cout << "\n";
    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    std::cout << "\n";
    std::cout << st.isEmpty() << "\n";
    while (!st2.isEmpty())
        std::cout << st2.pop() << " ";
    return 0;
}
