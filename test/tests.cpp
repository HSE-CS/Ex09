// Copyright 12.01.21 DenisKabanov

#include <string>
#include "gtest/gtest.h"
#include "MyStack.h"

TEST(Test, test1) {
    MyStack<int> st1(1);
    st1.push(525);
    EXPECT_EQ(525, st1.get());
}

TEST(Test, test2) {
    MyStack<int> st2(2);
    st2.push(525);
    st2.push(123);
    EXPECT_EQ(123, st2.get());
}

TEST(Test, test3) {
    MyStack<int> st3(2);
    st3.push(525);
    st3.push(123);
    EXPECT_EQ(123, st3.pop());
}

TEST(Test, test4) {
    MyStack<int> st4(1);
    st4.push(525);
    EXPECT_EQ(525, st4.pop());
}

TEST(Test, test5) {
    MyStack<int> st5(1);
    st5.push(42);
    EXPECT_EQ(false, st5.isEmpty());
}

TEST(Test, test6) {
    MyStack<int> st6(1);
    st6.push(42);
    EXPECT_EQ(true, st6.isFull());
}

TEST(Test, test7) {
    MyStack<int> st7(1);
    EXPECT_EQ(true, st7.isEmpty());
}

TEST(Test, test8) {
    MyStack<int> st8(100);
    EXPECT_EQ(false, st8.isFull());
}

TEST(Test, test9) {
    MyStack<int> st9(5);
    st9.push(525);
    st9.push(123);
    st9.pop();
    EXPECT_EQ(525, st9.pop());
}

TEST(Test, test10) {
    MyStack<int> st10(5);
    st10.push(525);
    st10.push(123);
    st10.pop();
    EXPECT_EQ(525, st10.get());
}
