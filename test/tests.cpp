// Copyright 2021 Nikita Naumov
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> a(5);
  bool check = a.isEmpty();
  EXPECT_EQ(1, check);
}

TEST(MyStackTest, test2) {
  MyStack<int> a(5);
  a.push(5);
  bool check = a.isEmpty();
  EXPECT_EQ(0, check);
}

TEST(MyStackTest, test3) {
  MyStack<int> a(5);
  bool check = a.isFull();
  EXPECT_EQ(0, check);
}

TEST(MyStackTest, test4) {
  MyStack<int> a(5);
  a.push(5);
  a.push(5);
  a.push(5);
  a.push(5);
  a.push(5);
  bool check = a.isFull();
  EXPECT_EQ(1, check);
}

TEST(MyStackTest, test5) {
  MyStack<int> a(5);
  a.push(10);
  MyStack<int> b(a);
  int check = b.get();
  EXPECT_EQ(10, check);
}

TEST(MyStackTest, test6) {
  MyStack<int> a(5);
  a.push(10);
  a.pop();
  bool check = a.isEmpty();
  EXPECT_EQ(1, check);
}

TEST(MyStackTest, test7) {
  MyStack<int> a(5);
  a.push(10);
  a.push(11);
  a.push(12);
  a.pop();
  int check = a.get();
  EXPECT_EQ(11, check);
}

TEST(MyStackTest, test8) {
  MyStack<int> a(5);
  a.push(10);
  a.push(11);
  a.push(12);
  a.push(13);
  a.push(14);
  int check = a.get();
  EXPECT_EQ(14, check);
}

TEST(MyStackTest, test9) {
  MyStack<int> a(5);
  a.push(10);
  a.push(11);
  a.push(12);
  a.push(13);
  a.push(14);
  MyStack<int> b(a);
  bool check = b.isFull();
  EXPECT_EQ(1, check);
}

TEST(MyStackTest, test10) {
  MyStack<int> a(5);
  MyStack<int> b(a);
  bool check = b.isEmpty();
  EXPECT_EQ(1, check);
}

TEST(MyStackTest, test11) {
  MyStack<double> a(5);
  a.push(41.1);
  a.push(41.1);
  a.push(41.1);
  a.push(41.1);
  bool check = a.isFull();
  EXPECT_EQ(0, check);
}
