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
  st.push(1);
  st.push(1);
  st.push(1);
  st.push(1);
  st.push(1);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(1);
  st.push(1);
  st.push(1);
  st.push(1);
  st.pop();
  st.pop();
  st.pop();
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(1);
  st.push(1);
  st.push(1);
  st.push(5);
  int x = st.pop();
  EXPECT_EQ(5, x);
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(1);
  st.push(1);
  st.push(2);
  st.push(5);
  st.pop();
  int x = st.pop();
  EXPECT_EQ(2, x);
}

TEST(MyStackTest, test6) {
  MyStack<char> st(5);
  st.push('z');
  EXPECT_EQ('z', st.get());
}

TEST(MyStackTest, test7) {
  MyStack<char> st(5);
  st.push('z');
  st.push('a');
  EXPECT_EQ('a', st.get());
}

TEST(MyStackTest, test8) {
  MyStack<char> st(5);
  st.push('z');
  st.push('a');
  MyStack<char> st_(st);
  EXPECT_EQ('a', st_.get());
}

TEST(MyStackTest, test9) {
  MyStack<char> st(5);
  st.push('z');
  st.push('a');
  MyStack<char> st_(st);
  EXPECT_EQ('a', st_.pop());
}

TEST(MyStackTest, test10) {
  MyStack<char> st(5);
  st.push('z');
  st.push('a');
  MyStack<char> st_(st);
  st_.push('z');
  st_.push('a');
  st_.push('w')
  EXPECT_EQ(true, st_.isFull());
}
