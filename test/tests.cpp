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
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(2);
  st.push(0); st.push(1);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(2);
  st.push(0); st.push(1);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(0);
  EXPECT_EQ(0, st.get());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(5);
  st.push(0);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}


TEST(MyStackTest, test7) {
  MyStack<int> st(5);
  for(int i = 0; i < 3; i++){
	  st.push(i);
  }
  st.pop();
  EXPECT_EQ(false, st.isEmpty());
}


TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  for(int i = 0; i < 3; i++){
	  st.push(i);
  }
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(5);
  for(int i = 0; i < 3; i++){
	  st.push(i);
  }
  st.pop();
  EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(5);
  for(int i = 0; i < 3; i++){
	  st.push(i);
  }
  EXPECT_EQ(2, st.pop());
}


TEST(MyStackTest, test11) {
  MyStack<int> st(5);
  for(int i = 0; i < 5; i++){
	  st.push(i);
  }
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test12) {
  MyStack<int> st(5);
  for(int i = 0; i < 3; i++){
	  st.push(i);
  }
  MyStack<int> st2(st);
  EXPECT_EQ(2, st2.get());
}


