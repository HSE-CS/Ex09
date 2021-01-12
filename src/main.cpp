#include "../include/MyStack.h"
using namespace std;

int main(){
    MyStack<int> stack(5);
    stack.push(32);
    stack.push(-5);
    stack.push(1);
    stack.push(0);
    stack.push(-46354);
    cout << "Create stack and push 2 elements:" << endl;
    stack.printStack();

    cout << "Get last element:" << endl;
    cout << stack.get() << endl << endl;

    cout << "Pop last element: " << endl;
    cout << "removed element: " << stack.pop() << endl;
    stack.printStack();

    cout << "Copy constructor:" << endl;
    MyStack<int> copy_stack(stack);
    copy_stack.printStack();

    cout << "Is it empty? - " << copy_stack.isEmpty() << endl;
    cout << "Is it full? - " << copy_stack.isFull() << endl << endl;

    cout << "After push 1 element" << endl;
    copy_stack.push(10);
    cout << "Is it empty? - " << copy_stack.isEmpty() << endl;
    cout << "Is it full? - " << copy_stack.isFull() << endl << endl;

    while (!copy_stack.isEmpty())
        copy_stack.pop();
    cout << "After push all elements" << endl;
    cout << "Is it empty? - " << copy_stack.isEmpty() << endl;
    cout << "Is it full? - " << copy_stack.isFull() << endl << endl;

    return 0;
}