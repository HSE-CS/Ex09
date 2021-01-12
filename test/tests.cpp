// Copyright 2021 Krissupervizz
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<char> st(4);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
	MyStack<int> st(5);
	st.push(2);
	EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test3) {
	MyStack<int> st(2);
	st.push(1);
	st.push(3);
	EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test4) {
	MyStack<int> st(5);
	EXPECT_EQ(false, st.isFull());
}
TEST(MyStackTest, test5) {
	MyStack<int> st(5);
	st.push(2);
	st.push(4);
	st.pop();
	EXPECT_EQ(2, st.pop());
}
TEST(MyStackTest, test6) {
	MyStack<int> st(5);
	st.push(2);
	st.push(4);
	st.pop();
	EXPECT_EQ(2, st.get());
}
TEST(MyStackTest, test7) {
	MyStack<int> st(5);
	st.push(2);
	st.push(4);
	EXPECT_EQ(4, st.get());
}
TEST(MyStackTest, test8) {
	MyStack<int> st(5);
	EXPECT_EQ(-1, st.pop());
}
TEST(MyStackTest, test9) {
	MyStack<int> st(5);
	EXPECT_EQ(-1, st.get());
}
TEST(MyStackTest, test10) {
	MyStack<int> st(1);
	st.push(2);
	st.push(4);
	EXPECT_EQ(2, st.get());
}
