//
//  MyStack.h
//  programming-technologies
//
//  Created by Даниил Иванов on 12.01.2021.
//  Copyright © 2021 Daniil Ivanov. All rights reserved.
//


#pragma once
#ifndef MYSTACK_H
#define MYSTACK_H
#include <iostream>

template <typename T>
class MyStack {
private:
	size_t SizeMaximum;
	size_t SizeCurrent;
	T* value;
public:
	MyStack(size_t count) {
		SizeMaximum = count;
		SizeCurrent = 0;
		value = new T[SizeMaximum+1];
	}
	MyStack(const Mystack& copied) {
		
	}
	void push(T value) {
		if (isFull)
			return;
		this->value[SizeCurrent] = value;
		SizeCurrent++;
	}
	T pop() {
		if (isEmpty)
			return;
		SizeCurrent--;
		return value[SizeCurrent + 1];
	}
	bool isEmpty() {
		return SizeCurrent == 0;
	}
	bool isFull() {
		return SizeCurrent == SizeMaximum;
	}
	~MyStack() {
		delete[] value;
	}
};
#endif
