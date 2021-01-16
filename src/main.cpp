// Copyright 2020 Bugrov
#include <iostream>
#include "MyStack.h"

int main() {
	MyStack<int> st(10);
	std::cout << st.isEmpty() << '\n';
	st.push(1);
	std::cout << st.get() << '\n';
	st.push(1);
	st.push(1);
	std::cout << st.isFull() << '\n';
	st.push(4);
	std::cout << st.isFull() << '\n';
	while (!st.isEmpty())
		std::cout << st.pop() << " ";
	return 0;
}