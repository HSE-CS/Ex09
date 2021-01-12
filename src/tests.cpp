//
//  tests.cpp
//  
//
//  Created by Даниил Иванов on 13.01.2021.
//

#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(4);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(4);
  EXPECT_EQ(4, st.get());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(5);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(5);
  st.pop();
  st.push(3);
  st.pop();
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(1);
  st.push(5);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(5);
  st.push(5);
  st.push(2);
  st.pop();
  EXPECT_EQ(5, st.get());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  st.push(5);
  st.push(2);
  st.pop();
  st.pop();
  st.push(2);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(5);
  st.push(5);
  st.pop();
  st.push(4);
  st.push(3);
  st.push(2);
  st.push(1);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(5);
  EXPECT_EQ(false, st.isFull());
}
