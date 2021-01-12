//
//  main.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 12.01.2021.
//  Copyright © 2021 Daniil Ivanov. All rights reserved.
//
#include "MyStack.h"

int main() {
	MyStack<int> stack(20);

	for (size_t i = 0; i < 20; i++) {
		stack.push(i);
	}
	std::cout << stack.isFull() << std::endl;

	while (!(stack.isEmpty())) {
		std::cout << stack.pop() << ' ';
	}
	std::cout << std::endl;
	return 0;
}
