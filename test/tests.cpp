// Copyright 2021 Igumnova Natasha
#include "MyStack.h"

#include <string>
#include "gtest/gtest.h"

TEST(StackTest, test1) {
    MyStack <int> st(10);
    st.push(10);
    st.push(1);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(StackTest, test2) {
    MyStack <int> st(10);
    st.push(2);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(StackTest, test3) {
    MyStack <int> st(10);
    st.push(100);
    EXPECT_EQ(100, st.get());
}

TEST(StackTest, test4) {
    MyStack <int> st(10);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(StackTest, test5) {
    MyStack <int> st(1);
    st.push(100);
    EXPECT_EQ(true, st.isFull());
}

TEST(StackTest, test6) {
    MyStack <int> st(10);
    st.push(100);
    EXPECT_EQ(false, st.isFull());
}

TEST(StackTest, test7) {
    MyStack <int> st(10);
    st.push(100);
    EXPECT_EQ(100, st.pop());
}

TEST(StackTest, test8) {
    MyStack <int> st(10);
    EXPECT_EQ(NULL, st.get());
}

TEST(StackTest, test9) {
    MyStack <int> st(10);
    st.push(100);
    MyStack <int> st2(st);
    EXPECT_EQ(100, st2.pop());
}

TEST(StackTest, test10) {
    MyStack <int> st(10);
    st.push(100);
    MyStack <int> st2(st);
    st.pop();
    EXPECT_EQ(false, st2.isEmpty());
}
