// Copyright 2021 Sozinov Kirill
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1_1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test1_2) {
    MyStack<int> st(5);
    st.push(1);

    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test1_3) {
    MyStack<int> st(1);
    st.push(2);
    st.pop();

    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2_1) {
    MyStack<int> st(2);
    st.push(3);

    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test2_2) {
    MyStack<int> st(1);
    st.push(4);

    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test3_1) {
    MyStack<int> st(2);
    st.push(5);

    EXPECT_EQ(5, st.get());
}

    TEST(MyStackTest, test3_2) {
    MyStack<int> st(2);
    st.push(6);

    EXPECT_EQ(6, st.pop());
}

TEST(MyStackTest, test4_1) {
    MyStack<int> st(1);

    EXPECT_EQ(0, st.pop());
}


TEST(MyStackTest, test4_2) {
    MyStack<int> st(5);

    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test4_3) {
    MyStack<int> st(5);
    st.push(7);
    st.push(8);
    st.push(9);
    st.pop();

    EXPECT_EQ(8, st.get());
}
