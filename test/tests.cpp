#include "../include/MyStack.h"
#include <cstring>
#include <gtest/gtest.h>

TEST(MyStackTest, test1) {
	MyStack<int> st(10);
	EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
	MyStack<int> st(10);
	st.push(12);
	st.pop();
	EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test4) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
	MyStack<int> st(1);
	st.push(12);
	EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test6) {
	MyStack<int> st(1);
	st.push(12);
	EXPECT_EQ(12, st.get());
}

TEST(MyStackTest, test7) {
	MyStack<int> st(10);
	EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test8) {
	MyStack<int> st(10);
	st.push(12);
	EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
	MyStack<int> st(1);
	st.push(12);
	st.push(34);
	EXPECT_EQ(34, st.get());
}

TEST(MyStackTest, test10) {
	MyStack<int> st(1);
	st.push(2112);
	st.pop();
	EXPECT_EQ(true, st.isEmpty());
}
