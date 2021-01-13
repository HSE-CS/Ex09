// Copyright 2020 GHA Test Team
// Copyright 13.12.20 KostinAndrej
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(228);
  EXPECT_EQ(228, st.get());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(228);
  EXPECT_EQ(228, st.pop());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(322);
  st.pop();
  st.push(228);
  EXPECT_EQ(228, st.get());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(5);
  st.push(228);
  st.push(322);
EXPECT_EQ(322, st.pop());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(1);
  st.push(123);
  st.push(228);
  EXPECT_EQ(123, st.get());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  st.push(228);
  st.push(322);
  st.get();
  st.pop();
  EXPECT_EQ(228, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(5);
  st.push(123);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(5);
  st.push(1);
  st.get();
  EXPECT_EQ(false, st.isEmpty());
}









