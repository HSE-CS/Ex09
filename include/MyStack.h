template <typename T>
class MyStack
{
private:
    T *stackPtr;
    int size;
    T top;
public:
    MyStack(int = 10);
    ~MyStack();
    bool push(const T);
    bool pop();
    bool isFull();
    bool isEmpty();
    T get();
};
