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
st.push(10);
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
MyStack<int> st(5);
st.push(1);
st.push(2);
EXPECT_EQ(2, st.get());
}

TEST(MyStackTest, test4) {
MyStack<int> st(5);
st.push(1);
st.push(2);
MyStack<int> st2(st);
EXPECT_EQ(2, st2.get());
}

TEST(MyStackTest, test5) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.pop();
EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test6) {
MyStack<char> st(5);
st.push(1);
st.push(2);
st.pop();
st.pop();
EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test7) {
MyStack<std::string> st(5);
st.push("abc");
st.get();
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test8) {
MyStack<std::string> st(5);
st.push("123");
EXPECT_EQ("123", st.get());
}

TEST(MyStackTest, test9) {
MyStack<char> st(5);
st.push(1);
st.push(2);
EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test10) {
MyStack<char> st(5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
EXPECT_EQ(true, st.isFull());
}
