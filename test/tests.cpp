// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st;
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  MyStack<int> st2 = st;
  EXPECT_EQ(true, st2.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  st.push(10);
  EXPECT_EQ(10, st.get());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  st.push(10);
  EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  st.push(10);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(3);
  st.push(rand_r());
  st.push(rand_r());
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(5);
  EXPECT_EQ(false, st.isFull());
}

