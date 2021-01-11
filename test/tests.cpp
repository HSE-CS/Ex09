// Copyright 2021 FOM
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStack, test_1) {
MyStack<int> st(8);
st.push(2);
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStack, test_2) {
MyStack<int> st(3);
st.push(28);
EXPECT_EQ(false, st.isFull());
}

TEST(MyStack, test_3) {
MyStack<int> st(4);
st.push(6);
st.push(5);
st.push(345);
st.push(9865);
EXPECT_EQ(true, st.isFull());
}

TEST(MyStack, test_4) {
MyStack<int> st(5);
EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStack, test_5) {
MyStack<int> st(3);
st.push(1);
st.push(3);
st.push(7);
st.pop();
EXPECT_EQ(false, st.isFull());
}

TEST(MyStack, test_6) {
MyStack<int> st(1);
st.push(10);
EXPECT_EQ(10, st.get());
}

TEST(MyStack, test_7) {
MyStack<int> st(2);
st.push(3);
st.push(8);
EXPECT_EQ(8, st.get());
}

TEST(MyStack, test_8) {
MyStack<int> st(2);
st.push(3);
st.push(8);
st.pop();
st.pop();
EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStack, test_9) {
MyStack<int> st(2);
st.push(2);
st.push(3);
st.pop();
EXPECT_EQ(false, st.isFull());
}

TEST(MyStack, test_10) {
MyStack<int> st(5);
st.push(4);
st.push(1);
st.push(1);
st.push(1);
st.push(1);
while (!st.isEmpty()) {
st.pop();
}
EXPECT_EQ(false, st.isFull());
}
