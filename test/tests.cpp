// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, is_empty_on_creation){
    MyStack<int> st(5);
    EXPECT_TRUE(st.isEmpty());
}

TEST(MyStackTest, zero_capacity_is_prohibited){
    ASSERT_ANY_THROW(MyStack<int>(0));
}

TEST(MyStackTest, push_and_get){
    MyStack<int> st(1);
    st.push(11);
    ASSERT_EQ(11, st.get());
}

TEST(MyStackTest, expands_if_necessary){
    MyStack<int> st(1);
    ASSERT_NO_THROW(st.push(1));
    ASSERT_NO_THROW(st.push(2));
    EXPECT_FALSE(st.isFull());
}

TEST(MyStackTest, pop){
    MyStack<int> st(1);
    st.push(1);
    st.push(21);
    EXPECT_EQ(21, st.pop());
    EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, get_from_empty_throws){
    MyStack<int> st(3);
    ASSERT_ANY_THROW(st.get());
}

TEST(MyStackTest, pop_from_empty_throws){
    MyStack<int> st(3);
    ASSERT_ANY_THROW(st.pop());
}


TEST(MyStackTest, emptying){
    MyStack<int> st(1);
    st.push(1);
    st.push(2);
    ASSERT_FALSE(st.isEmpty());
    st.pop();
    st.pop();
    ASSERT_TRUE(st.isEmpty());
}

TEST(MyStackTest, populating){
    MyStack<int> st(1);
    ASSERT_TRUE(st.isEmpty());
    st.push(1);
    st.push(2);
    ASSERT_FALSE(st.isEmpty());
}

TEST(MyStackTest, copy){
    MyStack<int> st(3);
    st.push(1);
    st.push(10);
    st.push(100);
    MyStack<int> st2(st);
    ASSERT_EQ(100, st2.pop());
    ASSERT_EQ(10, st2.pop());
    ASSERT_EQ(1, st2.pop());
}
