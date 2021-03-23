// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

// passed
TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

// copied
// get
// pop
// push
// isfull
// isempty

// passed
TEST(MyStackTest, test2) {
// isempty false
MyStack<int> st2(3);
st2.push(1);
st2.push(2);
st2.push(3);
EXPECT_EQ(true, st2.isEmpty());
}

// passed
TEST(MyStackTest, test3) {
// isfull false
MyStack<int> st3(3);
st3.push(1);
st3.push(2);
EXPECT_EQ(true, st3.isFull());
}

// passed
TEST(MyStackTest, test4) {
// get
MyStack<int> st4(3);
st4.push(1);
st4.push(2);
EXPECT_EQ(true, st4.isFull());
}

// passed
TEST(MyStackTest, test5) {
// copied
// get
MyStack<char> st51(3);
st51.push('1');
st51.push('2');
st51.push('4');
MyStack<char> st52(st51);
EXPECT_EQ(true, st52.isEmpty());
}

// passed
TEST(MyStackTest, test6) {
// copied true
// isfull
MyStack<int> st61(3);
st61.push(6);
st61.push(5);
st61.push(4);
MyStack<int> st62(st61);
EXPECT_EQ(true, st62.isFull());
}

// passed
TEST(MyStackTest, test7) {
// copied false
// isempty
MyStack<int> st71(3);
st71.push(7);
MyStack<int> st72(st71);
EXPECT_EQ(true, st72.isEmpty());
}

// failed
TEST(MyStackTest, test8) {
// ppo second
MyStack<char> st8(3);
st8.push('1');
st8.push('2');
st8.push('3');
// st8.pop();
EXPECT_EQ('3', st8.get());
}

// passed
TEST(MyStackTest, test9) {
// isfull true
MyStack<char> st9(3);
st9.push('a');
st9.push('b');
st9.push('c');
EXPECT_EQ(true, st9.isFull());
}

// passed
TEST(MyStackTest, test10) {
// isempty true
MyStack<int> st10(3);
st10.push(1);
st10.pop();
EXPECT_EQ(true, st10.isEmpty());
}
