// Copyright 2021 Stifeev Nikita
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(100);
    EXPECT_EQ(100, st.get());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(StackTest, test4) {
    MyStack<double> st(5);
    st.push(1.5);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test5) {
    MyStack<int> st(5);
    EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<int> st(5);
    st.push(155);
    st.push(255);
    st.pop();
    EXPECT_EQ(155, st.get());
}

TEST(MyStackTest, test7) {
    MyStack<char> st(5);
    st.push('a');
    st.push('b');
    st.push('c');
    st.push('d');
    st.push('e');
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test8) {
    MyStack<int> st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(4);
    EXPECT_EQ(4, st.get());
}

TEST(MyStackTest, test9) {
    MyStack<std::string> st(5);
    st.push("Hello");
    st.pop();
    st.push("World!");
    EXPECT_EQ("World!", st.get());
}

TEST(MyStackTest, test10) {
    MyStack<double> st(5);
    st.push(1.1);
    st.push(2.2);
    MyStack<double> st2(st);
    st2.push(2.2);
    st2.push(1.1);
    EXPECT_EQ(1.1, st2.get());
}

TEST(MyStackTest, test11) {
    MyStack<char> st(6);
    st.push('a');
    st.push('1');
    st.push('b');
    st.pop();
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}
