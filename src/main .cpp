#include "MyStack.h"

int main() {
    MyStack<char> my_st(6);
    my_st.push('a');
    my_st.push('f');
    my_st.push('b');
    my_st.push('d');
    my_st.push('g');
    my_st.push('c');
    my_st.push('e');
    std::cout << my_st.getSize() << " ";
    return 0;
}
