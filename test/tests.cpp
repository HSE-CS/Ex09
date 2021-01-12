// Copyright 2020 ArinaMonicheva
#include "MyStack.h"
#include <gtest/gtest.h>

TEST(myStackTests, test1) {
  MyStack<int> st(10);
  EXPECT_EQ(false, st.isFull());
}

TEST(myStackTests, test2) {
  MyStack<double> st(2);
  st.push(3.45);
  EXPECT_EQ(3.45, st.get());
}

TEST(myStackTests, test3) {
  MyStack<double> st(2);
  st.push(3.45);
  EXPECT_EQ(3.45, st.pop());
}

TEST(myStackTests, test4) {
  MyStack<double> st(2);
  st.push(3.45);
  EXPECT_EQ(false, st.isFull());
}

TEST(myStackTests, test5) {
  MyStack<double> st(2);
  st.push(3.45);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(myStackTests, test6) {
  MyStack<int> st(2);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(myStackTests, test7) {
  MyStack<int> st(2);
  st.push(3);
  st.push(10);
  EXPECT_EQ(true, st.isFull());
}

TEST(myStackTests, test8) {
  MyStack<int> st(2);
  st.push(3);
  st.push(10);
  MyStack<int> st2(st);
  EXPECT_EQ(10, st2.get());
}

TEST(myStackTests, test9) {
  MyStack<int> st(2);
  MyStack<int> st2(st);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(myStackTests, test10) {
  MyStack<int> st(2);
  st.push(3);
  st.push(10);
  st.pop();
  EXPECT_EQ(3, st.pop());
}

TEST(myStackTests, test11) {
  MyStack<string> st(2);
  st.push("Hello");
  st.push("World");
  EXPECT_EQ("World", st.get());
}