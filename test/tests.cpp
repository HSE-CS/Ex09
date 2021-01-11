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
    st.push(2);
    EXPECT_EQ(2, st.get());
}
TEST(MyStackTest, test3) {
    MyStack<std::string> st(5);
    st.push("Kek");
    EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test4) {
    MyStack<int> st(0);
    st.push(2);
    st.push(24);
    EXPECT_EQ(true, st.isFull());
}
TEST(MyStackTest, test5) {
    MyStack<int> st(1);
    st.push(42);
    EXPECT_EQ(42, st.get());
}
TEST(MyStackTest, test6) {
    MyStack<int> st(1);
    st.push(42);
    st.pop();
    EXPECT_EQ(-1, st.get());
}
TEST(MyStackTest, test7) {
    MyStack<int> st(1);
    st.push(42);
    st.push(44);
    st.pop();
    EXPECT_EQ(42, st.get());
}
TEST(MyStackTest, test8) {
    MyStack<std::string> st(10);
    st.push("22");
    st.push("qwe");
    st.pop();
    EXPECT_EQ("22", st.get());
}
TEST(MyStackTest, test124) {
    MyStack<int> st(5);
    st.push(124);
    EXPECT_EQ(false, st.isEmpty());
}
TEST(MyStackTest, test10) {
    MyStack<int> st(5);
    const MyStack<int> &st2 = st;
    EXPECT_EQ(true, st2.isEmpty());
}
