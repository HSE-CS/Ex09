// Copyright 2021 sccc
#include <string>
#include "gtest/gtest.h"
#include "MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<std::string> st(10);
  st.push("111");
  st.push("222");
  st.push("333");
  EXPECT_EQ("333", st.get());
}

TEST(MyStackTest, test2) {
  MyStack<std::string> st(10);
  st.push("111");
  st.push("222");
  st.push("333");
  EXPECT_EQ("333", st.pop());
}

TEST(MyStackTest, test3) {
  MyStack<std::string> st(10);
  st.push("111");
  st.push("222");
  st.push("333");
  st.pop();
  EXPECT_EQ("222", st.get());
}


TEST(MyStackTest, test4) {
  MyStack<std::string> st(10);
  st.push("111");
  EXPECT_EQ(true, st.push("222"););
}

TEST(MyStackTest, test5) {
  MyStack<std::string> st(3);
  st.push("111");
  st.push("111");
  st.push("111");
  EXPECT_EQ(false, st.push("222"););
}

TEST(MyStackTest, test6) {
  MyStack<int> st(10);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(10);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(10);
  st.push(1);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(10);
  st.push(1);
  EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(true, st.isFull());
}






