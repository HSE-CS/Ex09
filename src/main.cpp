// Copyright 13.12.20 KostinAndrej
#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> st(10);
    st.push(400);
    st.push(2);
    st.push(3);
    st.push(229);
    st.push(228);
    st.push(322);
    if (st.isFull())
        std::cout << "Stack is full:(" << "\n";
    else
        std::cout << "There's still room:)" << "\n";
    if (st.isEmpty())
        std::cout << "Stack is empty(((" << "\n";
    else
        std::cout << "COOL! Stack isn't empty))))" << "\n";

    while (!st.isEmpty())
        std::cout << st.pop() << " ";
    if (st.isEmpty())
        std::cout << "\n" <<"Stack is empty(((" << "\n" << "\n" << "\n";

    MyStack<std::string> st_1(5);
    st_1.push("capitan Andrej \"ALWAYSWANNAFLY\" Bondarenko");
    st_1.push("Vladimir \"RodjER\" Nikogosian");
    st_1.push("Victor \"GeneRaL\" Nigrini");
    st_1.push("Bogdan \"Iceberg\" Vasilenko");
    st_1.push("Alik \"V-TUNE\" Vorobey");
    st_1.push("sostav NA'VI");
    if (st_1.isFull())
        std::cout << "Stack is full:(" << "\n";
    else
        std::cout << "There's still room:)" << "\n";
    if (st_1.isEmpty())
        std::cout << "Stack is empty(((" << "\n";
    else
        std::cout << "COOL! Stack isn't empty))))" << "\n";
    while (!st_1.isEmpty()) {
        std::cout << st_1.pop() << "\n";
    }
    return 0;
}
