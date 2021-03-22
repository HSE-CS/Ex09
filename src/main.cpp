#include <iostream>
#include <string>
#include "../include/MyStack.h"
using namespace std;


int main(){
	MyStack<int> st(10);
	st.push(1);
//	st.push(10);
//	st.push(rand());
//	st.push(rand());
//	st.push(rand());

	while(!st.isEmpty())
	   std::cout << st.pop() <<" ";
//	string str = "(()((())))((()()))()";
//	MyStack <char> stack(str.size());
//	cout << "ok2";
//	for(auto c: str){
//		if(c == '('){
//			stack.push(c);
//		}
//		else{
//			stack.pop();
//		}
//		cout << c << endl;
//	}

	// cout << stack.isEmpty() ? "YES" : "NO";

	cout << "end of program";
	return 0;
}
