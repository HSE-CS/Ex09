// Copyright 2021 by Liza
#include "MyStack.h"
#include <iostream>


	int main() 
	{
		MyStack<int> st(5);
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		st.push(5);

		while (!st.isEmpty())
			std::cout << st.pop() << " ";
		return 0;

	}