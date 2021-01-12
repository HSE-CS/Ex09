// Copyright 2021 Bekusov Mikhail
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(7);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    st.push(7);
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
    MyStack<int> st(5);
    st.push(7);
    EXPECT_EQ(7, st.get());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(5);
    st.push(7);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(5);
    st.push(8);
    st.push(7);
    EXPECT_EQ(7, st.pop());
}

TEST(MyStackTest, test7) {
    MyStack<double> st(5);
    st.push(10.1);
    EXPECT_EQ(10.1, st.get());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(5);
    st.push(500);
    st.push(600);
    MyStack<int> st1(st);
    EXPECT_EQ(600, st1.get());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(5);
    st.push(500);
    st.push(500);
    st.push(500);
    st.push(500);
    st.push(500);
    MyStack<int> st1(st);
    EXPECT_EQ(true, st1.isFull());
}

TEST(MyStackTest, test10) {
    MyStack<std::string> st(5);
    st.push("Privet");
    st.push("Poka");
    EXPECT_EQ("Poka", st.pop());
}
