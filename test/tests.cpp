// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(3);
  st.push(1);
  st.push(2);
  st.push(3);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(55);
  st.push(10);
  st.push(20);
  st.pop();
  EXPECT_EQ(10, st.get());
}

TEST(MyStackTest, test5) {
  MyStack<std::string> st(5);
  st.push("one");
  st.push("two");
  st.push("three");
  st.pop();
  EXPECT_EQ("two", st.pop());
}

TEST(MyStackTest, test6) {
  MyStack<std::string> st1(5);
  st1.push("one");
  st1.push("two");
  st1.push("three");
  MyStack<std::string> st2(st1);
  EXPECT_EQ(st1.get(), st2.get());
}

TEST(MyStackTest, test7) {
  MyStack<char> st(6);
  st.push('k');
  st.push('c');
  st.push('a');
  st.push('t');
  st.push('s')
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test8) {
  MyStack<char> st(6);
  st.push('k');
  st.push('c');
  st.push('a');
  st.push('t');
  st.push('s');
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test9) {
  MyStack<char> st(6);
  st.push('k');
  st.push('c');
  st.push('a');
  st.push('t');
  st.push('s')
  EXPECT_EQ('s', st.get());
}

TEST(MyStackTest, test10) {
  MyStack<char> st(6);
  st.push('k');
  st.push('c');
  st.push('a');
  st.push('t');
  st.push('s')
  EXPECT_EQ('s', st.pop());
}

TEST(MyStackTest, test11) {
  MyStack<char> st(6);
  st.push('k');
  st.push('c');
  st.push('a');
  st.push('t');
  st.push('s');
  MyStack<char> st1(st);
  st1.push('1');
  EXPECT_EQ(true, st.isFull());
}
