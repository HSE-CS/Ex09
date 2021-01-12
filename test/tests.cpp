// Copyright 2021 mkhorosh
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test2) {
  MyStack<double> st(7);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(11);
  st.push(22);
  st.push(33);
  EXPECT_EQ(33, st.get());
  EXPECT_EQ(33, st.pop());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(11);
  st.push(22);
  st.push(33);
  EXPECT_EQ(33, st.pop());
  EXPECT_EQ(22, st.pop());
  EXPECT_EQ(11, st.pop());
}

TEST(MyStackTest, test5) {
  MyStack<int> st1(5);
  st1.push(11);
  st1.push(22);
  st1.push(33);
  MyStack<int> st2(st1);
  EXPECT_EQ(33, st2.get());
  EXPECT_EQ(33, st2.pop());
}

TEST(MyStackTest, test6) {
  MyStack<int> st1(5);
  st1.push(11);
  st1.push(22);
  st1.push(33);
  MyStack<int> st2(st1);
  EXPECT_EQ(33, st1.pop());
  EXPECT_EQ(22, st1.pop());
  EXPECT_EQ(11, st1.pop());
}

TEST(MyStackTest, test7) {
  MyStack<char> st(5);
  st.push('a');
  st.push('b');
  st.push('c');
  EXPECT_EQ('c', st.pop());
  EXPECT_EQ('b', st.pop());
  EXPECT_EQ('a', st.pop());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(10);
  st.push(100);
  st.get();
  EXPECT_EQ(100, st.pop());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(10);
  st.push(100);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(10);
  st.push(100);
  EXPECT_EQ(false, st.isEmpty());
}
