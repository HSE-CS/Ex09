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
st.push('b');
EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test3) {
MyStack<int> st(2);
st.push(1);
st.push(3);
EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test4) {
MyStack<int> st(5);
EXPECT_EQ(false, st.isFull());
}
TEST(MyStackTest, test5) {
MyStack<int> st(5);
st.push(1);
st.push(15);
st.push(34);
st.push(2);
st.pop();
EXPECT_EQ(34, st.pop());
}
TEST(MyStackTest, test6) {
MyStack<int> st(5);
st.push(1);
st.push(15);
st.push(34);
st.push(2);
st.pop();
EXPECT_EQ(34, st.get());
}
TEST(MyStackTest, test7) {
MyStack<int> st(2);
st.push(1);
st.push(15);
st.push(34);
st.push(2);
EXPECT_EQ(15, st.pop());
}
TEST(MyStackTest, test8) {
MyStack<int> st(5);
EXPECT_EQ(-1, st.pop());
}
TEST(MyStackTest, test9) {
MyStack<int> st(5);
EXPECT_EQ(-1, st.get());
}
TEST(MyStackTest, test10) {
MyStack<int> st(2);
st.push(1);
st.push(15);
st.push(34);
st.push(2);
EXPECT_EQ(15, st.get());
}
