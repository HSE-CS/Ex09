// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(10);
    st.push(10);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(10);
    st.push(10);
    EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test4) {
    MyStack<int> st(10);
    st.push(10);
    st.push(12);
    EXPECT_EQ(12, st.get());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(2);
    st.push(10);
    st.push(12);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(2);
    st.push(10);
    st.push(12);
    st.pop();
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test7) {
    MyStack<int> st(20);
    st.push(10);
    st.push(12);
    st.pop();
    EXPECT_EQ(12, st.pop());
    EXPECT_EQ(10, st.pop());
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(20);
    st.push(10);
    st.pop();
    st.push(12);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(20);
    st.push(10);
    st.push(12);
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test10) {
    MyStack<int> st(20);
    st.push(10);
    st.push(12);
    st.push(13);
    st.push(14);
    st.pop();
    st.pop();
    EXPECT_EQ(false, st.isEmpty());
    EXPECT_EQ(12, st.get());
    EXPECT_EQ(12, st.get());
    EXPECT_EQ(12, st.pop());
    EXPECT_EQ(10, st.get());
}
