// Copyright 2021 Smirnov Grigory
#include "MyStack.h"
#include <gtest/gtest.h>
TEST(TestEmpty, test1) {
  MyStack<int> st(2);
  EXPECT_EQ(st.isEmpty(), 1);
}

TEST(TestEmpty, test2) {
  MyStack<char> st(2);
  st.push('a');
  EXPECT_EQ(st.isEmpty(), 0);
  EXPECT_EQ(st.get(), 'a');
}

TEST(TestEmpty, test3) {
  MyStack<char> st(2);
  st.push('a');
  st.push('b');
  MyStack <char> cp(st);
  EXPECT_EQ(cp.get(), 'b');
  cp.pop();
  cp.pop();
  EXPECT_EQ(cp.isEmpty(), 1);
  EXPECT_EQ(st.isFull(), 1);
}

TEST(TestFull, test1) {
  MyStack<int> st(1);
  EXPECT_EQ(st.isFull(), 0);
  st.push(100);
  EXPECT_EQ(st.isFull(), 1);
}

TEST(TestFull, test2) {
  MyStack<char> st(2);
  st.push('a');
  st.push('b');
  EXPECT_EQ(st.isFull(), 1);
  EXPECT_EQ(st.get(), 'b');
}

TEST(TestGet, test1) {
  MyStack<double> st(2);
  st.push(2.34);
  EXPECT_EQ(st.isFull(), 0);
  EXPECT_EQ(st.get(), 2.34);
}

TEST(TestPop, test1) {
  MyStack<double> st(50);
  MyStack<double> cp(st);
  st.push(2.34);
  EXPECT_EQ(st.isFull(), 0);
  EXPECT_EQ(st.pop(), 2.34);
  EXPECT_EQ(cp.isEmpty(), 1);
}

TEST(TestPop, test2) {
  MyStack<double> st(50);
  MyStack<double> cp(st);
  st.push(2.34);
  cp.push(2.1);
  cp.push(2.2);
  cp.push(2.3);
  cp.pop();
  EXPECT_EQ(st.pop(), 2.34);
  EXPECT_EQ(cp.get(), 2.2);
  EXPECT_EQ(cp.pop(), 2.2);
}

TEST(TestPop, test3) {
  MyStack<double> st(10);
  MyStack<double> cp(st);
  st.push(2.34);
  cp.push(2.1);
  EXPECT_EQ(st.pop(), 2.34);
  EXPECT_EQ(st.isEmpty(), 1);
  EXPECT_EQ(cp.pop(), 2.1);
  EXPECT_EQ(st.isEmpty(), 1);
}

TEST(TestPop, test4) {
  MyStack<double> st(1);
  MyStack<double> cp(st);
  st.push(2.34);
  cp.push(2.1);
  EXPECT_EQ(st.isFull(), 1);
  EXPECT_EQ(st.pop(), 2.34);
  EXPECT_EQ(cp.pop(), 2.1);
}
