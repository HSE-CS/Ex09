// Copyright 2021 Bodrov Egor

#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(5);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(1);
    st.push(5);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
    MyStack<char> st(5);
    for (int i = 0; i < 5; i++)
        st.push('a');
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
    MyStack<std::string> st(5);
    st.push("Hello");
    st.push(" ");
    st.push("World!");
    EXPECT_EQ("World!", st.get());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(5);
    for (int i = 0; i < 4; i++)
        st.push(10);
    st.push(5);
    MyStack<int> s(st);
    EXPECT_EQ(5, s.get());
}

TEST(MyStackTest, test7) {
    MyStack<int> st(5);
    st.push(10);
    EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test8) {
    MyStack<std::string> st(5);
    st.push("One");
    st.push("Two");
    EXPECT_EQ("Two", st.pop());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(5);
    EXPECT_EQ(0, st.get());
}

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(0, st.pop());
}
