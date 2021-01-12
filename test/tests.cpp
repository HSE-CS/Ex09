// Copyright 2021 Andrey Bakurskii
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(3);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(3);
  st.push(12);
  EXPECT_EQ(10, st.get());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  st.pop();
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  st.push(11);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(3);
  st.push(12);
  st.push(10);
  MyStack<int> st2(2);
  st2.push(12);
  st2.push(10);
  EXPECT_EQ(false, st2.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(3);
  EXPECT_EQ(NULL, st.get());
}
