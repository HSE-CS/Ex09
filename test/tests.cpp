// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

//copied
//get
//pop
//push
//isfull
//isempty

TEST(MyStackTest, test2) {
//isempty false
MyStack<int> st(3);
st.push(1);
st.push(2);
st.push(3);
EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
//isfull false
MyStack<int> st(3);
st.push(1);
st.push(2);
EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test4) {
//get
MyStack<int> st(3);
st.push(1);
st.push(2);
EXPECT_EQ(2, st.get());
}

TEST(MyStackTest, test5) {
//copied
//get
MyStack<int> st1(3);
st1.push(1);
st1.push(2);
st1.push(4);
MyStack<int> st2(st1);
EXPECT_EQ(4, st2.get());
}

TEST(MyStackTest, test6) {
//copied true
//isfull
MyStack<int> st1(3);
st1.push(6);
st1.push(5);
st1.push(4);
MyStack<int> st2(st1);
EXPECT_EQ(true, st2.isFull());
}

TEST(MyStackTest, test7) {
//copied false
//isempty
MyStack<int> st1(3);
st1.push(7);
MyStack<int> st2(st1);
EXPECT_EQ(false, st2.isEmpty());
}

TEST(MyStackTest, test8) {
//ppo second
MyStack<double> st(3);
st.push(7.1);
st.push(7.2);
st.push(7.3);
st.pop();
EXPECT_EQ(7.2, st.get());
}

TEST(MyStackTest, test9) {
//isfull true
MyStack<char> st(3);
st.push('a');
st.push('b');
st.push('c');
EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test10) {
//isempty true
MyStack<int> st(3);
st.push(1);
st.pop()
EXPECT_EQ(true, st.isEmpty());
}