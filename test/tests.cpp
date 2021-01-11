// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1_1) {
  MyStack<int> MyStack(5);
  EXPECT_EQ(true, MyStack.isEmpty());
}

TEST(MyStackTest, test1_2) {
  MyStack<int> MyStack(5);
  MyStack.push(42);

  EXPECT_EQ(false, MyStack.isEmpty());
}

TEST(MyStackTest, test1_3) {
  MyStack<int> MyStack(1);
  MyStack.push(42);
  MyStack.pop();

  EXPECT_EQ(true, MyStack.isEmpty());
}

TEST(MyStackTest, test2_1) {
  MyStack<int> MyStack(5);
  MyStack.push(42);

  EXPECT_EQ(false, MyStack.isFull());
}

TEST(MyStackTest, test2_2) {
  MyStack<int> MyStack(1);
  MyStack.push(42);

  EXPECT_EQ(true, MyStack.isFull());
}

TEST(MyStackTest, test3_1) {
  MyStack<int> MyStack(1);
  MyStack.push(42);

  EXPECT_EQ(42, MyStack.get());
}

TEST(MyStackTest, test3_2) {
  MyStack<int> MyStack(1);
  MyStack.push(42);

  EXPECT_EQ(42, MyStack.pop());
}

TEST(MyStackTest, test4_1) {
  MyStack<int> MyStack(1);

  EXPECT_EQ(NULL, MyStack.pop());
}

TEST(MyStackTest, test4_2) {
  MyStack<int> MyStack(1);
  MyStack.push(42);

  EXPECT_EQ(false, MyStack.push(42));
}

TEST(MyStackTest, test4_3) {
  MyStack<int> MyStack();

  EXPECT_EQ(false, MyStack.isFull());
}
