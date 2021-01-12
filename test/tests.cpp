// Copyright 2021 Tyulin Igor
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(12);
EXPECT_EQ(12, st.get());
}
TEST(MyStackTest, test3) {
MyStack<int> st(5);
st.push(12);
st.push(11);
EXPECT_EQ(11, st.get());
}
TEST(MyStackTest, test4) {
MyStack<int> st(5);
st.push(10);
st.push(18);
st.push(442);
st.pop();
EXPECT_EQ(18, st.get());
}
TEST(MyStackTest, test5) {
MyStack<int> st(1);
st.push(180);
EXPECT_EQ(180, st.get());
}
TEST(MyStackTest, test6) {
MyStack<int> st(2);
st.push(14);
EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test7) {
MyStack<int> st(2);
st.push(22);
EXPECT_EQ(false, st.isFull());
}
TEST(MyStackTest, test8) {
MyStack<int> st(2);
EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test9) {
MyStack<int> st(2);
const MyStack<int> &st2 = st;
EXPECT_EQ(true, st2.isEmpty());
}
TEST(MyStackTest, test10) {
MyStack<int> st(1);
st.push(22);
EXPECT_EQ(true, st.isFull());
}
