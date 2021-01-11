// Copyright 2021 Longa_Bonga
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1_1) {
  MyStack<int> Mystack(5);
  EXPECT_EQ(true, Mystack.isEmpty());
}

TEST(MyStackTest, test1_2) {
  MyStack<int> Mystack(5);
  Mystack.push(42);

  EXPECT_EQ(false, Mystack.isEmpty());
}

TEST(MyStackTest, test1_3) {
  MyStack<int> Mystack(1);
  Mystack.push(42);
  Mystack.pop();

  EXPECT_EQ(true, Mystack.isEmpty());
}

TEST(MyStackTest, test2_1) {
  MyStack<int> Mystack(5);
  Mystack.push(42);

  EXPECT_EQ(false, Mystack.isFull());
}

TEST(MyStackTest, test2_2) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(true, Mystack.isFull());
}

TEST(MyStackTest, test3_1) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(42, Mystack.get());
}

TEST(MyStackTest, test3_2) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(42, Mystack.pop());
}

TEST(MyStackTest, test4_1) {
  MyStack<int> Mystack(1);

  EXPECT_EQ(0, Mystack.pop());
}

TEST(MyStackTest, test4_2) {
  MyStack<int> Mystack(1);
  Mystack.push(42);

  EXPECT_EQ(false, Mystack.push(42));
}

TEST(MyStackTest, test4_3) {
  MyStack<int> Mystack(5);
  EXPECT_EQ(false, Mystack.isFull());
}
