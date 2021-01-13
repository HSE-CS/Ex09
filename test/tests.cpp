// Copyright 2021 Ilya Tatsenko
#include "MyStack.h"
#include <gtest/gtest.h>

#include <string>

TEST(stack_test, test1) {
    MyStack<int> st1(3);
    st1.push(1);
    EXPECT_EQ(1, st1.get());
}

TEST(stack_test, test2) {
    MyStack<int> st(3);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(stack_test, test3) {
    MyStack<int> st(11);
    st.push(3);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(stack_test, test4) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    EXPECT_EQ(true, st.isFull());
}

TEST(stack_test, test5) {
    MyStack<std::string> st(3);
    st.push("ok");
    EXPECT_EQ(false, st.isFull());
}

TEST(stack_test, test6) {
    MyStack<std::string> st(3);
    st.push("jjj");
    st.push("hello");
    EXPECT_EQ("hello", st.get());
}

TEST(stack_test, test7) {
    MyStack<char> st1(3);
    st1.push('=');
    st1.push('3');
    EXPECT_EQ('3', st1.pop());
}

TEST(stack_test, test8) {
    MyStack<std::string> st1(9);
    st1.push("jjh");
        st1.push("hse");
    st1.push("class c++");
    EXPECT_EQ("class c++", st1.pop());
}

TEST(stack_test, test9) {
    MyStack<int> st1(3);
    st1.push(1);
    st1.pop();
    st1.push(2);
    EXPECT_EQ(1, st1.pop());
}