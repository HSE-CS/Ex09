// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(10);
  st.push(20);
  st.push(30);
  EXPECT_EQ(30, st.get());
  EXPECT_EQ(30, st.pop());
  EXPECT_EQ(20, st.get());
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(10);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(10);
  EXPECT_EQ(false, st.isFull());
  st.push(20);
  EXPECT_EQ(false, st.isFull());
  st.push(30);
  EXPECT_EQ(false, st.isFull());
  st.push(40);
  EXPECT_EQ(false, st.isFull());
  st.push(50);
  EXPECT_EQ(true, st.isFull());
}


TEST(MyStackTest, test5) {
  MyStack<int> st(3);
  st.push(10);
  EXPECT_EQ(false, st.isFull());
  st.push(20);
  EXPECT_EQ(false, st.isFull());
  st.push(30);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(3);
  st.push(10);
  st.push(20);
  st.push(30);
  EXPECT_EQ(30, st.pop());
  EXPECT_EQ(20, st.pop());
  EXPECT_EQ(10, st.pop());
}


TEST(MyStackTest, test7) {
  MyStack<std::string> st(3);
  st.push("apple");
  st.push("banana");
  st.push("juice");
  EXPECT_EQ(true, st.isFull());
  EXPECT_EQ(false, st.isEmpty());
  EXPECT_EQ("juice", st.pop());
  EXPECT_EQ("banana", st.pop());
  EXPECT_EQ("banana", st.pop());
  EXPECT_EQ("apple", st.pop());
  EXPECT_EQ(true, st.isEmpty());
}


TEST(MyStackTest, test8) {
  MyStack<bool> st(3);
  st.push(true);
  st.push(true);
  st.push(false);
  EXPECT_EQ(false, st.pop());
  EXPECT_EQ(true, st.pop());
  EXPECT_EQ(true, st.pop());
}



TEST(MyStackTest, test9) {
  MyStack<int16> st(3);
  st.push(25);
  st.push(50);
  st.push(-10);
  EXPECT_EQ(-10, st.pop());
  EXPECT_EQ(50, st.pop());
  EXPECT_EQ(25, st.pop());
}



TEST(MyStackTest, test10) {
  MyStack<int64> st(3);
  st.push(1000);
  st.push(2000);
  st.push(3000);
  EXPECT_EQ(3000, st.pop());
  EXPECT_EQ(2000, st.pop());
  EXPECT_EQ(1000, st.pop());
  EXPECT_EQ(true, st.isFull());
  EXPECT_EQ(false, st.isEmpty());
}

