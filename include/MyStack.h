// Copyright 2021 milalupehina

#include <iostream>

#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<typename T>
class MyStack {
    // Разработать шаблон класса MyStack.
 private:
    T *stack;
    int topIndex;
    int sizeStack;

 public:
    // конструктор с роодним параметром.
    explicit MyStack(int size) {
        this->stack = new T[size];
        this->topIndex = -1;
        this->sizeStack = sizeStack;
    }

    // конструктор копирования.
    MyStack(const MyStack &copiedOne) {
        this->topIndex = copiedOne.topIndex;
        this->sizeStack = copiedOne.sizeStack;
        this->stack = new T[copiedOne.sizeStack];
        for (int i = 0; i < this->sizeStack; ++i) {
            this->stack[i] = copiedOne.stack[i];
        }
    }

    // деструктор.
    ~MyStack() {
        delete[] this->stack;
    }

    // - возвращение эелемента на вершине стека
    // (без изменения состояния последнего).
    // get() const

    T get() const {
        if (this->topIndex != -1) {
            return this->stack[this->topIndex];
        } else {
            std::cout << "empty";
        }
    }

    // - выталкивание элемента из стека.
    // pop()
    T pop() {
        if (this->topIndex == -1) {
            std::cout << "Nothing to pop";
        } else {
            T popping = this->stack[this->topIndex];
            this->stack[(this->topIndex)--] = -2;
            return popping;
        }
    }

    // - добавление элемента в стек.
    // push()
    void push(T classInstance) {
        if (this->topIndex == this->sizeStack - 1) {
            std::cout << "Nowhere to push";
        } else {
            this->stack[++this->topIndex] = classInstance;
        }
    }

    // - проверка заполненности стека.
    // isFull() const
    bool isFull() const {
        return (this->topIndex == this->sizeStack - 1);
    }

    // - проверка пустоты стека.
    // isEmpty() const
    bool isEmpty() const {
        return (this->topIndex == -1);
    }
};

#endif  // INCLUDE_MYSTACK_H_

/*
// Copyright 2020 milalupehina

#include <iostream>
#include <string>

#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_

class MyString {
 private:
    char *str = new char;

 public:
    explicit MyString(const char * = nullptr);
    explicit MyString(const std::string&);
    MyString(const MyString &);
    MyString(MyString &&);
    ~MyString();
    int length() const;
    char* get() const;

    MyString operator+(const MyString &);
    MyString operator-(const MyString &);
    MyString operator*(int);
    MyString &operator=(const MyString &);
    MyString &operator=(MyString &&);

    char &operator[](int) const;
    int operator()(const char *);

    friend std::ostream &operator<<(std::ostream &, MyString &);
    friend std::istream &operator>>(std::istream &, MyString &);

    bool operator==(const MyString &) const;
    bool operator!=(const MyString &) const;
    bool operator>(const MyString &) const;
    bool operator<(const MyString &) const;
    bool operator>=(const MyString &) const;
    bool operator<=(const MyString &) const;

    MyString operator!();    //  - у латинских букв меняется регистр.
};

#endif  // INCLUDE_MYSTRING_H_


 */
