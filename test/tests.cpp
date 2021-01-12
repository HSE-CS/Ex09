// Copyright 2020 GHA Test Team
#include <gtest/gtest.h>

#include <string>

#include "MyStack.h"

TEST(MyStackTest, new_inst) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, full) {
  MyStack<int> st(5);
  st.push(10);
  st.push(10);
  st.push(10);
  st.push(10);
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, with_elems) {
  MyStack<int> st(5);
  st.push(10);
  st.push(10);
  st.push(10);
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, get) {
  MyStack<int> st(5);
  st.push(10);
  EXPECT_EQ(10, st.get());
  st.push(20);
  EXPECT_EQ(20, st.get());
  st.pop();
  EXPECT_EQ(10, st.get());
}

TEST(MyStackTest, empty_reset) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
  st.push(10);
  EXPECT_EQ(false, st.isEmpty());
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, full_reset) {
  MyStack<int> st(5);
  EXPECT_EQ(false, st.isFull());
  st.push(10);
  st.push(10);
  st.push(10);
  st.push(10);
  st.push(10);
  EXPECT_EQ(true, st.isFull());
  st.pop();
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, copy) {
  MyStack<int> st(5);
  st.push(5);
  st.push(6);
  st.push(7);
  MyStack<int> copy(st);
  EXPECT_EQ(copy.isEmpty(), st.isEmpty());
  EXPECT_EQ(copy.isFull(), st.isFull());
  EXPECT_EQ(copy.get(), st.get());
  EXPECT_EQ(copy.pop(), st.pop());
  EXPECT_EQ(copy.pop(), st.pop());
  EXPECT_EQ(copy.pop(), st.pop());
}

TEST(MyStackTest, loop) {
  MyStack<int> st(5);
  int arr[] = {10, 9, 8, 7, 6};
  int *ptr = arr;
  while (!st.isFull()) {
    st.push(*ptr);
    ptr += 1;
  }
  while (!st.isEmpty()) {
    ptr -= 1;
    EXPECT_EQ(*ptr, st.pop());
  }
}

TEST(MyStackTest, str) {
  MyStack<std::string> st(5);
  st.push("ay");
  st.push("bee");
  st.push("sea");
  EXPECT_STREQ("sea", st.get().c_str());
  EXPECT_STREQ("sea", st.pop().c_str());
  EXPECT_STREQ("bee", st.pop().c_str());
  EXPECT_STREQ("ay", st.get().c_str());
  EXPECT_STREQ("ay", st.pop().c_str());
}

TEST(MyStackTest, multiple) {
  MyStack<int> st(5);
  int arr[] = {10, 9, 8, 7, 6};
  int arr2[] = {5, 4, 3, 2, 1};
  int *ptr = arr;
  while (!st.isFull()) {
    st.push(*ptr);
    ptr += 1;
  }
  while (!st.isEmpty()) {
    ptr -= 1;
    EXPECT_EQ(*ptr, st.pop());
  }
  ptr = arr2;
  while (!st.isFull()) {
    st.push(*ptr);
    ptr += 1;
  }
  while (!st.isEmpty()) {
    ptr -= 1;
    EXPECT_EQ(*ptr, st.pop());
  }
}
