// Copyright Roman Balayan @ 2021

#include <gtest/gtest.h>
#include "MyStack.h"

TEST(MyStackTest, test1) {
    MyStack<int> st(5);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    st.push(1);
    EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, can_create_stack_with_positive_size) {
    ASSERT_NO_THROW(MyStack<int> st(5));
}

TEST(MyStackTest, can_not_create_stack_with_positive_size) {
    ASSERT_ANY_THROW(MyStack<int> st(-5));
}

TEST(MyStackTest, can_create_copied_stack) {
    MyStack<int> st(5);
    ASSERT_NO_THROW(MyStack<int> st1(st));
}

TEST(MyStackTest, copied_stack_has_its_own_memory) {
    MyStack<int> st(5);
    MyStack<int> st2(st);
    EXPECT_NE(&st, &st2);
}

TEST(MyStackTest, correct_get) {
    MyStack<int> st(5);
    st.push(1);
    EXPECT_EQ(1, st.get());
}

TEST(MyStackTest, correct_pop) {
    MyStack<int> st(5);
    st.push(2);
    EXPECT_EQ(2, st.pop());
}

TEST(MyStackTest, empty_after_pop) {
    MyStack<int> st(5);
    st.push(3);
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, is_full) {
    MyStack<int> st(5);
    for (int i = 0; i < 5; ++i)
        st.push(i);
    EXPECT_EQ(true, st.isFull());
}