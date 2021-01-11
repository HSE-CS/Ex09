// Copyright 2021 by me
#include <iostream>
#include <random>
#include "../include/MyStack.h"

int main() {
    MyStack<int> test1(10);
    while (!test1.isFull()) {  // заполним случайными числами,
        test1.push(std::rand() % 100);  // пока стек не полон
    }
    MyStack<int> test2(test1);  // скопируем первый стек
    while (!test1.isEmpty()) {  // проверим как сработало копирование 
        std::cout << test1.get() << " ";  // и протестируем функцию get
        std::cout << test1.pop() << " ";  // и pop
        std::cout << test2.pop() << "\n";
    }
    int a[10];  // с помощью стека перевернем массив
    for (size_t i = 0; i < 10; ++i) {
        a[i] = std::rand() % 10;
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
    }  // получаем перевернутый массив на выходе
    return 0;
}
