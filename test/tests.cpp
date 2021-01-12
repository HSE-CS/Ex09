// Copyright 2021 by Dolgopolov Alexey
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> testStack(1);
    EXPECT_EQ(true, testStack.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> testStack(5);
    testStack.push(2);
    EXPECT_EQ(2, testStack.get());
}
TEST(MyStackTest, test3) {
    MyStack<std::string> testStack(5);
    testStack.push("Failure");
    EXPECT_EQ(false, testStack.isEmpty());
}
TEST(MyStackTest, test4) {
    MyStack<int> testStack(0);
    testStack.push(1);
    testStack.pop();
    testStack.push(2);
    EXPECT_EQ(2, testStack.get());
}
TEST(MyStackTest, test5) {
    MyStack<int> testStack(1);
    testStack.push(12);
    EXPECT_EQ(12, testStack.get());
}
TEST(MyStackTest, test6) {
    MyStack<int> testStack(1);
    testStack.push(2);
    testStack.pop();
    testStack.push(15);
    EXPECT_EQ(15, testStack.get());
}
TEST(MyStackTest, test7) {
    MyStack<int> testStack(1);
    testStack.push(42);
    testStack.push(44);
    testStack.pop();
    EXPECT_EQ(42, testStack.get());
}
TEST(MyStackTest, test8) {
    MyStack<std::string> testStack(10);
    testStack.push("22");
    testStack.push("q12");
    testStack.pop();
    EXPECT_EQ("22", testStack.get());
}
TEST(MyStackTest, test9) {
    MyStack<int> testStack(5);
    testStack.push(1124);
    EXPECT_EQ(false, testStack.isEmpty());
}
TEST(MyStackTest, test10) {
    MyStack<int> testStack(5);
    const MyStack<int>& testStack2 = testStack;
    EXPECT_EQ(false, testStack2.isFull());
}