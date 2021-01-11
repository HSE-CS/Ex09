//
// Created by stoja on 11.01.2021.
#include "MyStack.h"
#include <iostream>

int main(){
    MyStack<int> st(5);
    st.push(124);
    const MyStack<int> &st2 = st;
    std::cout<<st2.get();


}