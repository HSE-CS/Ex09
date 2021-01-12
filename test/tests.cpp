// Copyright 2021 Artem Danyaev

#include "MyStack.h"
#include <gtest/gtest.h>

TEST(MyStackTest, test1) {
  MyStack<int> st(10);
  EXPECT_FALSE(st.isFull());
}
TEST(MyStackTest, test2) {
  MyStack<int> st(10);
  EXPECT_TRUE(st.isEmpty());
}
TEST(MyStackTest, test3) {
  MyStack<int> st(3);
  st.push(2);
  st.push(2);
  st.push(4);
  EXPECT_TRUE(st.isFull());
}
TEST(MyStackTest, test4) {
  MyStack<int> st(10);
  st.push(2);
  EXPECT_FALSE(st.isFull());
}
TEST(MyStackTest, test5) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(4);
  EXPECT_EQ(4, st.get());
}
TEST(MyStackTest, test6) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(4);
  st.pop();
  EXPECT_EQ(2, st.get());
}
TEST(MyStackTest, test7) {
  MyStack<int> st(2);
  st.push(1);
  st.push(2);
  st.push(4);
  EXPECT_FALSE(st.isFull());
}
TEST(MyStackTest, test8) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(4);
  st.pop();
  st.pop();
  EXPECT_EQ(1, st.pop());
}
TEST(MyStackTest, test9) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.pop();
  st.pop();
  EXPECT_TRUE(st.isEmpty());
}
TEST(MyStackTest, test10) {
  MyStack<int> st(2);
  st.push(1);
  st.push(2);
  st.push(4);
  st.push(8);
  EXPECT_TRUE(st.isFull());
}