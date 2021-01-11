// Copyright 2021 by me
#include "../include/MyStack.h"
#include <iostream>
#include<time.h>

int main() {
    MyStack<int> test1(10);
    srand(time(0));
    while (!test1.isFull()) {   // �������� ���������� �������,
        test1.push(rand() % 100); // ���� ���� �� �����
    }
    MyStack<int> test2(test1); // ��������� ������ ����
    while (!test1.isEmpty()) { // �������� ��� ��������� ����������� 
        std::cout << test1.get() << " "; // � ������������ ������� get
        std::cout << test1.pop() << " "; // � pop 
        std::cout << test2.pop() << "\n";
    }
    int a[10];  // � ������� ����� ���������� ������
    for (size_t i = 0; i < 10; ++i) {
        a[i] = rand() % 10;
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
    MyStack<int> test3(10);
    for (auto i : a) {
        test3.push(i);
    }
    for (size_t i = 0; i < 10; ++i) {
        a[i] = test3.pop();
        std::cout << a[i] << " ";
    } // �������� ������������ ������ �� ������
    return 0;
}