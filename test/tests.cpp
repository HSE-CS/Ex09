// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<char> st(5);
    st.push('a');
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    EXPECT_EQ(0, st.get());
}

TEST(MyStackTest, test4) {
    MyStack<double> st(5);
    for (int i = 0; i < 5; i++)
        st.push(i * 1.2);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
    MyStack<std::string> st(10);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<char> st(10);
    st.push('a');
    st.push('b');
    EXPECT_EQ('b', st.get());
}

TEST(MyStackTest, test7) {
    MyStack<char> st(10);
    st.push('a');
    st.push('b');
    MyStack<char> copy_st(st);
    EXPECT_EQ('b', copy_st.get());
}

TEST(MyStackTest, test8) {
    MyStack<char> st(10);
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('d');
    st.pop();
    EXPECT_EQ('c', st.get());
}

TEST(MyStackTest, test9) {
    MyStack<char> st(10);
    st.push('a');
    st.push('b');
    st.push('c');
    st.pop();
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test10) {
    MyStack<std::string> st(8);
    st.push("C++");
    st.get();
    EXPECT_EQ(false, st.isEmpty());
}
