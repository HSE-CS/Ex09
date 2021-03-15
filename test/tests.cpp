// Copyright 2021 by Liza
#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyStack, test1) {
MyStack<int> st(3);
st.push(1);
st.push(2);
st.push(3);
EXPECT_EQ(false, st.isEmpty());}
TEST(MyStack, test2) {
MyStack<int> st(3);
st.push(1);
st.push(3);
EXPECT_EQ(false, st.isEmpty());}
TEST(MyStack, test3) {
MyStack<int> st(3);
EXPECT_EQ(false, st.isFull());}
TEST(MyStack, test4) {
MyStack<int> st(3);
st.push(1);
EXPECT_EQ(false, st.isFull());}
TEST(MyStack, test5) {
MyStack<int> st(3);
st.push(3); 
EXPECT_EQ(3, st.get());}
TEST(MyStack, test6) {
MyStack<int> st(3);
st.push(1);
st.push(2);
EXPECT_EQ(2, st.get());}
TEST(MyStack, test7) {
MyStack<int> st(3);
st.push(1);
st.push(2);
st.pop();
EXPECT_EQ(1, st.get());}
TEST(MyStack, test8) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.push(3);
st.pop();
st.pop();
EXPECT_EQ(false, st.isEmpty());}
TEST(MyStack, test9) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.pop();
EXPECT_EQ(false, st.isFull());}
TEST(MyStack, test10) {
MyStack<int> st(5);
st.push(1);
st.push(2);
st.pop();
st.push(1234);
EXPECT_EQ(1234, st.get());}
