#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<float> st(2);
    st.push(1.337);
    std::cout << st.isFull() << std::endl;
    std::cout << std::endl;
    MyStack<char> st1(5);
    st1.push('M');
    st1.push('O');
    st1.push('N');
    st1.push('E');
    st1.push('Y');
    while (!st1.isEmpty()) {
       std::cout << st1.pop() << std::endl;
    }
    std::cout << std::endl;
    MyStack<int> st2(5);
    st2.push(228);
    std::cout << st2.get() << std::endl;
    std::cout << st2.isEmpty() << std::endl;
    return 0;
}
