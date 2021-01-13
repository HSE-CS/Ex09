// Copyright 2021 Shirokov Alexander

#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(7);
  st.push(1);
  EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(7);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(7);
  st.push(2);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(1);
  st.push(3);
  EXPECT_EQ(true, st.isFull());
}  

TEST(MyStackTest, test5) {
  MyStack<char> st(3);
  for (int i = 0; i < 3; i++)
    st.push('c');
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<std::string> st(5);
  st.push("C");
  st.push("+");
  st.push("+");
  EXPECT_EQ("+", st.get());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(7);
  st.push(1);
  EXPECT_EQ(1, st.pop());
}

TEST(MyStackTest, test8) {
  MyStack<std::string> st(7);
  st.push("Hello ");
  st.push("world");
  EXPECT_EQ("world", st.pop());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(5);
  st.push(1);
  st.push(2);
  st.pop();
  EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(5);
  st.push(3);
  st.push(4);
  st.push(5);
  st.pop();
  EXPECT_EQ(4, st.pop());
}