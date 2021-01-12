// Copyright 2021 Egor Trukhin
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

// Check default param
TEST(MyStackTest, test1) {
  MyStack<int> st;
  EXPECT_EQ(1, st.getSize());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(1);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(1);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(true, st.isFull());
}

// Check auto resize
TEST(MyStackTest, test6) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  EXPECT_EQ(6, st.getSize());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  EXPECT_EQ(4, st.getCount());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(10);
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  EXPECT_EQ(40, st.pop());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(10);
  st.push(10);
  st.push(20);
  st.pop();
  EXPECT_EQ(10, st.pop());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(10);
  st.push(10);
  st.push(20);
  st.pop();
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}
