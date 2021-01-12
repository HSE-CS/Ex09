//copyright 2021 Elizaveta D.
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
	MyStack<int> st(2);
	EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
	MyStack<int> st(3);
	st.push(2);
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
	MyStack<int> st(2);
	st.push(3);
	st.push(4);
	EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
	MyStack<int> st(8);
	st.push(3);
	st.push(4);
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
	MyStack<int> st(3);
	st.push(3);
	st.push(4);
	EXPECT_EQ(4, st.get());
}

TEST(MyStackTest, test6) {
	MyStack<int> st(5);
	st.push(3);
	st.push(4);
	st.push(2);
	st.push(5);
	st.pop();
	EXPECT_EQ(2, st.get());
}

TEST(MyStackTest, test7) {
	MyStack<int> st(5);
	st.push(3);
	st.push(4);
	st.push(2);
	st.push(5);
	st.pop();
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
	MyStack<int> st(5);
	st.push(3);
	st.push(4);
	st.push(2);
	st.push(5);
	st.pop();
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
	MyStack<int> st(5);
	st.push(3);
	st.push(4);
	st.push(2);
	st.push(5);
	st.pop();
	st.pop();
	EXPECT_EQ(4, st.get());
}

TEST(MyStackTest, test10) {
	MyStack<int> st(5);
	st.push(3);
	st.push(4);
	st.pop();
	EXPECT_EQ(3, st.get());
}