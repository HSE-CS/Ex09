// Copyright [2021] <Nikita Semaev>
#include <iostream>
#include <string>
#include "../include/MyStack.h"

int main() {
    std::string str = "(()((())))((()()))()";
    MyStack <char> stack(str.size());
    for (auto c : str) {
        if (c == '(') {
            stack.push(c);
        } else {
            stack.pop();
        }
    }
    std::cout << (stack.isEmpty() ? "YES" : "NO");
    return 0;
}
