#include "../include/MyStack.h"
#include <cstring>
#include <gtest/gtest.h>

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	st.push(12);
	st.pop();
	EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(1);
	st.push(12);
	EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(1);
	st.push(12);
	EXPECT_EQ(12, st.get());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(1);
	st.push(12);
	st.push(34);
	EXPECT_EQ(34, st.get());
}

TEST(MyStackTest, test1) {
	MyStack<int> st(1);
	st.push(2112);
	st.pop();
	EXPECT_EQ(true, st.isEmpty());
}