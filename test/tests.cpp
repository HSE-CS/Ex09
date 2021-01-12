// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(13);
    st.push(11);
    EXPECT_EQ(11, st.pop());
    EXPECT_EQ(13, st.pop());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(13);
    st.push(11);
    EXPECT_EQ(11, st.get());
    EXPECT_EQ(11, st.get());
}

TEST(MyStackTest, test4) {
    MyStack<int> st(2);
    st.push(13);
    st.push(11);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(2);
    st.push(13);
    st.push(11);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(5);
    st.push(10);
    MyStack<int> st1(st);
    EXPECT_EQ(10, st1.pop());
}

TEST(MyStackTest, test7) {
    MyStack<double> st(5);
    st.push(12.3)
    EXPECT_DOUBLE_EQ(12.3, st.pop());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(5);
    st.push(10);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test9) {
    MyStack<std::string> st(5);
    st.push("Hello");
    st.push("World");
    st.push("!");
    EXPECT_EQ("!", st.pop());
}

TEST(MyStackTest, test10) {
    MyStack<bool> st(5);
    st.push(true);
    st.push(false);
    st.push(true);
    EXPECT_EQ(true, st.get());
}

TEST(MyStackTest, test11) {
    MyStack<char> st(5);
    st.push('o');
    st.push('l');
    st.push('l');
    st.push('e');
    st.push('H');
    EXPECT_EQ('H', st.get());
}

