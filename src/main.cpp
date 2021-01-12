#include "MyStack.h"
#include <iostream>
int main()
{
    MyStack<int> st(5);
    st.push(4);
    st.push(42);
    st.pop();
    std::cout << st.get();
    return 0;
}