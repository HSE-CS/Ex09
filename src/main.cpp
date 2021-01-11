#include "MyStack.h"
#include <iostream>
int main()
{
    MyStack <int> mystack(5);
    int ct = 0;
    while (ct++ != 5)
    {
        int temp;
        std:: cin >> temp;
        myStack.push(temp);
    }
    myStack.pop();
    myStack.pop();
    return 0;
}
