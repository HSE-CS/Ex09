//  Copyright 2021 Dmitry Vargin
#include <gtest/gtest.h>
#include <string>
#include "../include/MyStack.h"

TEST(MyStackTest, test1) {
    MyStack<int> stack(5);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> stack(3);
    stack.push(32134);
    stack.push(1);
    EXPECT_EQ(1, stack.get());
}

TEST(MyStackTest, test3) {
    MyStack<char> stack(3);
    stack.push('q');
    stack.push('w');
    stack.push('e');
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStackTest, test4) {
    MyStack<char> stack(1);
    stack.push(-123);
    EXPECT_EQ(-123, stack.pop());
}

TEST(MyStackTest, test5) {
    MyStack<int> stack(2);
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<float> stack(3);
    stack.push(123.12f);
    EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStackTest, test7) {
    MyStack<int> stack(10);
    for (int i = 0; i < 10; ++i) {
        stack.push(i*i);
    }
    MyStack copyStack(stack);
    EXPECT_EQ(true, copyStack.isFull());
}

TEST(MyStackTest, test8) {
    MyStack<int> stack(2);
    stack.push(0);
    stack.push(1);
    MyStack<int> copyStack(stack);
    stack.pop();
    EXPECT_EQ(true, copyStack.isFull());
}

TEST(MyStackTest, test9) {
    MyStack<std::string> stack(2);
    stack.push("Hello");
    stack.push("World");
    EXPECT_EQ("World", stack.get());
}

TEST(MyStackTest, test10) {
    MyStack<std::string> stack(3);
    stack.push("God");
    stack.push("bless");
    stack.push("you");
    MyStack<std::string> stack1(stack);
    stack.pop();
    stack.pop();
    stack.pop();
    EXPECT_EQ(true, stack1.isFull());
}

