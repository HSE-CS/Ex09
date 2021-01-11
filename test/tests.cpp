// Copyright 2020 GHA Test Team
#include <gtest/gtest.h>

#include <string>

#include "MyStack.h"

TEST(MyStackTest, test1) {
  Stack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  Stack<int> st(5);
  st.push(1);
  st.push(1);
  st.push(1);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  Stack<int> st(3);
  st.push(1);
  st.push(1);
  st.push(1);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  Stack<int> st(3);
  st.push(1);
  st.push(1);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
  Stack<int> st(3);
  st.push(5);
  EXPECT_EQ(5, st.get());
}

TEST(MyStackTest, test6) {
  Stack<int> st(3);
  st.push(5);
  Stack<int> st2(st);
  EXPECT_EQ(5, st2.get());
}

TEST(MyStackTest, test7) {
  Stack<int> st(3);
  st.push(5);
  Stack<int> st2(st);
  EXPECT_EQ(5, st2.pop());
}

TEST(MyStackTest, test8) {
  Stack<char> st(3);
  st.push('k');
  EXPECT_EQ('k', st.get());
}

TEST(MyStackTest, test9) {
  Stack<char> st(4);
  st.push('k');
  Stack<char> st2(st);
  EXPECT_EQ('k', st2.get());
}

TEST(MyStackTest, test10) {
  Stack<char> st(3);
  st.push('k');
  Stack<char> st2(st);
  EXPECT_EQ('k', st2.pop());
}
