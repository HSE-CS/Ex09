#include "MyStack.h"
#include <gtest/gtest.h>
#include <string>

TEST(MyTest, test1) {
    MyStack<int> st(3);
    EXPECT_EQ(true, st.isEmpty());
}

TEST(MyTest, test2) {
    MyStack<int> st(1);
    st.push(8);
    EXPECT_EQ(true, st.isFull());
}
TEST(MyTest, test3) {
    MyStack<int> st(2);
    st2.push(228);
    EXPECT_EQ(228,st.get());
}
TEST(MyTest, test4) {
    MyStack<double> st(4);
    st.push(2.228);
    st.push(1.337);
    st.pop();
    st.push(1.437);
    EXPECT_EQ(1.437,st.get());
}
TEST(MyTest, test5) {
    MyStack<double> st(1);
    st.push(1.8);
    EXPECT_EQ(1.8, st.get());
}
TEST(MyTest, test6) {
    MyStack<char> st(3);
    st.push('h');
    st.push('y');
    st.push('p');
    EXPECT_EQ('p', st.get());
}
TEST(MyTest, test7) {
    MyStack<char> st(3);
    st.push('h');
    st.push('y');
    st.pop();
    st.push('p');
    st.pop();
    EXPECT_EQ('h', st.get());
}
TEST(MyTest, test8) {
    MyStack<string> st(4);
    st.push("Hi");
    st.pop();
    st.push("Welcome");
    EXPECT_EQ("Welcome", st.get());
}
TEST(MyTest, test9) {
    MyStack<int> st(4);
    st.push(8);
    st.push(3);
    st.pop();
    st.pop();
    EXPECT_EQ(false, st.isFull());
}
TEST(MyTest, test10) {
    MyStack<int> st(4);
    st.push(8);
    st.push(3);
    st.pop();
    st.pop();
    EXPECT_EQ(true, st.isEmpty());
}
