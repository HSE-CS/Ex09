// Copyright 2021 Bekina Svetlana
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(4);
    st.push(0);
    st.push(20);
    st.push(30);
    st.push(-40);
    EXPECT_EQ(-40, st.get());
}
TEST(MyStackTest, test2) {
    MyStack<double> st(10);
    st.push(-982);
    st.push(20.98);
    st.push(9.64);
    st.push(38.2);
    EXPECT_EQ(38.2, st.get());
}
TEST(MyStackTest, test3) {
    MyStack<int> st(4);
    st.push(56);
    st.push(2);
    st.push(3);
    st.push(7);
    MyStack<int> new_st(st);
    EXPECT_EQ(7, new_st.get());
}
TEST(MyStackTest, test4) {
    MyStack<int> st(5);
    st.push(120);
    st.push(-920);
    st.push(3);
    EXPECT_FALSE(st.isEmpty());
}
TEST(MyStackTest, test5) {
    MyStack<int> st(5);
    st.push(120);
    st.push(-920);
    st.push(3);
    st.push(-740);
    st.push(-9);
    EXPECT_TRUE(st.isFull());
}
TEST(MyStackTest, test6) {
    MyStack<int> st(10);
    st.push(56);
    st.push(2);
    st.push(3);
    st.push(7);
    st.pop();
    EXPECT_EQ(3, st.pop());
}
TEST(MyStackTest, test7) {
    MyStack<double> st(10);
    st.push(-982);
    st.push(20.98);
    st.push(9.64);
    st.push(38.2);
    st.pop();
    st.pop();
    EXPECT_EQ(20.98, st.pop());
}
TEST(MyStackTest, test8) {
    MyStack<int> st(5);
    EXPECT_TRUE(st.isEmpty());
}
TEST(MyStackTest, test9) {
    MyStack<double> st(10);
    st.push(-982);
    st.push(20.98);
    st.push(9.64);
    st.push(38.2);
    EXPECT_FALSE(st.isFull());
}
TEST(MyStackTest, test10) {
    MyStack <int> st(10);
    EXPECT_EQ(NULL, st.get());
}

