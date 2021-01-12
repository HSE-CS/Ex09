// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test2) {
  MyStack<int> st(1);
  st.push(1);
  EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test3) {
  MyStack<char> st(2);
  st.push('R');
  EXPECT_EQ('R', st.pop());
}
TEST(MyStackTest, test4) {
  MyStack<float> st(2);
  st.push(1.5);
  st.push(1.3);
  EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test5) {
  MyStack<int> st(1);
  st.push(5);
  EXPECT_EQ(5, st.get());
}
TEST(MyStackTest, test6) {
  MyStack<float> st(3);
  st.push(1.3);
  st.push(1.4);
  st.pop();
  st.push(1.1);
  EXPECT_EQ(1.1, st.get());
}
TEST(MyStackTest, test7) {
  MyStack<std::string> st(20);
  st.push("Hello World!!!!");
  st.push("XMMMMM");
  st.pop();
  EXPECT_EQ("Hello World!!!!", st.pop());
}
TEST(MyStackTest, test8) {
  MyStack<std::string> st(32);
  st.push("Hello((((");
  EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test9) {
  MyStack<std::string> st(10);
  st.push("Hello 2.0");
  EXPECT_EQ(false, st.isFull());
}
TEST(MyStackTest, test10) {
  MyStack<int> st(10);
  st.push(1);
  st.push(2);
  st.pop();
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}
TEST(MyStackTest, test11) {
  MyStack<double > st(10);
  st.push(1.24);
  st.push(2.22);
  st.push(3.33);
  st.push(4.44);
  st.pop();
  EXPECT_EQ(3.33, st.pop());
}
