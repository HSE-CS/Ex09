//  Copyright © 2021 Ksuvot. All rights reserved.
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(2);
  st.push(10);
  st.push(3);
  st.pop();
  EXPECT_EQ(10, st.get());;
}

TEST(MyStackTest, test3) {
  MyStack<int> st(5);
  st.push(0);
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(0);
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test5) {
MyStack<int> st(6);
st.push(17);
st.push(15);
st.push(14);
st.push(12);
st.pop();
EXPECT_EQ(14, st.pop());
}

TEST(MyStackTest, test6) {
MyStack<int> st(3);
st.push(1);
st.push(15);
st.push(30);
st.pop();
EXPECT_EQ(15, st.get());
}

TEST(MyStackTest, test7) {
MyStack<int> st(7);
MyStack<int> st_1(st);
EXPECT_EQ(st_1.pop(), 0);
}

TEST(MyStackTest, test8) {
MyStack<int> st(8);
st.push(8);
st.get();
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
MyStack<int> st(9);
EXPECT_EQ(0, st.pop());
}

TEST(MyStackTest, test10) {
MyStack<int> st(10);
st.push(11);
st.push(12);
st.push(13);
st.push(14);
st.pop();
EXPECT_EQ(13, st.get());
}
