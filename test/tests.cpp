//  Copyright 2020 GHA Test Team

#include <gtest/gtest.h>
#include "MyStack.h"

TEST(StackTest, test1) {
    MyStack<int> c(1);
    EXPECT_EQ(false, c.isEmpty());
}
TEST(StackTest, test2) {
    MyStack<int> c(1);
    EXPECT_EQ(1, c.pop());
}
TEST(StackTest, test3) {
    MyStack<char> c('a');
    EXPECT_EQ('a', c.pop());
}
TEST(StackTest, test4) {
    MyStack<int> c(1);
    c.push(10);
    c.push(20);
    c.pop();
    EXPECT_EQ(10, c.pop());
}
TEST(StackTest, test5) {
    MyStack<int> c(1);
    c.pop();
    EXPECT_EQ(true, c.isEmpty());
}
TEST(StackTest, test6) {
    MyStack<int> c(1);
    c.push(10);
    c.push(25);
    EXPECT_EQ(3, c.isFull());
}
TEST(StackTest, test7) {
    MyStack<int> c(1);
    EXPECT_EQ(1, c.get());
}
TEST(StackTest, test8) {
    MyStack<int> c(1);
    int b = c.get();
    EXPECT_EQ(false, c.isEmpty());
}
TEST(StackTest, test9) {
    MyStack<int> c(1);
    c.push(2);
    c.push(3);
    c.push(4);
    c.pop();
    EXPECT_EQ(3, c.isFull());
}
TEST(StackTest, test10) {
    MyStack<char> c('a');
    c.push('b');
    c.push('c');
    c.push('d');
    c.pop();
    c.pop();
    EXPECT_EQ('b', c.pop());
}
