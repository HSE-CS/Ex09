// Copyright 2020 Baklanov

#ifndef INCLUDE_MYSTACK_H_ 

#define INCLUDE_MYSTACK_H_ 

template<typename Stack>
class MyStack {
 private:
Stack* stackPtr;  // указатель на стек
int size;  // размер стека
Stack top;  // вершина стека
 public:
MyStack() {
this->size = 0;
this->stackPtr = 0;
this->top = 0;
}
explicit MyStack(int size) {
this->size = size;
this->stackPtr = new Stack[size];
this->top = 0;
}
~MyStack() {
delete[] stackPtr; // удаляем стек
};
void push(const Stack phead) {
++top;
stackPtr[top] = phead; // помещаем элемент в стек
};
Stack pop() {
Stack value;
if (top != -1) {
	value = stackPtr[top];
	stackPtr[top] = 0; // удаляем элемент из стека
	--top;
}
else return 0;
return value;
};
bool isFull() {
if (top == 0) return true;
else {
	if (top == size) return true;
	return false;
}
}
bool isEmpty() {
if (top == 0) return true;
return false;
}
Stack get() {
return stackPtr[top];
};
};

#endif  // INCLUDE_MYSTACK_H_


