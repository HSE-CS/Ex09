// Copyright 2021 Shatilov Victor

#include "MyStack.h"

int main() {
    MyStack<int> st(5);

    st.push(54664);
    st.push(434234);
    st.push(1234545);
    st.push(545556346);
    st.push(1545);

    while (!st.isEmpty()) std::cout << st.pop() << " ";

    return 0;
}
