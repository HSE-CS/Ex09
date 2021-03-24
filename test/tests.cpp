// Copyright 2021 Roman Burtsev
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> Stack(2);
    EXPECT_EQ(true, Stack.isEmpty());
}
TEST(MyStackTest, test2) {
    MyStack<int> Stack(5);
    Stack.push(3);
    EXPECT_EQ(3, Stack.get());
}
TEST(MyStackTest, test3) {
    MyStack<std::string> Stack(5);
    Stack.push("Failure");
    EXPECT_EQ(false, Stack.isEmpty());
}
TEST(MyStackTest, test4) {
    MyStack<int> Stack(0);
    Stack.push(1);
    Stack.pop();
    Stack.push(2);
    EXPECT_EQ(2, Stack.get());
}
TEST(MyStackTest, test5) {
    MyStack<int> Stack(1);
    Stack.push(122);
    EXPECT_EQ(122, Stack.get());
}
TEST(MyStackTest, test6) {
    MyStack<int> Stack(1);
    Stack.push(2);
    Stack.pop();
    Stack.push(15);
    EXPECT_EQ(15, Stack.get());
}
TEST(MyStackTest, test7) {
    MyStack<int> Stack(1);
    Stack.push(42);
    Stack.push(44);
    Stack.pop();
    EXPECT_EQ(42, Stack.get());
}
TEST(MyStackTest, test8) {
    MyStack<std::string> Stack(10);
    Stack.push("22");
    Stack.push("q12");
    Stack.pop();
    EXPECT_EQ("22", Stack.get());
}
TEST(MyStackTest, test9) {
    MyStack<int> Stack(5);
    Stack.push(1124);
    EXPECT_EQ(false, Stack.isEmpty());
}
TEST(MyStackTest, test10) {
    MyStack<int> Stack(5);
    const MyStack<int>& Stack2 = Stack;
    EXPECT_EQ(false, Stack2.isFull());
}
