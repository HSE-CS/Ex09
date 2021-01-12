// copyright 2021 Elizaveta D.
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test_1) {
    MyStack<int> st(2);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test_2) {
    MyStack<int> st(3);
    st.push(2);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test_3) {
    MyStack<int> st(6);
    st.push(3);
    st.push(4);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test_4) {
    MyStack<int> st(8);
    st.push(3);
    st.push(4);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test_5) {
    MyStack<int> st(1);
    st.push(3);
    EXPECT_EQ(3, st.get());
}

TEST(MyStackTest, test_6) {
    MyStack<int> st(8);
    st.push(3);
    st.push(4);
    EXPECT_EQ(4, st.get());
}

TEST(MyStackTest, test_7) {
    MyStack<int> st(5);
    st.push(3);
    st.push(4);
    st.push(2);
    st.push(5);
    st.pop();
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test_8) {
    MyStack<int> st(5);
    st.push(3);
    st.push(4);
    st.push(2);
    st.push(5);
    st.pop();
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test_9) {
    MyStack<int> st(2);
    st.push(3);
    st.push(4);
    st.pop();
    EXPECT_EQ(3, st.get());
}

TEST(MyStackTest, test_10) {
    MyStack<int> st(2);
    st.push(3);
    st.push(4);
    EXPECT_EQ(4, st.get());
}
