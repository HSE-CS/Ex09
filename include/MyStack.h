// Copyright 2020 Bogomazov
#ifndef INCLUDE_MYSTACK_H_
#define INCLUDE_MYSTACK_H_

template<class Typ>
class MyStack {
 private:
    int amountOfElements = 0;
    int stackSize;
    Typ* stackArray;

 public:
    explicit MyStack(int size) {
        stackSize = size;
        stackArray = new Typ[stackSize];
    }
    MyStack(const MyStack &stack):
        amountOfElements(stack.amountOfElements),
        stackSize(stack.stackSize), stackArray(stack.stackArray) {}

    ~MyStack() {
        delete[] stackArray;
        stackSize = 0;
    }
    void push(Typ el) {
        stackArray[amountOfElements] = el;
        amountOfElements++;
    }
    Typ pop() {
        Typ temp = stackArray[amountOfElements-1];
        Typ *resized = new Typ[amountOfElements - 1];
        for (int i = 0; i < amountOfElements - 1; i ++)
            resized[i] = stackArray[i];

        delete[] stackArray;
        amountOfElements--;
        stackArray = resized;
        return temp;
        }
    Typ get() const {
        return stackArray[amountOfElements-1];
    }
    bool isFull() const {
        return amountOfElements == stackSize;
    }
    bool isEmpty() const {
        return amountOfElements == 0;
    }
};

#endif  // INCLUDE_MYSTACK_H_
