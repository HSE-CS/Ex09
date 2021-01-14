// Copyright [2020] <Olesya Nikolaeva>

#include "MyStack.h"

#include <gtest/gtest.h>

TEST(MyStackTest, test1) {
    MyStack<int> stack(10);
    stack.push(1);
    EXPECT_EQ(1, stack.get());
}

TEST(MyStackTest, test2) {
    MyStack<int> stack(10);
    stack.push(1);
    stack.push(2);
    EXPECT_EQ(2, stack.get());
}

TEST(MyStackTest, test3) {
    MyStack<int> stack(10);
    stack.push(1);
    stack.push(2);
    EXPECT_EQ(1, stack.pop());
}

TEST(MyStackTest, test4) {
    MyStack<int> stack(10);
    stack.push(2);
    stack.push(4);
    stack.push(6);
    EXPECT_EQ(4, stack.pop());
}

TEST(MyStackTest, test5) {
    MyStack<int> stack(10);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test6) {
    MyStack<int> stack(10);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test7) {
    MyStack<int> stack(10);
    stack.push(2);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test8) {
    MyStack<int> stack(10);
    stack.push(1);
    stack.push(2);
    stack.pop();
    EXPECT_EQ(1, stack.get());
}

TEST(MyStackTest, test9) {
    MyStack<int> stack(10);
    stack.push(2);
    stack.push(4);
    stack.push(6);
    stack.pop();
    EXPECT_EQ(2, stack.pop());
}

TEST(MyStackTest, test10) {
    MyStack<char> stack(10);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.pop();
    EXPECT_EQ('a', stack.pop());
}
