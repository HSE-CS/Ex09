// Copyright 2021 Toliman

#include "../include/MyStack.h"

signed main() {
    MyStack<int> s(3);
    s.push(1);
    s.push(3);

    MyStack<int> t(3);
    t.push(8924389);
    t.push(89489);
    MyStack<int> u(t);

    return 0;
}
