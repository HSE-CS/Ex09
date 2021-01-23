// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStack, test2) {
    MyStack<char> st(1);
    st('a')
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStack, test3) {
    MyStack<int> st(10);
    st.push(1);
    st.push(2);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStack, test4) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStack, test5) {
    MyStack<int> st(5);
    st.push(1);
    EXPECT_EQ(1, st.get());
}

TEST(MyStack, test8) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStack, test7) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.pop();
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStack, test6) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    EXPECT_EQ(2, st.get());
}

TEST(MyStack, test9) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.pop();
    EXPECT_EQ(1, st.get());
}

TEST(MyStack, test10) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.pop();
    st.push(55);
    EXPECT_EQ(55, st.get());
}

