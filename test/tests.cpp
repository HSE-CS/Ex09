// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>

#include <string>

#include "MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> stack(10);
  EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> stack(1);
  stack.push(1);
  EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<int> stack(10);
  stack.push(1);
  stack.pop();
  EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> stack(5);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  stack.push(5);
  int x = stack.pop();
  EXPECT_EQ(5, x);
}

TEST(MyStackTest, test5) {
  MyStack<int> stack(5);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  stack.push(1);
  EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test6) {
  MyStack<int> stack(10);
  stack.push(1);
  stack.push(2);
  stack.push(3);
  EXPECT_EQ(3, stack.pop());
}

TEST(MyStackTest, test7) {
  MyStack<char> stack(5);
  stack.push('z');
  EXPECT_EQ('z', stack.get());
}

TEST(MyStackTest, test8) {
  MyStack<int> stack(5);
  stack.push(1);
  MyStack<int> stack2(stack);
  EXPECT_EQ(1, stack.get());
}

TEST(MyStackTest, test9) {
  MyStack<double> stack(5);
  stack.push(12.2);
  EXPECT_EQ(12.2, stack.get());
}

TEST(MyStackTest, test10) {
  MyStack<char> stack(5);
  stack.push('b');
  stack.push('a');
  MyStack<char> stack2(stack);
  EXPECT_EQ('a', stack2.get());
}