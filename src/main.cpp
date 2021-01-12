//  Copyright 2021 AndreyBakurskii

#include "MyStack.h"

int main() {
    MyStack<int> st(3);
    st.push(34);
    st.push(1673);
    st.push(123);

    while (!st.isEmpty()) std::cout << st.pop() << " ";

    return 0;
}
