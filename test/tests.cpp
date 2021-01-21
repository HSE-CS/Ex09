// Copyright 2021 Grachev Alexander

#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(1);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(1);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test4) {
    MyStack<int> st(5);
    st.push(1);
    MyStack<int> stt(3);
    st.push(2);
    EXPECT_EQ(2, stt.get());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(5);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(3);
    st.push(1);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test7) {
    MyStack<int> st(2);
    st.push(1);
    st.push(2);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(3);
    for (int i = 0; i < 3; i++)
    st.push(i);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(2);
    const MyStack<int> &st2 = st;
    EXPECT_EQ(true, st2.isEmpty());
}

TEST(MyStackTest, test10) {
    MyStack<int> st(2);
    const MyStack<int> &st2 = st;
    EXPECT_EQ(false, st2.isFull());
}


