// Copyright 2021 Alexey Tatsenko
#include "MyStack.h"
#include <gtest/gtest.h>
#include<string>

TEST(MyStack, test1) {
    MyStack<int> stack(11);
    stack.push(1);
    EXPECT_EQ(1, stack.get());
}

TEST(MyStack, test2) {
    MyStack<int> stack(11);
    stack.push(3);
    EXPECT_EQ(false, stack.isEmpty());
}

TEST(MyStack, test3) {
    MyStack<int> stack(33);
    EXPECT_EQ(true, stack.isEmpty());
}

TEST(MyStack, test4) {
    MyStack<int> stack(5);
    stack.push(11);
    stack.push(13);
    stack.push(33);
    stack.push(93);
    stack.push(313);
    EXPECT_EQ(true, stack.isFull());
}

TEST(MyStack, test5) {
    MyStack<std::string> stack(13);
    stack.push("aaa");
    stack.push("bbb");
    EXPECT_EQ(false, stack.isFull());
}

TEST(MyStack, test6) {
    MyStack<std::string> stack(9);
    stack.push("xxx");
    EXPECT_EQ("xxx", stack.get());
}

TEST(MyStack, test7) {
    MyStack<char> stack(3);
    stack.push('/');
    stack.push('+');
    stack.push('+');
    EXPECT_EQ('+', stack.pop());
}

TEST(MyStack, test8) {
    MyStack<std::string> stack(9);
    stack.push("xxx");
    stack.pop();
    stack.push("hseesese");
    EXPECT_EQ("hseesese", stack.pop());
}
