// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(3);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(1);
    st.push(8);
    EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test3) {
    MyStack<int> st(2);
    st.push(228);
    EXPECT_EQ(228,st.get());
}
TEST(MyStackTest, test4) {
    MyStack<double> st(4);
    st.push(2.228);
    st.push(1.337);
    st.pop();
    st.push(1.437);
    EXPECT_EQ(1.437,st.get());
}
TEST(MyStackTest, test5) {
    MyStack<double> st(1);
    st.push(1.8);
    EXPECT_EQ(1.8, st.get());
}
TEST(MyStackTest, test6) {
    MyStack<char> st(3);
    st.push('h');
    st.push('y');
    st.push('p');
    EXPECT_EQ('p', st.get());
}
TEST(MyStackTest, test7) {
    MyStack<char> st(3);
    st.push('h');
    st.push('y');
    st.pop();
    st.push('p');
    st.pop();
    EXPECT_EQ('h', st.get());
}
TEST(MyStackTest, test8) {
    MyStack<std::string> st(4);
    st.push("Hi");
    st.pop();
    st.push("Welcome");
    EXPECT_EQ("Welcome", st.get());
}
TEST(MyStackTest, test9) {
    MyStack<int> st(4);
    st.push(8);
    st.push(3);
    st.pop();
    st.pop();
    EXPECT_EQ(false, st.isFull());
}
TEST(MyStackTest, test10) {
    MyStack<int> st(4);
    st.push(8);
    st.push(3);
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}
