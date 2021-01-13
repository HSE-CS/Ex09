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
st.push(400);
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
MyStack<int> st(1);
st.push(400);
st.push(400);
EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
MyStack<int> st(5);
EXPECT_EQ(false, st.st.isFull());
}

TEST(MyStackTest, test5) {
MyStack<int> st(5);
st.push(228);
EXPECT_EQ(228, st.get());
}

TEST(MyStackTest, test6) {
MyStack<int> st(5);
st.push(228);
EXPECT_EQ(228, st.pop());
}

TEST(MyStackTest, test7) {
MyStack<int> st(5);
st.push(228);
st.pop()
EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test8) {
MyStack<int> st(5);
st.push(228);
st.get()
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test9) {
MyStack<int> st(5);
st.push(228);
st.push(228);
st.push(228);
st.push(228);
st.push(228);
st.push(228);
int summa=0;
while(!st.isEmpty())
summa+=st.pop()
EXPECT_EQ(1368, summa);
}

TEST(MyStackTest, test10) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.get();
st.pop();
EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, test11) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.get();
st.pop();
st.push(3);
st.pop();
EXPECT_EQ(1, st.get());
}
