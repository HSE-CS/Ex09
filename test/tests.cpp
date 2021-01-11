// Copyright 2020 Bogomazov
#include <gtest/gtest.h>
#include <string>
#include "../include/MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> Mystack(5);
  EXPECT_EQ(true, Mystack.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> Mystack(5);
  Mystack.push(42);

  EXPECT_EQ(false, Mystack.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> Mystack(1);
  Mystack.push(42);
  Mystack.pop();

  EXPECT_EQ(true, Mystack.isEmpty());
}

TEST(MyStackTest, test4) {
  MyStack<int> Mystack(5);
  Mystack.push(42);

  EXPECT_EQ(false, Mystack.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(true, Mystack.isFull());
}

TEST(MyStackTest, test6) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(42, Mystack.get());
}

TEST(MyStackTest, test7) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(42, Mystack.pop());
}

TEST(MyStackTest, test8) {
  MyStack<int> Mystack(1);
  Mystack.push(12);
  EXPECT_EQ(false, Mystack.isEmpty());
}

TEST(MyStackTest, test9) {
  MyStack<int> Mystack(5);
  EXPECT_EQ(false, Mystack.isFull());
}


TEST(MyStackTest, test10) {
  MyStack<int> Mystack(5);
  Mystack.push(1);
  Mystack.push(2);
  Mystack.pop();
  EXPECT_EQ(1, Mystack.get());
}
