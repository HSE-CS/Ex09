// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(1);
    EXPECT_EQ(false, st.isEmpty());
 }

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(999);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
 }

TEST(MyStackTest, test4) {
    MyStack<int> st(3);
    st.push(1);
    EXPECT_EQ(false, st.isFull());
 }

TEST(MyStackTest, test5) {
    MyStack<int> st(1);
    st.push(1);
    EXPECT_EQ(true, st.isFull());
 }

TEST(MyStackTest, test6) {
    MyStack<int> st1(10);
    st1.push(55);
    EXPECT_EQ(55, st1.get());
 }

TEST(MyStackTest, test7) {
    MyStack<int> st1(1);
    st1.push(1);
    MyStack<int> st2(st1);
    EXPECT_EQ(1, st2.get());
 }

TEST(MyStackTest, test8) {
    MyStack<int> st(2);
    st.push(5)
    st.push(1);
    EXPECT_EQ(1, st.pop());
}

TEST(MyStackTest, test9) {
    MyStack<int> st(33);
    st.push(5)
    st.push(1);
    st.push(4);
    st.pop()
    EXPECT_EQ(1, st.pop());
}

TEST(MyStackTest, test10) {
    MyStack<int> st(3);
    st.push(1);
    st.push(2);
    st.push(3);
    EXPECT_EQ(true, st.isFull());
}
