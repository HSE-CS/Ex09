//  Copyright 2020 GHA created by Klykov Anton

#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<char> st('a');
    st.push('b');
    st.push('c');
    while(!st.isEmpty()) {
        std::cout << st.pop() << std::endl;
    }
    return 0;
}
