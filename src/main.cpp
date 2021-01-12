//  Copyright 2021 Nikita Naumov
#include "MyStack.h"

int main() {
    std::cout.precision(3);
    int size = 20;
    MyStack<double> st1(size);
    std::cout << "Is the stack empty? " << st1.isEmpty() << std::endl;
    for (size_t i = 0; i < size; ++i) {
        st1.push(static_cast<double>(rand_r(NULL)%321)/320 +
                                        (rand_r(NULL)%10-5));
    }

    MyStack<double> copySt(st1);
    std::cout << "Print stack in reverse order" << std::endl;
    for (size_t i = 0; i < size; ++i) {
        std::cout << copySt.pop() << "\t";
    }
    std::cout << std::endl;
    std::cout << "Is the stack empty now? " << st1.isEmpty() << std::endl;
    std::cout << "Is the stack full? " << st1.isFull() << std::endl;
    std::cout << "What's the last element? " << st1.get() << std::endl;
    std::cout << "Let's pop last element " << st1.pop() << std::endl;
    std::cout << "What's the last element now? " << st1.get() << std::endl;
    MyStack<double> st2(st1);
    std::cout << "What's the last element in copied stack? "
                                        << st1.get() << std::endl;

    return 0;
}
