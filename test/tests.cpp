// Copyright 2020 Konina Tatiana
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>
TEST(StackTest, test1) {
  MyStack<int> myStack(10);
  EXPECT_EQ(true, myStack.isEmpty());
}
TEST(StackTest, test2) {
  MyStack<int> myStack(10);
  myStack.push(5);
  EXPECT_EQ(false, myStack.isEmpty());
}
TEST(StackTest, test3) {
  MyStack<int> myStack(10);
  myStack.push(5);
  myStack.pop();
  EXPECT_EQ(true, myStack.isEmpty());
}
TEST(StackTest, test4) {
  MyStack<int> myStack;
  EXPECT_EQ(true, myStack.isEmpty());
}
TEST(StackTest, test5) {
  MyStack<int> myStack(10);
  myStack.push(5);
  MyStack<int> myStack2 = myStack;
  EXPECT_EQ(5, myStack2.get());
}
TEST(StackTest, test6) {
  MyStack<int> myStack(10);
  myStack.push(5);
  myStack.push(6);
  myStack.push(7);
  EXPECT_EQ(7, myStack.get());
}
TEST(StackTest, test7) {
  MyStack<int> myStack(3);
  myStack.push(5);
  myStack.push(6);
  myStack.push(7);
  EXPECT_EQ(true, myStack.isFull());
}
TEST(StackTest, test8) {
  MyStack<int> myStack(3);
  myStack.push(5);
  myStack.push(6);
  myStack.push(7);
  myStack.pop();
  EXPECT_EQ(6, myStack.get());
}
TEST(StackTest, test9) {
  MyStack<int> myStack(3);
  myStack.push(5);
  myStack.push(6);
  EXPECT_EQ(false, myStack.isEmpty());
}
TEST(StackTest, test10) {
  MyStack<char> myStack(2);
  myStack.push('T');
  EXPECT_EQ('T', myStack.get());
}



