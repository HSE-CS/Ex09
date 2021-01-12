// Copyright 2020 <Jiiijyyy>
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_
#include <cmath>
#include <iostream>
#include <string>
#include <cstring>

class MyString {
 private:
    char* string;
    unsigned int len;

 public:
    MyString();
    explicit MyString(const char*);
    explicit MyString(std::string);
    MyString(const MyString&);
    MyString(MyString&&);
    ~MyString();
    unsigned int length();
    char* get();

#endif  // INCLUDE_MYSTRING_H_

