// Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include <string>
#include "../include/MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> stack(16);
  EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<std::string> stack(5);
  stack.push("2020");
  EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test5) {
  MyStack<std::string> stack(10);
  stack.push("22");
  stack.push("22");
  stack.push("22");
  EXPECT_EQ("22", stack.get());
}

TEST(MyStackTest, test6) {
  MyStack<std::string> stack(10);
  stack.push("22");
  stack.push("23");
  stack.push("24");
  MyStack<std::string> stack2(stack);
  EXPECT_EQ("24", stack2.get());
}

TEST(MyStackTest, test8) {
  MyStack<std::string> stack(10);
  stack.push("22");
  stack.push("23");
  stack.push("24");
  stack.pop();
  EXPECT_EQ("23", stack.get());
}

TEST(MyStackTest, test11) {
  MyStack<int> stack(5);
  EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test12) {
  MyStack<int> stack(5);
  const MyStack<int> &stack2 = stack;
  EXPECT_EQ(true, stack2.isEmpty());
}

TEST(MyStackTest, test14) {
  MyStack<int> stack(3);
  stack.push(25);
  stack.push(40);
  stack.push(10);
  EXPECT_EQ(10, stack.pop());
}

TEST(MyStackTest, test15) {
  MyStack<int> stack(3);
  stack.push(25);
  stack.push(40);
  stack.push(10);
  EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test17) {
  MyStack<int> stack(3);
  stack.push(25);
  stack.push(40);
  stack.push(10);
  EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test18) {
  MyStack<int> stack(3);
  stack.push(25);
  stack.push(40);
  EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test20) {
  MyStack<int> stack(5);
  stack.push(42);
  EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test21) {
  MyStack<int> stack(1);
  stack.push(42);
  stack.pop();
  EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test23) {
  MyStack<int> stack(1);
  stack.push(42);
  EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test24) {
  MyStack<int> stack(1);
  stack.push(42);
  EXPECT_EQ(42, stack.get());
}

TEST(MyStackTest, test27) {
  MyStack<int> stack(5);
  stack.push(42);
  stack.push(42);
  stack.push(42);
  stack.push(42);
  stack.push(42);
  EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test28) {
  MyStack<int> stack(5);
  stack.push(3);
  stack.push(1);
  stack.push(5);
  stack.pop();
  stack.pop();
  stack.pop();
  EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test30) {
  MyStack<int> stack(5);
  stack.push(1);
  stack.push(1);
  stack.push(2);
  stack.push(5);
  stack.pop();
  int x = stack.pop();
  EXPECT_EQ(2, x);
}

TEST(MyStackTest, test31) {
  MyStack<char> stack(5);
  stack.push('z');
  EXPECT_EQ('z', stack.get());
}

TEST(MyStackTest, test33) {
  MyStack<char> stack(5);
  stack.push('z');
  stack.push('a');
  MyStack<char> stack2(stack);
  EXPECT_EQ('a', stack2.get());
}

TEST(MyStackTest, test34) {
  MyStack<char> stack(5);
  stack.push('y');
  MyStack<char> st_(stack);
  EXPECT_EQ('y', st_.pop());
}
