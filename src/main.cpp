#include "MyStack.h"
#include <iostream>
#include <iomanip>
using namespace std;

	int main() 
	{
		MyStack<int> st(5);
		st.push(1);
		st.push(2);
		st.push(3);

		while (!st.isEmpty())
			cout << st.pop() << " ";
		return 0;

	}