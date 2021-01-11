//// Copyright 2021 Ozhiganova Polina
#include "gtest/gtest.h"
#include "MyStack.h"

TEST(MyStack, check_get) {  // 1
  MyStack<int> st(1);
  st.push(5);
  int rez = 5;
  ASSERT_EQ(rez, st.get());
}

TEST(MyStack, check_pop) { // 2
  MyStack<int> st(1);
  st.push(5);
  int rez = 5;
  ASSERT_EQ(rez, st.pop());
}

TEST(MyStack,check_full) {  // 3
  MyStack<int> st(3);
  st.push(5);
  st.push(10);
  st.push(15);
  bool rez = true;
  ASSERT_EQ(rez, st.isFull());
}

TEST(MyStack,check_empty) {  // 4
  MyStack<int> st(1);
  st.push(5);
  st.pop();
  bool rez = true;
  ASSERT_EQ(rez, st.isEmpty());
}

TEST(MyStack,not_empty) {  // 5
  MyStack<int> st(1);
  st.push(5);
  ASSERT_FALSE(st.isEmpty());
}

TEST(MyStack,check_true) {  // 6
  MyStack<int> st(1);
  ASSERT_TRUE(st.isEmpty());
}

TEST(MyStack,check_warning) {  // 7
  MyStack<int> st(2);
  st.push(1);
  st.push(2);
  st.pop();
  st.pop();
  int rez = INT_MAX;
  ASSERT_EQ(rez, st2.pop());
}

TEST(MyStack,check_get_empty) {  // 8
  MyStack<int> st(1);
  int rez = INT_MAX;
  ASSERT_EQ(rez, st.get());
}

TEST(MyStack,check_false) {  // 9
  MyStack<int> st(5);
  st.push(5);
  ASSERT_FALSE(st.isFull());
}

TEST(MyStack,check_2nd_get) {  // 10
  MyStack<int> st(2);
  st.push(1);
  st.push(2);
  st.get();
  int rez = 2;
  ASSERT_EQ(rez, st.get());
}