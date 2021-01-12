// Copyright 2021 Shabarshin Leonid
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(StackTest, test1) {
    MyStack<int> stack(5);
    EXPECT_EQ(true, stack.isEmpty());
}
TEST(StackTest, test2) {
    MyStack<int> stack(5);
    stack.push(3);
    EXPECT_EQ(false, stack.isEmpty());
}
TEST(StackTest, test3) {
    MyStack<int> stack(5);
    stack.push(3);
    stack.pop();
    EXPECT_EQ(true, stack.isEmpty());
}
TEST(StackTest, test4) {
    MyStack<int> stack(5);
    stack.push(3);
    EXPECT_EQ(3, stack.get());
}
TEST(StackTest, test5) {
    MyStack<int> stack(5);
    stack.push(3);
    MyStack<int> stack2 = stack;
    EXPECT_EQ(3, stack2.get());
}
TEST(StackTest, test6) {
    MyStack<int> stack(5);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    EXPECT_EQ(1, stack.get());
}
TEST(StackTest, test7) {
    MyStack<int> stack(2);
    stack.push(3);
    stack.push(2);
    EXPECT_EQ(true, stack.isFull());
}
TEST(StackTest, test8) {
    MyStack<int> stack(5);
    stack.push(3);
    stack.push(2);
    EXPECT_EQ(false, stack.isFull());
}
TEST(StackTest, test9) {
    MyStack<int> stack(2);
    stack.push(3);
    stack.push(2);
    stack.pop();
    EXPECT_EQ(3, stack.get());
}
TEST(StackTest, test10) {
    MyStack<char> stack(5);
    stack.push('A');
    EXPECT_EQ('A', stack.get());
}
