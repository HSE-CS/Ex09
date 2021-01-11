// Copyright 2021 Kuznetsov Mikhail
#include "gtest/gtest.h"
#include "MyStack.h"
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(16);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<std::string> st(5);
  st.push("New Year");
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  for(int i = 0; i < 5; i++)
    st.push(i);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(16);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<std::string> st(10);
  st.push("Happy");
  st.push("New");
  st.push("Year");
  EXPECT_EQ("Year", st.get());
}

TEST(MyStackTest, test6) {
  MyStack<std::string> st(10);
  st.push("Happy");
  st.push("New");
  st.push("Year");
  MyStack<std::string> new_st(st);
  EXPECT_EQ("Year", new_st.get());
}

TEST(MyStackTest, test7) {
  MyStack<std::string> st(10);
  st.push("Happy");
  st.push("New");
  st.push("Year");
  EXPECT_EQ("Year", st.pop());
}

TEST(MyStackTest, test8) {
  MyStack<std::string> st(10);
  st.push("Happy");
  st.push("New");
  st.push("Year");
  st.pop();
  EXPECT_EQ("New", st.get());
}

TEST(MyStackTest, test9) {
  MyStack<char> st(8);
  for (char c = 'a'; c < 'a' + 8; c++)
    st.push(c);
  while(!st.isEmpty())
    st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(4);
  EXPECT_EQ(0, st.get());
}
