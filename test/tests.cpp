// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> stack(6);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> stack(3);
    stack.push(228);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test3) {
    MyStack<int> stack(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test4) {
    MyStack<int> stack(1);
    stack.push(666);
    EXPECT_EQ(666, stack.get());
}

TEST(MyStackTest, test5) {
    MyStack<int> stack(5);
    stack.push(42);
    EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test6) {
    MyStack<int> stack(1);
    stack.push(0);
    stack.pop();
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test7) {
    MyStack<int> stack(2);
    stack.push(1);
    stack.push(9);
    EXPECT_EQ(9, stack.get());
}

TEST(MyStackTest, test8) {
    MyStack<int> stack(5);
    stack.push(1);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test9) {
    MyStack<int> stack(1);
    stack.push(42);
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test10) {
    MyStack<int> stack(10);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test11) {
    MyStack<char> stack(4);
    stack.push('H');
    stack.push('E');
    stack.push('L');
    stack.push('L');
    stack.pop();
    EXPECT_EQ(false, stack.isFull());
}