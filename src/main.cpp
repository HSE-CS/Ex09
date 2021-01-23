// Copyright Salakhov Ramazan
#include "MyStack.h"

using namespace std;
int main()
{
    MyStack<char> st(5);
    st.push('o');
    st.push('l');
    st.push('l');
    st.push('e');
    st.push('h');
    MyStack <char> st2(st);


    while (!st2.isEmpty())
        cout << st2.pop() << " ";
    return 0;
}
