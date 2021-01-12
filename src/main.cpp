// Copyright 2021 Bekusov Mikhail

#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<float>st(4);
    std::cout<<st.isEmpty()<<std::endl;

    st.push(11.11);
    std::cout<<st.get()<<std::endl;
    std::cout<<st.isEmpty()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.isEmpty()<<std::endl;

    st.push(1.1);
    st.push(2.2);
    st.push(3.3);
    std::cout<<st.isEmpty()<<std::endl;
    std::cout<<st.isFull()<<std::endl;
    st.push(4.4);
    std::cout<<st.isFull()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    st.push(4.4);

    MyStack <float> st1(st);
    while(!st1.isEmpty()){
        std::cout<<st1.pop()<<" ";
    }
    return 0;
}
