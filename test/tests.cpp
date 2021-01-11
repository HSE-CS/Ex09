// Copyright 2021 Islam Osmanov
#include <string>
#include "gtest/gtest.h"
#include "MyStack.h"

TEST(MyStackTest, test1) {
  MyStack<int> Stack(1);
  Stack.push(20);
  EXPECT_EQ(false, Stack.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> Stack(3);
  Stack.push(20);
  Stack.push(30);
  Stack.push(40);
  EXPECT_EQ(true, Stack.isFull());
}

TEST(MyStackTest, test3) {
  MyStack<std::string> Stack(2);
  Stack.push("Hello");
  Stack.push("World");
  Stack.pop();
  EXPECT_EQ(false, Stack.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> Stack(2);
  Stack.push(1024);
  Stack.push(312);
  EXPECT_EQ(312, Stack.get());
}

TEST(MyStackTest, test5) {
  MyStack<std::string> Stack(3);
  Stack.push("C++");
  Stack.push("Python");
  EXPECT_EQ("Python", Stack.get());
}

TEST(MyStackTest, test6) {
  MyStack<std::string> Stack(1);
  Stack.push("C#");
  Stack.pop();
  EXPECT_EQ(true, Stack.isEmpty());
}

TEST(MyStackTest, test7) {
  MyStack<int> Stack(3);
  Stack.push(123);
  Stack.pop();
  Stack.push(1234);
  EXPECT_EQ(false, Stack.isFull());
}

TEST(MyStackTest, test8) {
  MyStack<int> Stack(4);
  Stack.push(1);
  Stack.pop();
  Stack.push(2);
  Stack.push(3);
  EXPECT_EQ(3, Stack.get());
}

TEST(MyStackTest, test9) {
  MyStack<char> Stack(3);
  Stack.push('a');
  Stack.push('2');
  Stack.push('3');
  EXPECT_EQ(true, Stack.isFull());
}

TEST(MyStackTest, test10) {
  MyStack<char> Stack(2);
  Stack.push('c');
  Stack.push('4');
  Stack.pop();

  EXPECT_EQ('c', Stack.get());
}
