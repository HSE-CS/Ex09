// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>

#include <string>

#include "MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> st(1);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(1);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(1);
  st.push(10);
  st.pop();
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(1);
  st.push(10);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(10, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(1);
  st.push(10);
  EXPECT_EQ(false, st.isFull());
}
