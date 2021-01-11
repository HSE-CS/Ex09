#include "MyStack.h"
#include <iostream>
using namespace std;
int main()
{
    MyStack <int> myStack(5);
    for (int i = 0; i < 5; i++)
    {
        int temp;
        std:: cin >> temp;
        myStack.push(temp);

    }
    while(!myStack.isEmpty())
       std::cout << myStack.pop() << " ";
    return 0;
}
