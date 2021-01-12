// Copyright 2021 Uskova
#include <gtest/gtest.h>
#include "MyStack.h"

TEST(StackTest, test1) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(2, st.get());
}

TEST(StackTest, test2) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(true, st.isFull());
}

TEST(StackTest, test3) {
    MyStack<int> st(2);
    st.push(1);
    EXPECT_EQ(false, st.isFull());
}

TEST(StackTest, test4) {
    MyStack<int> st(2);
    st.push(1);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(StackTest, test5) {
    MyStack<int> st(4);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(StackTest, test6) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    st.pop();
    EXPECT_EQ(1, st.pop());
}

TEST(StackTest, test7) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    EXPECT_EQ(-1, st.pop());
}

TEST(StackTest, test8) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(-1, st.push(3));
}

TEST(StackTest, test9) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    EXPECT_EQ(0, st.push(3));
}

TEST(StackTest, test10) {
    MyStack<char> st(2);
    st.push('a');
    st.push('b');
    EXPECT_EQ('b', st.get());
}

TEST(StackTest, test11) {
    MyStack<char> st(2);
    st.push('c');
    MyStack<char> st1(st);
    EXPECT_EQ('c', st1.get());
}

TEST(StackTest, test12) {
    MyStack<char> st(2);
    st.push('d');
    MyStack<char> st1(st);
    EXPECT_EQ('d', st1.pop());
}
