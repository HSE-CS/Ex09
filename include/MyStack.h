#ifndef EX09_MY_STACK_H
#define EX09_MY_STACK_H

template < typename T >
class MyStack
{
private:
    T *arr;
    int top;
    int amount;
public:
    explicit MyStack(int num)
    {
        arr = new T[num];
        top = -1;
        amount = num;
    }
    MyStack(const MyStack &stack)
    {
        arr = stack.arr;
        top = stack.top;
        amount = stack.amount;
    }
    ~MyStack()
    {
        delete[] arr;
    }
    T get() const
    {
        if (!isEmpty()) {
            return arr[top];
        } else {
            throw "ERROR";
        }
    }
    bool isEmpty() const
    {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }
    bool isFull() const
    {
        if (top == amount - 1) {
            return true;
        } else {
            return false;
        }
    }
    T pop()
    {
        if (!isEmpty()) {
            top--;
            return arr[top + 1];
        } else {
            throw "ERROR";
        }
    }
    void push(T el)
    {
        if (!isFull()) {
            top++;
            arr[top] = el;
        } else {
            throw "ERROR";
        }
    }
};

#endif //EX09_MY_STACK_H
