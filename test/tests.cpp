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
MyStack<int> st(1);
st.push(rand());
EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
MyStack<int> st(1);
st.push(rand());
EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
MyStack<int> st(2);
st.push(123);
st.push(rand());
st.pop();
EXPECT_EQ(123, st.pop());
}

TEST(MyStackTest, test6) {
MyStack<std::string> st(1);
st.push("123");
EXPECT_STREQ("123", st.pop());
}

TEST(MyStackTest, test7) {
MyStack<std::string> st(1);
st.push("123");
EXPECT_STREQ("123", st.get());
}

TEST(MyStackTest, test8) {
MyStack<std::string> st(10);
st.push("123");
EXPECT_STREQ("123", st.get());
}

TEST(MyStackTest, test9) {
MyStack<std::string> st(10);
st.push("123");
EXPECT_STREQ("123", st.pop());
}

TEST(MyStackTest, test10) {
MyStack<std::string> st(10);
st.push("123");
st.push("321");
MyStack<std::string> st2(st);
EXPECT_STREQ("321", st2.pop());
EXPECT_STREQ("123", st2.pop());
}
