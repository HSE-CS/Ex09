// Copyright 2020 Bogomazov
#include "../include/MyStack.h";

template<type Typ>
MyStack<Typ>::MyStack(int size) {
    stackSize = size;
    stackArray = new Typ[stackArray];
}

template<type Typ>
MyStack<Typ>::~MyStack() {
    delete[] stackArray;
    stackSize = 0;
}