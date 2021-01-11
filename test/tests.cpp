// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include <string>
#include "MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(22);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(22);
  EXPECT_EQ(22, st.get());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(22);
  st.push(22);
  st.push(22);
  st.push(22);
  st.push(22);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(22);
  st.push(22);
  st.push(22);
  st.push(22);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(3, st.pop());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  st.push(3);
  st.pop();
  st.pop();
  EXPECT_EQ(1, st.pop());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  st.push(12);
  MyStack st2(st);
  EXPECT_EQ(12, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<double> st(5);
  st.push(12.2);
  EXPECT_EQ(12.2, st.get());
}

TEST(MyStackTest, test10) {
  MyStack<std::string> st(3);
  st.push("Testik");
  EXPECT_EQ("Testik", st.pop());
}
