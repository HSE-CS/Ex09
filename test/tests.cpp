// Copyright 2020 GHA Test Team
#include <gtest/gtest.h>
#include "MyStack.h"
//#include "../Ex09/MyStack.h"
//#include "pch.h"
#include <string>


TEST(MyStackTest, test1) {
  MyStack<int> st;
  EXPECT_EQ(NULL, st.pop());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(3);
  EXPECT_EQ(3, st.pop());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(5);
  EXPECT_EQ(5, st.get());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(1);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(1);
  st.push(1);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(10);
  st.push(1);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.push(3);
  st.pop();
  st.pop();
  EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.pop();
  st.pop();
  EXPECT_EQ(NULL, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.pop();
  st.pop();
  st.push(3);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  MyStack<int> st1(&st);
  EXPECT_EQ(2, st1.get());
}

TEST(MyStackTest, test11) {
  MyStack<std::string> st(10);
  st.push("hello");
  st.push("world");
  EXPECT_EQ("world", st.get());
}

TEST(MyStackTest, test12) {
  MyStack<double> st(10);
  st.push(1.2);
  st.push(2.5);
  st.pop();
  EXPECT_DOUBLE_EQ(1.2, st.get());
}
