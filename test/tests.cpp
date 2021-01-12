// Copyright 2020 GHA Test Team
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> stack(15);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<char> stack(15);
    stack.push('a');
    EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> stack(15);
    for (int i = 0; i < 15; i++)
        stack.push(i);
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test4) {
    MyStack<double> stack(15);
    for (int i = 0; i < 15; i++)
        stack.push(i * 1.2);
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test5) {
    MyStack<char> stack(10);
    stack.push('a');
    stack.push('b');
    MyStack<char> cpy_stack(stack);
    EXPECT_EQ('b', cpy_stack.pop());
}

TEST(MyStackTest, test6) {
    MyStack<std::string> stack(10);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test7) {
    MyStack<char> stack(10);
    stack.push('a');
    stack.push('b');
    EXPECT_EQ('b', stack.pop());
}

TEST(MyStackTest, test8) {
    MyStack<char> stack(10);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.pop();
    stack.pop();
    stack.pop();
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test9) {
    MyStack<std::string> stack(8);
    stack.push("C++");
    EXPECT_EQ("C++", stack.pop());
}

TEST(MyStackTest, test10) {
    MyStack<char> stack(10);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.pop();
    EXPECT_EQ('c', stack.pop());
}
