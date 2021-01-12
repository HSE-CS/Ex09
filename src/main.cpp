#include <iostream>
#include "MyStack.h"
using namespace std;

int main() {
    MyStack<float> st(2);
    st.push(1.337);
    cout << st.isFull() << endl;
    cout << endl;
    MyStack<char> st1(5);
    st1.push('M');
    st1.push('O');
    st1.push('N');
    st1.push('E');
    st1.push('Y');
    while (!st1.isEmpty()) {
       cout << st1.pop() << endl;
    }
    cout << endl;
    MyStack<int> st2(5);
    st2.push(228);
    cout << st2.get() << endl;
    cout << st2.isEmpty() << endl;
    return 0;
}
