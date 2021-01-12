// Copyright 2021 Nikolaev Ivan
#include <gtest/gtest.h>
#include "MyStack.h"


TEST(MyStackTest, test1) {
    MyStack<int> st(2);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(2);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test4) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);

    EXPECT_EQ(2, st.pop());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    st.pop();
    EXPECT_EQ(1, st.pop());
}

TEST(MyStackTest, test7) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    MyStack<int> st2(st);
    st.push(4);
    st.push(5);
    EXPECT_EQ(2, st2.pop());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    MyStack<int> st2(st);
    st.push(4);
    st.push(5);
    st2.pop();
    EXPECT_EQ(1, st2.pop());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    EXPECT_EQ(3, st.get());
}

TEST(MyStackTest, test10) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.get();
    EXPECT_EQ(3, st.get());
}

TEST(MyStackTest, test11) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    EXPECT_EQ(2, st.get());
}

TEST(MyStackTest, test12) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test13) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    EXPECT_EQ(false, st.isEmpty());
}
