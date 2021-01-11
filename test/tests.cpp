// Copyright 2021 Ex09 TiNa
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
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(3);
  EXPECT_EQ(3, st.get());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  st.pop();
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  st.pop();
  st.pop();
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  MyStack<int> st2(st);
  EXPECT_EQ(2, st2.pop());
}

TEST(MyStackTest, test9) {
  MyStack<char> st(5);
  st.push('a');
  EXPECT_EQ('a', st.get());
}

TEST(MyStackTest, test10) {
  MyStack<char> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  MyStack<char> st2(st);
  st.pop();
  EXPECT_EQ(false, st2.isFull());
}
