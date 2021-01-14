// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> stack(5);
    stack.push(7);
    stack.push(8);
    EXPECT_EQ(false, stack.isEmpty());
}
TEST(MyStackTest, test3) {
    MyStack<int> stack(4);
    stack.push(2);
    stack.push(9);
    stack.push(10);
    stack.push(21);
    EXPECT_EQ(true, stack.isFull());
}
TEST(MyStackTest, test4) {
    MyStack<int> stack(3);
    EXPECT_EQ(false, stack.isFull());
}
TEST(MyStackTest, test5) {
    MyStack<int> stack(8);
    stack.push(8);
    stack.push(5);
    stack.push(6);
    stack.pop();
    EXPECT_EQ(5, stack.pop());
}
TEST(MyStackTest, test6) {
    MyStack<int> stack(9);
    stack.push(2);
    stack.push(4);
    stack.pop();
    EXPECT_EQ(2, stack.get());
}
TEST(MyStackTest, test7) {
    MyStack<int> stack(5);
    stack.push(1);
    stack.push(7);
    EXPECT_EQ(7, stack.get());
}
TEST(MyStackTest, test8) {
    MyStack<int> stack(4);
    EXPECT_EQ(-1, stack.pop());
}
TEST(MyStackTest, test9) {
    MyStack<int> stack(5);
    EXPECT_EQ(-1, stack.get());
}
TEST(MyStackTest, test10) {
    MyStack<int> stack(1);
    st.push(2);
    st.push(4);
    EXPECT_EQ(2, stack.get());
}