// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

/*

Простейшие логические

ASSERT_TRUE(condition);
ASSERT_FALSE(condition);


Сравнение

ASSERT_EQ(expected, actual); — =
ASSERT_NE(val1, val2); — !=
ASSERT_LT(val1, val2); — <
ASSERT_LE(val1, val2); — <=
ASSERT_GT(val1, val2); — >
ASSERT_GE(val1, val2); — >=


Сравнение строк

ASSERT_STREQ(expected_str, actual_str);
ASSERT_STRNE(str1, str2);
ASSERT_STRCASEEQ(expected_str, actual_str); — регистронезависимо
ASSERT_STRCASENE(str1, str2); — регистронезависимо


Проверка на исключения

ASSERT_THROW(statement, exception_type);
ASSERT_ANY_THROW(statement);
ASSERT_NO_THROW(statement);


Проверка предикатов

ASSERT_PREDN(pred, val1, val2, ..., valN); — N <= 5
ASSERT_PRED_FORMATN(pred_format, val1, val2, ..., valN); — работает аналогично предыдущей, но позволяет контролировать вывод


Сравнение чисел с плавающей точкой

ASSERT_FLOAT_EQ(expected, actual); — неточное сравнение float
ASSERT_DOUBLE_EQ(expected, actual); — неточное сравнение double
ASSERT_NEAR(val1, val2, abs_error); — разница между val1 и val2 не превышает погрешность abs_error


Вызов отказа или успеха

SUCCEED();
FAIL();
ADD_FAILURE();
ADD_FAILURE_AT(«file_path», line_number);

*/

TEST(MyStackTest, test2) {
    MyStack<int> s(5);
    s.push(-23478);
    EXPECT_EQ(s.pop(), -23478);
}

TEST(MyStackTest, test3) {
    MyStack<int> s(5);
    s.push(1);
    s.push(2);
    s.pop();
    EXPECT_EQ(s.pop(), 1);
}

TEST(MyStackTest, test4) {
    MyStack<int> s(5);
    s.push(1);
    s.pop();
    s.push(2);
    s.pop();
    s.push(3);
    EXPECT_EQ(s.pop(), 3);
}

TEST(MyStackTest, test5) {
    MyStack<int> s(1);
    s.push(43232);
    ASSERT_TRUE(s.isFull());
}

TEST(MyStackTest, test6) {
    MyStack<int> s(3);
    for (int i = 0; i < 3; ++i)
        s.push(i);
    ASSERT_TRUE(s.isFull());
}

TEST(MyStackTest, test7) {
    MyStack<int> s(3);
    s.push(0);
    s.push(0);
    s.push(0);
    s.pop();
    s.pop();
    s.pop();
    ASSERT_TRUE(s.isEmpty());
}

TEST(MyStackTest, test8) {
    MyStack<int> s(3);
    for (int i = 0; i < 3; ++i)
        s.push(i);
    ASSERT_FALSE(s.isEmpty());
}

TEST(MyStackTest, test9) {
    MyStack<int> s(3);
    s.push(0);
    s.push(0);
    s.push(0);
    s.pop();
    s.pop();
    s.pop();
    ASSERT_FALSE(s.isFull());
}

TEST(MyStackTest, test10) {
    MyStack<int> s(5);
    s.push(4895);
    s.pop();
    ASSERT_TRUE(s.isEmpty());
}

TEST(MyStackTest, test11) {
    MyStack<char> s(5);
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    EXPECT_EQ('o', s.get());
}

TEST(MyStackTest, test12) {
    MyStack<std::string> s(5);
    s.push(std::string("Hard as a rock!"));
    std::string a = "Hard as a rock!";
    EXPECT_EQ(a, s.pop());
}

TEST(MyStackTest, test13) {
    MyStack<char> s(5);
    s.push(0);
    EXPECT_EQ('\0', s.pop());
}

TEST(MyStackTest, test14) {
    MyStack<int64_t> s(5);
    s.push(1e18 + 1);
    s.push(1e18 + 2);
    s.push(1e18 + 3);
    s.pop();
    EXPECT_EQ(1e18 + 2, s.pop());
}


TEST(MyStackTest, test15) {
    MyStack<int>s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    MyStack<int> t(s);
    EXPECT_EQ(t.pop(), 3);
}
